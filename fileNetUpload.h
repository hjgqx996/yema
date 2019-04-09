#ifndef __FILE_NET_UPLOAD_H
#define __FILE_NET_UPLOAD_H

void setCanMessegePath(int timeStamp);
int writeCanMessege(unsigned char *data,int len);
int uploadCanFile(char *url,void callBack(char *url));

#endif

