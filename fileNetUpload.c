#include <stdio.h>
#include <pthread.h>
#include "4tbox_define.h"
#include "general.h"

#define CAN_FILE_PATH "/media/sdcard"
#define LOG_FILE_PATH ""
extern param_t param;

static char canFilePath[64] = {0};
static char canFileUrl[128] = {0};

int writeCanMessege(unsigned char *data,int len);

void setCanMessegePath(int timeStamp){
	if(strlen(canFilePath) > 0){
		char cmd[128] = {0};
		sprintf(cmd,"rm %s",cmd);
		system(cmd);
	}
	sprintf(canFilePath,"%s/can_%s_%d",CAN_FILE_PATH,param.ICCID,timeStamp);

	unsigned char d[10] = {0,1,2,3,4,45,0,34};
	writeCanMessege(d,10);
	printf("&&&&&& can file Path = %s\n",canFilePath);
}

int writeCanMessege(unsigned char *data,int len){
	FILE *fd = fopen(canFilePath,"a");
	if(fd < 0){
		Log(__FUNCTION__,"open can file error\n");
		return -1;
	}

	int i =0;
	for(i;i<len;++i){
		fprintf(fd,"%2X",*(data+i));
	}
	
	fclose(fd);

	return len;
}


void *uploadCanFileThread(void callback(char *url)){
	char curlCmd[512] = {0};
	sprintf(curlCmd,"export LD_LIBRARY_PATH=/home/root:$LD_LIBRARY_PATH;/home/root/curl -F 'userfile=@%s' %s",canFilePath,canFileUrl);
	printf("curlCmd = %s\n",curlCmd);
	system(curlCmd);
	void (*func)(char *url) = callback;
	func(canFileUrl);
}

int uploadCanFile(char *url,void callBack(char *url)){
	memset(canFileUrl,0,sizeof(canFileUrl));
	memcpy(canFileUrl,url,strlen(url));
	pthread_t upload_pthread_t;
	int ret;
	ret = pthread_create(&upload_pthread_t,NULL,uploadCanFileThread,callBack);
	if(ret != 0)
	{
		Log(__FUNCTION__,"gps thread create failed!\n");
	}

	return ret;
}


