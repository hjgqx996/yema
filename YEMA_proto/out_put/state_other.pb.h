// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: state_other.proto

#ifndef PROTOBUF_state_5fother_2eproto__INCLUDED
#define PROTOBUF_state_5fother_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_state_5fother_2eproto();
void protobuf_AssignDesc_state_5fother_2eproto();
void protobuf_ShutdownFile_state_5fother_2eproto();

class StateOtherMessage;

// ===================================================================

class StateOtherMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:StateOtherMessage) */ {
 public:
  StateOtherMessage();
  virtual ~StateOtherMessage();

  StateOtherMessage(const StateOtherMessage& from);

  inline StateOtherMessage& operator=(const StateOtherMessage& from) {
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
  static const StateOtherMessage& default_instance();

  void Swap(StateOtherMessage* other);

  // implements Message ----------------------------------------------

  inline StateOtherMessage* New() const { return New(NULL); }

  StateOtherMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const StateOtherMessage& from);
  void MergeFrom(const StateOtherMessage& from);
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
  void InternalSwap(StateOtherMessage* other);
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

  // optional double brake_fluid = 1;
  bool has_brake_fluid() const;
  void clear_brake_fluid();
  static const int kBrakeFluidFieldNumber = 1;
  double brake_fluid() const;
  void set_brake_fluid(double value);

  // @@protoc_insertion_point(class_scope:StateOtherMessage)
 private:
  inline void set_has_brake_fluid();
  inline void clear_has_brake_fluid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double brake_fluid_;
  friend void  protobuf_AddDesc_state_5fother_2eproto();
  friend void protobuf_AssignDesc_state_5fother_2eproto();
  friend void protobuf_ShutdownFile_state_5fother_2eproto();

  void InitAsDefaultInstance();
  static StateOtherMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// StateOtherMessage

// optional double brake_fluid = 1;
inline bool StateOtherMessage::has_brake_fluid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void StateOtherMessage::set_has_brake_fluid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void StateOtherMessage::clear_has_brake_fluid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void StateOtherMessage::clear_brake_fluid() {
  brake_fluid_ = 0;
  clear_has_brake_fluid();
}
inline double StateOtherMessage::brake_fluid() const {
  // @@protoc_insertion_point(field_get:StateOtherMessage.brake_fluid)
  return brake_fluid_;
}
inline void StateOtherMessage::set_brake_fluid(double value) {
  set_has_brake_fluid();
  brake_fluid_ = value;
  // @@protoc_insertion_point(field_set:StateOtherMessage.brake_fluid)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_state_5fother_2eproto__INCLUDED
