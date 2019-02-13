// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl_electromotor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ctrl_electromotor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* CtrlElectromotorMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CtrlElectromotorMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* ElectromotorStateInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ElectromotorStateInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ctrl_5felectromotor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_ctrl_5felectromotor_2eproto() {
  protobuf_AddDesc_ctrl_5felectromotor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ctrl_electromotor.proto");
  GOOGLE_CHECK(file != NULL);
  CtrlElectromotorMessage_descriptor_ = file->message_type(0);
  static const int CtrlElectromotorMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlElectromotorMessage, common_param_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlElectromotorMessage, electromotor_ctrl_info_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlElectromotorMessage, electromotor_state_info_),
  };
  CtrlElectromotorMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CtrlElectromotorMessage_descriptor_,
      CtrlElectromotorMessage::default_instance_,
      CtrlElectromotorMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlElectromotorMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(CtrlElectromotorMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CtrlElectromotorMessage, _internal_metadata_),
      -1);
  ElectromotorStateInfo_descriptor_ = file->message_type(1);
  static const int ElectromotorStateInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ElectromotorStateInfo, electromotor_on_off_),
  };
  ElectromotorStateInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ElectromotorStateInfo_descriptor_,
      ElectromotorStateInfo::default_instance_,
      ElectromotorStateInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ElectromotorStateInfo, _has_bits_[0]),
      -1,
      -1,
      sizeof(ElectromotorStateInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ElectromotorStateInfo, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ctrl_5felectromotor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CtrlElectromotorMessage_descriptor_, &CtrlElectromotorMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ElectromotorStateInfo_descriptor_, &ElectromotorStateInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ctrl_5felectromotor_2eproto() {
  delete CtrlElectromotorMessage::default_instance_;
  delete CtrlElectromotorMessage_reflection_;
  delete ElectromotorStateInfo::default_instance_;
  delete ElectromotorStateInfo_reflection_;
}

void protobuf_AddDesc_ctrl_5felectromotor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_ctrl_5felectromotor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_ctrl_5fcommon_5fparam_5ftbox_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027ctrl_electromotor.proto\032\034ctrl_common_p"
    "aram_tbox.proto\"\257\001\n\027CtrlElectromotorMess"
    "age\022*\n\014common_param\030\001 \001(\0132\024.CtrlCommonPa"
    "ramTbox\022/\n\026electromotor_ctrl_info\030\002 \001(\0132"
    "\017.CtrlCommonInfo\0227\n\027electromotor_state_i"
    "nfo\030\003 \001(\0132\026.ElectromotorStateInfo\"4\n\025Ele"
    "ctromotorStateInfo\022\033\n\023electromotor_on_of"
    "f\030\001 \001(\005B4\n\034com.mx.server.remote.v2.beanB"
    "\024CtrlElectromotorBean", 341);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ctrl_electromotor.proto", &protobuf_RegisterTypes);
  CtrlElectromotorMessage::default_instance_ = new CtrlElectromotorMessage();
  ElectromotorStateInfo::default_instance_ = new ElectromotorStateInfo();
  CtrlElectromotorMessage::default_instance_->InitAsDefaultInstance();
  ElectromotorStateInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ctrl_5felectromotor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ctrl_5felectromotor_2eproto {
  StaticDescriptorInitializer_ctrl_5felectromotor_2eproto() {
    protobuf_AddDesc_ctrl_5felectromotor_2eproto();
  }
} static_descriptor_initializer_ctrl_5felectromotor_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CtrlElectromotorMessage::kCommonParamFieldNumber;
const int CtrlElectromotorMessage::kElectromotorCtrlInfoFieldNumber;
const int CtrlElectromotorMessage::kElectromotorStateInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CtrlElectromotorMessage::CtrlElectromotorMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CtrlElectromotorMessage)
}

void CtrlElectromotorMessage::InitAsDefaultInstance() {
  common_param_ = const_cast< ::CtrlCommonParamTbox*>(&::CtrlCommonParamTbox::default_instance());
  electromotor_ctrl_info_ = const_cast< ::CtrlCommonInfo*>(&::CtrlCommonInfo::default_instance());
  electromotor_state_info_ = const_cast< ::ElectromotorStateInfo*>(&::ElectromotorStateInfo::default_instance());
}

CtrlElectromotorMessage::CtrlElectromotorMessage(const CtrlElectromotorMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CtrlElectromotorMessage)
}

void CtrlElectromotorMessage::SharedCtor() {
  _cached_size_ = 0;
  common_param_ = NULL;
  electromotor_ctrl_info_ = NULL;
  electromotor_state_info_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CtrlElectromotorMessage::~CtrlElectromotorMessage() {
  // @@protoc_insertion_point(destructor:CtrlElectromotorMessage)
  SharedDtor();
}

void CtrlElectromotorMessage::SharedDtor() {
  if (this != default_instance_) {
    delete common_param_;
    delete electromotor_ctrl_info_;
    delete electromotor_state_info_;
  }
}

void CtrlElectromotorMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CtrlElectromotorMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CtrlElectromotorMessage_descriptor_;
}

const CtrlElectromotorMessage& CtrlElectromotorMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ctrl_5felectromotor_2eproto();
  return *default_instance_;
}

CtrlElectromotorMessage* CtrlElectromotorMessage::default_instance_ = NULL;

CtrlElectromotorMessage* CtrlElectromotorMessage::New(::google::protobuf::Arena* arena) const {
  CtrlElectromotorMessage* n = new CtrlElectromotorMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CtrlElectromotorMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:CtrlElectromotorMessage)
  if (_has_bits_[0 / 32] & 7u) {
    if (has_common_param()) {
      if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
    }
    if (has_electromotor_ctrl_info()) {
      if (electromotor_ctrl_info_ != NULL) electromotor_ctrl_info_->::CtrlCommonInfo::Clear();
    }
    if (has_electromotor_state_info()) {
      if (electromotor_state_info_ != NULL) electromotor_state_info_->::ElectromotorStateInfo::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool CtrlElectromotorMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CtrlElectromotorMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .CtrlCommonParamTbox common_param = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_common_param()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_electromotor_ctrl_info;
        break;
      }

      // optional .CtrlCommonInfo electromotor_ctrl_info = 2;
      case 2: {
        if (tag == 18) {
         parse_electromotor_ctrl_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_electromotor_ctrl_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_electromotor_state_info;
        break;
      }

      // optional .ElectromotorStateInfo electromotor_state_info = 3;
      case 3: {
        if (tag == 26) {
         parse_electromotor_state_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_electromotor_state_info()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CtrlElectromotorMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CtrlElectromotorMessage)
  return false;
#undef DO_
}

void CtrlElectromotorMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CtrlElectromotorMessage)
  // optional .CtrlCommonParamTbox common_param = 1;
  if (has_common_param()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->common_param_, output);
  }

  // optional .CtrlCommonInfo electromotor_ctrl_info = 2;
  if (has_electromotor_ctrl_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->electromotor_ctrl_info_, output);
  }

  // optional .ElectromotorStateInfo electromotor_state_info = 3;
  if (has_electromotor_state_info()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->electromotor_state_info_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CtrlElectromotorMessage)
}

::google::protobuf::uint8* CtrlElectromotorMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:CtrlElectromotorMessage)
  // optional .CtrlCommonParamTbox common_param = 1;
  if (has_common_param()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->common_param_, false, target);
  }

  // optional .CtrlCommonInfo electromotor_ctrl_info = 2;
  if (has_electromotor_ctrl_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->electromotor_ctrl_info_, false, target);
  }

  // optional .ElectromotorStateInfo electromotor_state_info = 3;
  if (has_electromotor_state_info()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->electromotor_state_info_, false, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CtrlElectromotorMessage)
  return target;
}

int CtrlElectromotorMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:CtrlElectromotorMessage)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional .CtrlCommonParamTbox common_param = 1;
    if (has_common_param()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->common_param_);
    }

    // optional .CtrlCommonInfo electromotor_ctrl_info = 2;
    if (has_electromotor_ctrl_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->electromotor_ctrl_info_);
    }

    // optional .ElectromotorStateInfo electromotor_state_info = 3;
    if (has_electromotor_state_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->electromotor_state_info_);
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CtrlElectromotorMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CtrlElectromotorMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CtrlElectromotorMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CtrlElectromotorMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CtrlElectromotorMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CtrlElectromotorMessage)
    MergeFrom(*source);
  }
}

void CtrlElectromotorMessage::MergeFrom(const CtrlElectromotorMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CtrlElectromotorMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_common_param()) {
      mutable_common_param()->::CtrlCommonParamTbox::MergeFrom(from.common_param());
    }
    if (from.has_electromotor_ctrl_info()) {
      mutable_electromotor_ctrl_info()->::CtrlCommonInfo::MergeFrom(from.electromotor_ctrl_info());
    }
    if (from.has_electromotor_state_info()) {
      mutable_electromotor_state_info()->::ElectromotorStateInfo::MergeFrom(from.electromotor_state_info());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void CtrlElectromotorMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CtrlElectromotorMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CtrlElectromotorMessage::CopyFrom(const CtrlElectromotorMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CtrlElectromotorMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CtrlElectromotorMessage::IsInitialized() const {

  return true;
}

void CtrlElectromotorMessage::Swap(CtrlElectromotorMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CtrlElectromotorMessage::InternalSwap(CtrlElectromotorMessage* other) {
  std::swap(common_param_, other->common_param_);
  std::swap(electromotor_ctrl_info_, other->electromotor_ctrl_info_);
  std::swap(electromotor_state_info_, other->electromotor_state_info_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CtrlElectromotorMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CtrlElectromotorMessage_descriptor_;
  metadata.reflection = CtrlElectromotorMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CtrlElectromotorMessage

// optional .CtrlCommonParamTbox common_param = 1;
bool CtrlElectromotorMessage::has_common_param() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CtrlElectromotorMessage::set_has_common_param() {
  _has_bits_[0] |= 0x00000001u;
}
void CtrlElectromotorMessage::clear_has_common_param() {
  _has_bits_[0] &= ~0x00000001u;
}
void CtrlElectromotorMessage::clear_common_param() {
  if (common_param_ != NULL) common_param_->::CtrlCommonParamTbox::Clear();
  clear_has_common_param();
}
const ::CtrlCommonParamTbox& CtrlElectromotorMessage::common_param() const {
  // @@protoc_insertion_point(field_get:CtrlElectromotorMessage.common_param)
  return common_param_ != NULL ? *common_param_ : *default_instance_->common_param_;
}
::CtrlCommonParamTbox* CtrlElectromotorMessage::mutable_common_param() {
  set_has_common_param();
  if (common_param_ == NULL) {
    common_param_ = new ::CtrlCommonParamTbox;
  }
  // @@protoc_insertion_point(field_mutable:CtrlElectromotorMessage.common_param)
  return common_param_;
}
::CtrlCommonParamTbox* CtrlElectromotorMessage::release_common_param() {
  // @@protoc_insertion_point(field_release:CtrlElectromotorMessage.common_param)
  clear_has_common_param();
  ::CtrlCommonParamTbox* temp = common_param_;
  common_param_ = NULL;
  return temp;
}
void CtrlElectromotorMessage::set_allocated_common_param(::CtrlCommonParamTbox* common_param) {
  delete common_param_;
  common_param_ = common_param;
  if (common_param) {
    set_has_common_param();
  } else {
    clear_has_common_param();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlElectromotorMessage.common_param)
}

// optional .CtrlCommonInfo electromotor_ctrl_info = 2;
bool CtrlElectromotorMessage::has_electromotor_ctrl_info() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CtrlElectromotorMessage::set_has_electromotor_ctrl_info() {
  _has_bits_[0] |= 0x00000002u;
}
void CtrlElectromotorMessage::clear_has_electromotor_ctrl_info() {
  _has_bits_[0] &= ~0x00000002u;
}
void CtrlElectromotorMessage::clear_electromotor_ctrl_info() {
  if (electromotor_ctrl_info_ != NULL) electromotor_ctrl_info_->::CtrlCommonInfo::Clear();
  clear_has_electromotor_ctrl_info();
}
const ::CtrlCommonInfo& CtrlElectromotorMessage::electromotor_ctrl_info() const {
  // @@protoc_insertion_point(field_get:CtrlElectromotorMessage.electromotor_ctrl_info)
  return electromotor_ctrl_info_ != NULL ? *electromotor_ctrl_info_ : *default_instance_->electromotor_ctrl_info_;
}
::CtrlCommonInfo* CtrlElectromotorMessage::mutable_electromotor_ctrl_info() {
  set_has_electromotor_ctrl_info();
  if (electromotor_ctrl_info_ == NULL) {
    electromotor_ctrl_info_ = new ::CtrlCommonInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlElectromotorMessage.electromotor_ctrl_info)
  return electromotor_ctrl_info_;
}
::CtrlCommonInfo* CtrlElectromotorMessage::release_electromotor_ctrl_info() {
  // @@protoc_insertion_point(field_release:CtrlElectromotorMessage.electromotor_ctrl_info)
  clear_has_electromotor_ctrl_info();
  ::CtrlCommonInfo* temp = electromotor_ctrl_info_;
  electromotor_ctrl_info_ = NULL;
  return temp;
}
void CtrlElectromotorMessage::set_allocated_electromotor_ctrl_info(::CtrlCommonInfo* electromotor_ctrl_info) {
  delete electromotor_ctrl_info_;
  electromotor_ctrl_info_ = electromotor_ctrl_info;
  if (electromotor_ctrl_info) {
    set_has_electromotor_ctrl_info();
  } else {
    clear_has_electromotor_ctrl_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlElectromotorMessage.electromotor_ctrl_info)
}

// optional .ElectromotorStateInfo electromotor_state_info = 3;
bool CtrlElectromotorMessage::has_electromotor_state_info() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CtrlElectromotorMessage::set_has_electromotor_state_info() {
  _has_bits_[0] |= 0x00000004u;
}
void CtrlElectromotorMessage::clear_has_electromotor_state_info() {
  _has_bits_[0] &= ~0x00000004u;
}
void CtrlElectromotorMessage::clear_electromotor_state_info() {
  if (electromotor_state_info_ != NULL) electromotor_state_info_->::ElectromotorStateInfo::Clear();
  clear_has_electromotor_state_info();
}
const ::ElectromotorStateInfo& CtrlElectromotorMessage::electromotor_state_info() const {
  // @@protoc_insertion_point(field_get:CtrlElectromotorMessage.electromotor_state_info)
  return electromotor_state_info_ != NULL ? *electromotor_state_info_ : *default_instance_->electromotor_state_info_;
}
::ElectromotorStateInfo* CtrlElectromotorMessage::mutable_electromotor_state_info() {
  set_has_electromotor_state_info();
  if (electromotor_state_info_ == NULL) {
    electromotor_state_info_ = new ::ElectromotorStateInfo;
  }
  // @@protoc_insertion_point(field_mutable:CtrlElectromotorMessage.electromotor_state_info)
  return electromotor_state_info_;
}
::ElectromotorStateInfo* CtrlElectromotorMessage::release_electromotor_state_info() {
  // @@protoc_insertion_point(field_release:CtrlElectromotorMessage.electromotor_state_info)
  clear_has_electromotor_state_info();
  ::ElectromotorStateInfo* temp = electromotor_state_info_;
  electromotor_state_info_ = NULL;
  return temp;
}
void CtrlElectromotorMessage::set_allocated_electromotor_state_info(::ElectromotorStateInfo* electromotor_state_info) {
  delete electromotor_state_info_;
  electromotor_state_info_ = electromotor_state_info;
  if (electromotor_state_info) {
    set_has_electromotor_state_info();
  } else {
    clear_has_electromotor_state_info();
  }
  // @@protoc_insertion_point(field_set_allocated:CtrlElectromotorMessage.electromotor_state_info)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ElectromotorStateInfo::kElectromotorOnOffFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ElectromotorStateInfo::ElectromotorStateInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ElectromotorStateInfo)
}

void ElectromotorStateInfo::InitAsDefaultInstance() {
}

ElectromotorStateInfo::ElectromotorStateInfo(const ElectromotorStateInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ElectromotorStateInfo)
}

void ElectromotorStateInfo::SharedCtor() {
  _cached_size_ = 0;
  electromotor_on_off_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ElectromotorStateInfo::~ElectromotorStateInfo() {
  // @@protoc_insertion_point(destructor:ElectromotorStateInfo)
  SharedDtor();
}

void ElectromotorStateInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ElectromotorStateInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ElectromotorStateInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ElectromotorStateInfo_descriptor_;
}

const ElectromotorStateInfo& ElectromotorStateInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ctrl_5felectromotor_2eproto();
  return *default_instance_;
}

ElectromotorStateInfo* ElectromotorStateInfo::default_instance_ = NULL;

ElectromotorStateInfo* ElectromotorStateInfo::New(::google::protobuf::Arena* arena) const {
  ElectromotorStateInfo* n = new ElectromotorStateInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ElectromotorStateInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:ElectromotorStateInfo)
  electromotor_on_off_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool ElectromotorStateInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ElectromotorStateInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 electromotor_on_off = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &electromotor_on_off_)));
          set_has_electromotor_on_off();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ElectromotorStateInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ElectromotorStateInfo)
  return false;
#undef DO_
}

void ElectromotorStateInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ElectromotorStateInfo)
  // optional int32 electromotor_on_off = 1;
  if (has_electromotor_on_off()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->electromotor_on_off(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ElectromotorStateInfo)
}

::google::protobuf::uint8* ElectromotorStateInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ElectromotorStateInfo)
  // optional int32 electromotor_on_off = 1;
  if (has_electromotor_on_off()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->electromotor_on_off(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ElectromotorStateInfo)
  return target;
}

int ElectromotorStateInfo::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:ElectromotorStateInfo)
  int total_size = 0;

  // optional int32 electromotor_on_off = 1;
  if (has_electromotor_on_off()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->electromotor_on_off());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ElectromotorStateInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ElectromotorStateInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ElectromotorStateInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ElectromotorStateInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ElectromotorStateInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ElectromotorStateInfo)
    MergeFrom(*source);
  }
}

void ElectromotorStateInfo::MergeFrom(const ElectromotorStateInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ElectromotorStateInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_electromotor_on_off()) {
      set_electromotor_on_off(from.electromotor_on_off());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void ElectromotorStateInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ElectromotorStateInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ElectromotorStateInfo::CopyFrom(const ElectromotorStateInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ElectromotorStateInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ElectromotorStateInfo::IsInitialized() const {

  return true;
}

void ElectromotorStateInfo::Swap(ElectromotorStateInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ElectromotorStateInfo::InternalSwap(ElectromotorStateInfo* other) {
  std::swap(electromotor_on_off_, other->electromotor_on_off_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ElectromotorStateInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ElectromotorStateInfo_descriptor_;
  metadata.reflection = ElectromotorStateInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ElectromotorStateInfo

// optional int32 electromotor_on_off = 1;
bool ElectromotorStateInfo::has_electromotor_on_off() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void ElectromotorStateInfo::set_has_electromotor_on_off() {
  _has_bits_[0] |= 0x00000001u;
}
void ElectromotorStateInfo::clear_has_electromotor_on_off() {
  _has_bits_[0] &= ~0x00000001u;
}
void ElectromotorStateInfo::clear_electromotor_on_off() {
  electromotor_on_off_ = 0;
  clear_has_electromotor_on_off();
}
 ::google::protobuf::int32 ElectromotorStateInfo::electromotor_on_off() const {
  // @@protoc_insertion_point(field_get:ElectromotorStateInfo.electromotor_on_off)
  return electromotor_on_off_;
}
 void ElectromotorStateInfo::set_electromotor_on_off(::google::protobuf::int32 value) {
  set_has_electromotor_on_off();
  electromotor_on_off_ = value;
  // @@protoc_insertion_point(field_set:ElectromotorStateInfo.electromotor_on_off)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
