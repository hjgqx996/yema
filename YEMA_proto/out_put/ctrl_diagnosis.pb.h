// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ctrl_diagnosis.proto

#ifndef PROTOBUF_ctrl_5fdiagnosis_2eproto__INCLUDED
#define PROTOBUF_ctrl_5fdiagnosis_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2007000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ctrl_5fdiagnosis_2eproto();
void protobuf_AssignDesc_ctrl_5fdiagnosis_2eproto();
void protobuf_ShutdownFile_ctrl_5fdiagnosis_2eproto();

class CtrlDiagnosisMessage;
class DiagnosisTypeInfo;

enum DiagnosisType {
  DIAG_TYPE_ALL = 255,
  DIAG_TYPE_AFS = 1,
  DIAG_TYPE_SAS = 2,
  DIAG_TYPE_APA = 3,
  DIAG_TYPE_SRS = 4,
  DIAG_TYPE_BCM = 5,
  DIAG_TYPE_IC = 6,
  DIAG_TYPE_PEPS = 7,
  DIAG_TYPE_AC = 8,
  DIAG_TYPE_TPMS = 9,
  DIAG_TYPE_DVD = 10,
  DIAG_TYPE_PRM = 11,
  DIAG_TYPE_SCM = 12,
  DIAG_TYPE_TBOX = 13,
  DIAG_TYPE_NVS = 14,
  DIAG_TYPE_HUD = 15,
  DIAG_TYPE_AVM = 16,
  DIAG_TYPE_LDW = 17,
  DIAG_TYPE_BSD = 18,
  DIAG_TYPE_DR = 19,
  DIAG_TYPE_GW = 20,
  DIAG_TYPE_AC_COMPRESSOR = 21,
  DIAG_TYPE_MP5CP = 22
};
bool DiagnosisType_IsValid(int value);
const DiagnosisType DiagnosisType_MIN = DIAG_TYPE_AFS;
const DiagnosisType DiagnosisType_MAX = DIAG_TYPE_ALL;
const int DiagnosisType_ARRAYSIZE = DiagnosisType_MAX + 1;

const ::google::protobuf::EnumDescriptor* DiagnosisType_descriptor();
inline const ::std::string& DiagnosisType_Name(DiagnosisType value) {
  return ::google::protobuf::internal::NameOfEnum(
    DiagnosisType_descriptor(), value);
}
inline bool DiagnosisType_Parse(
    const ::std::string& name, DiagnosisType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DiagnosisType>(
    DiagnosisType_descriptor(), name, value);
}
// ===================================================================

class CtrlDiagnosisMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:CtrlDiagnosisMessage) */ {
 public:
  CtrlDiagnosisMessage();
  virtual ~CtrlDiagnosisMessage();

  CtrlDiagnosisMessage(const CtrlDiagnosisMessage& from);

  inline CtrlDiagnosisMessage& operator=(const CtrlDiagnosisMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CtrlDiagnosisMessage& default_instance();

  void Swap(CtrlDiagnosisMessage* other);

  // implements Message ----------------------------------------------

  inline CtrlDiagnosisMessage* New() const { return New(NULL); }

  CtrlDiagnosisMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CtrlDiagnosisMessage& from);
  void MergeFrom(const CtrlDiagnosisMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CtrlDiagnosisMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional fixed64 request_id = 1;
  bool has_request_id() const;
  void clear_request_id();
  static const int kRequestIdFieldNumber = 1;
  ::google::protobuf::uint64 request_id() const;
  void set_request_id(::google::protobuf::uint64 value);

  // repeated .DiagnosisTypeInfo diagnosis_type_info = 2;
  int diagnosis_type_info_size() const;
  void clear_diagnosis_type_info();
  static const int kDiagnosisTypeInfoFieldNumber = 2;
  const ::DiagnosisTypeInfo& diagnosis_type_info(int index) const;
  ::DiagnosisTypeInfo* mutable_diagnosis_type_info(int index);
  ::DiagnosisTypeInfo* add_diagnosis_type_info();
  ::google::protobuf::RepeatedPtrField< ::DiagnosisTypeInfo >*
      mutable_diagnosis_type_info();
  const ::google::protobuf::RepeatedPtrField< ::DiagnosisTypeInfo >&
      diagnosis_type_info() const;

  // @@protoc_insertion_point(class_scope:CtrlDiagnosisMessage)
 private:
  inline void set_has_request_id();
  inline void clear_has_request_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 request_id_;
  ::google::protobuf::RepeatedPtrField< ::DiagnosisTypeInfo > diagnosis_type_info_;
  friend void  protobuf_AddDesc_ctrl_5fdiagnosis_2eproto();
  friend void protobuf_AssignDesc_ctrl_5fdiagnosis_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5fdiagnosis_2eproto();

  void InitAsDefaultInstance();
  static CtrlDiagnosisMessage* default_instance_;
};
// -------------------------------------------------------------------

class DiagnosisTypeInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:DiagnosisTypeInfo) */ {
 public:
  DiagnosisTypeInfo();
  virtual ~DiagnosisTypeInfo();

  DiagnosisTypeInfo(const DiagnosisTypeInfo& from);

  inline DiagnosisTypeInfo& operator=(const DiagnosisTypeInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DiagnosisTypeInfo& default_instance();

  void Swap(DiagnosisTypeInfo* other);

  // implements Message ----------------------------------------------

  inline DiagnosisTypeInfo* New() const { return New(NULL); }

  DiagnosisTypeInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DiagnosisTypeInfo& from);
  void MergeFrom(const DiagnosisTypeInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(DiagnosisTypeInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .DiagnosisType diagnosis_type = 1;
  bool has_diagnosis_type() const;
  void clear_diagnosis_type();
  static const int kDiagnosisTypeFieldNumber = 1;
  ::DiagnosisType diagnosis_type() const;
  void set_diagnosis_type(::DiagnosisType value);

  // repeated uint32 err_code = 2;
  int err_code_size() const;
  void clear_err_code();
  static const int kErrCodeFieldNumber = 2;
  ::google::protobuf::uint32 err_code(int index) const;
  void set_err_code(int index, ::google::protobuf::uint32 value);
  void add_err_code(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      err_code() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_err_code();

  // @@protoc_insertion_point(class_scope:DiagnosisTypeInfo)
 private:
  inline void set_has_diagnosis_type();
  inline void clear_has_diagnosis_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > err_code_;
  int diagnosis_type_;
  friend void  protobuf_AddDesc_ctrl_5fdiagnosis_2eproto();
  friend void protobuf_AssignDesc_ctrl_5fdiagnosis_2eproto();
  friend void protobuf_ShutdownFile_ctrl_5fdiagnosis_2eproto();

  void InitAsDefaultInstance();
  static DiagnosisTypeInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CtrlDiagnosisMessage

// optional fixed64 request_id = 1;
inline bool CtrlDiagnosisMessage::has_request_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CtrlDiagnosisMessage::set_has_request_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CtrlDiagnosisMessage::clear_has_request_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CtrlDiagnosisMessage::clear_request_id() {
  request_id_ = GOOGLE_ULONGLONG(0);
  clear_has_request_id();
}
inline ::google::protobuf::uint64 CtrlDiagnosisMessage::request_id() const {
  // @@protoc_insertion_point(field_get:CtrlDiagnosisMessage.request_id)
  return request_id_;
}
inline void CtrlDiagnosisMessage::set_request_id(::google::protobuf::uint64 value) {
  set_has_request_id();
  request_id_ = value;
  // @@protoc_insertion_point(field_set:CtrlDiagnosisMessage.request_id)
}

// repeated .DiagnosisTypeInfo diagnosis_type_info = 2;
inline int CtrlDiagnosisMessage::diagnosis_type_info_size() const {
  return diagnosis_type_info_.size();
}
inline void CtrlDiagnosisMessage::clear_diagnosis_type_info() {
  diagnosis_type_info_.Clear();
}
inline const ::DiagnosisTypeInfo& CtrlDiagnosisMessage::diagnosis_type_info(int index) const {
  // @@protoc_insertion_point(field_get:CtrlDiagnosisMessage.diagnosis_type_info)
  return diagnosis_type_info_.Get(index);
}
inline ::DiagnosisTypeInfo* CtrlDiagnosisMessage::mutable_diagnosis_type_info(int index) {
  // @@protoc_insertion_point(field_mutable:CtrlDiagnosisMessage.diagnosis_type_info)
  return diagnosis_type_info_.Mutable(index);
}
inline ::DiagnosisTypeInfo* CtrlDiagnosisMessage::add_diagnosis_type_info() {
  // @@protoc_insertion_point(field_add:CtrlDiagnosisMessage.diagnosis_type_info)
  return diagnosis_type_info_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::DiagnosisTypeInfo >*
CtrlDiagnosisMessage::mutable_diagnosis_type_info() {
  // @@protoc_insertion_point(field_mutable_list:CtrlDiagnosisMessage.diagnosis_type_info)
  return &diagnosis_type_info_;
}
inline const ::google::protobuf::RepeatedPtrField< ::DiagnosisTypeInfo >&
CtrlDiagnosisMessage::diagnosis_type_info() const {
  // @@protoc_insertion_point(field_list:CtrlDiagnosisMessage.diagnosis_type_info)
  return diagnosis_type_info_;
}

// -------------------------------------------------------------------

// DiagnosisTypeInfo

// optional .DiagnosisType diagnosis_type = 1;
inline bool DiagnosisTypeInfo::has_diagnosis_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DiagnosisTypeInfo::set_has_diagnosis_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DiagnosisTypeInfo::clear_has_diagnosis_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DiagnosisTypeInfo::clear_diagnosis_type() {
  diagnosis_type_ = 255;
  clear_has_diagnosis_type();
}
inline ::DiagnosisType DiagnosisTypeInfo::diagnosis_type() const {
  // @@protoc_insertion_point(field_get:DiagnosisTypeInfo.diagnosis_type)
  return static_cast< ::DiagnosisType >(diagnosis_type_);
}
inline void DiagnosisTypeInfo::set_diagnosis_type(::DiagnosisType value) {
  assert(::DiagnosisType_IsValid(value));
  set_has_diagnosis_type();
  diagnosis_type_ = value;
  // @@protoc_insertion_point(field_set:DiagnosisTypeInfo.diagnosis_type)
}

// repeated uint32 err_code = 2;
inline int DiagnosisTypeInfo::err_code_size() const {
  return err_code_.size();
}
inline void DiagnosisTypeInfo::clear_err_code() {
  err_code_.Clear();
}
inline ::google::protobuf::uint32 DiagnosisTypeInfo::err_code(int index) const {
  // @@protoc_insertion_point(field_get:DiagnosisTypeInfo.err_code)
  return err_code_.Get(index);
}
inline void DiagnosisTypeInfo::set_err_code(int index, ::google::protobuf::uint32 value) {
  err_code_.Set(index, value);
  // @@protoc_insertion_point(field_set:DiagnosisTypeInfo.err_code)
}
inline void DiagnosisTypeInfo::add_err_code(::google::protobuf::uint32 value) {
  err_code_.Add(value);
  // @@protoc_insertion_point(field_add:DiagnosisTypeInfo.err_code)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
DiagnosisTypeInfo::err_code() const {
  // @@protoc_insertion_point(field_list:DiagnosisTypeInfo.err_code)
  return err_code_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
DiagnosisTypeInfo::mutable_err_code() {
  // @@protoc_insertion_point(field_mutable_list:DiagnosisTypeInfo.err_code)
  return &err_code_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::DiagnosisType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::DiagnosisType>() {
  return ::DiagnosisType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ctrl_5fdiagnosis_2eproto__INCLUDED
