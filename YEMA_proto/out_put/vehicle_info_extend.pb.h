// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vehicle_info_extend.proto

#ifndef PROTOBUF_vehicle_5finfo_5fextend_2eproto__INCLUDED
#define PROTOBUF_vehicle_5finfo_5fextend_2eproto__INCLUDED

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
#include "location_offset_info.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_vehicle_5finfo_5fextend_2eproto();
void protobuf_AssignDesc_vehicle_5finfo_5fextend_2eproto();
void protobuf_ShutdownFile_vehicle_5finfo_5fextend_2eproto();

class VehicleInfoExtendMessage;

// ===================================================================

class VehicleInfoExtendMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:VehicleInfoExtendMessage) */ {
 public:
  VehicleInfoExtendMessage();
  virtual ~VehicleInfoExtendMessage();

  VehicleInfoExtendMessage(const VehicleInfoExtendMessage& from);

  inline VehicleInfoExtendMessage& operator=(const VehicleInfoExtendMessage& from) {
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
  static const VehicleInfoExtendMessage& default_instance();

  void Swap(VehicleInfoExtendMessage* other);

  // implements Message ----------------------------------------------

  inline VehicleInfoExtendMessage* New() const { return New(NULL); }

  VehicleInfoExtendMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const VehicleInfoExtendMessage& from);
  void MergeFrom(const VehicleInfoExtendMessage& from);
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
  void InternalSwap(VehicleInfoExtendMessage* other);
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

  // optional uint32 rechargeMileage = 1;
  bool has_rechargemileage() const;
  void clear_rechargemileage();
  static const int kRechargeMileageFieldNumber = 1;
  ::google::protobuf::uint32 rechargemileage() const;
  void set_rechargemileage(::google::protobuf::uint32 value);

  // optional uint32 vehicleDirection = 2;
  bool has_vehicledirection() const;
  void clear_vehicledirection();
  static const int kVehicleDirectionFieldNumber = 2;
  ::google::protobuf::uint32 vehicledirection() const;
  void set_vehicledirection(::google::protobuf::uint32 value);

  // optional uint32 brakePedalPosition = 3;
  bool has_brakepedalposition() const;
  void clear_brakepedalposition();
  static const int kBrakePedalPositionFieldNumber = 3;
  ::google::protobuf::uint32 brakepedalposition() const;
  void set_brakepedalposition(::google::protobuf::uint32 value);

  // optional uint32 brakePedalStatusValidity = 4;
  bool has_brakepedalstatusvalidity() const;
  void clear_brakepedalstatusvalidity();
  static const int kBrakePedalStatusValidityFieldNumber = 4;
  ::google::protobuf::uint32 brakepedalstatusvalidity() const;
  void set_brakepedalstatusvalidity(::google::protobuf::uint32 value);

  // optional uint32 brakePedalPositionValidity = 5;
  bool has_brakepedalpositionvalidity() const;
  void clear_brakepedalpositionvalidity();
  static const int kBrakePedalPositionValidityFieldNumber = 5;
  ::google::protobuf::uint32 brakepedalpositionvalidity() const;
  void set_brakepedalpositionvalidity(::google::protobuf::uint32 value);

  // optional uint32 accelerationPedalPositionValidity = 6;
  bool has_accelerationpedalpositionvalidity() const;
  void clear_accelerationpedalpositionvalidity();
  static const int kAccelerationPedalPositionValidityFieldNumber = 6;
  ::google::protobuf::uint32 accelerationpedalpositionvalidity() const;
  void set_accelerationpedalpositionvalidity(::google::protobuf::uint32 value);

  // optional .LocationOffsetInfo locationOffsetInfo = 7;
  bool has_locationoffsetinfo() const;
  void clear_locationoffsetinfo();
  static const int kLocationOffsetInfoFieldNumber = 7;
  const ::LocationOffsetInfo& locationoffsetinfo() const;
  ::LocationOffsetInfo* mutable_locationoffsetinfo();
  ::LocationOffsetInfo* release_locationoffsetinfo();
  void set_allocated_locationoffsetinfo(::LocationOffsetInfo* locationoffsetinfo);

  // @@protoc_insertion_point(class_scope:VehicleInfoExtendMessage)
 private:
  inline void set_has_rechargemileage();
  inline void clear_has_rechargemileage();
  inline void set_has_vehicledirection();
  inline void clear_has_vehicledirection();
  inline void set_has_brakepedalposition();
  inline void clear_has_brakepedalposition();
  inline void set_has_brakepedalstatusvalidity();
  inline void clear_has_brakepedalstatusvalidity();
  inline void set_has_brakepedalpositionvalidity();
  inline void clear_has_brakepedalpositionvalidity();
  inline void set_has_accelerationpedalpositionvalidity();
  inline void clear_has_accelerationpedalpositionvalidity();
  inline void set_has_locationoffsetinfo();
  inline void clear_has_locationoffsetinfo();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 rechargemileage_;
  ::google::protobuf::uint32 vehicledirection_;
  ::google::protobuf::uint32 brakepedalposition_;
  ::google::protobuf::uint32 brakepedalstatusvalidity_;
  ::google::protobuf::uint32 brakepedalpositionvalidity_;
  ::google::protobuf::uint32 accelerationpedalpositionvalidity_;
  ::LocationOffsetInfo* locationoffsetinfo_;
  friend void  protobuf_AddDesc_vehicle_5finfo_5fextend_2eproto();
  friend void protobuf_AssignDesc_vehicle_5finfo_5fextend_2eproto();
  friend void protobuf_ShutdownFile_vehicle_5finfo_5fextend_2eproto();

  void InitAsDefaultInstance();
  static VehicleInfoExtendMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// VehicleInfoExtendMessage

// optional uint32 rechargeMileage = 1;
inline bool VehicleInfoExtendMessage::has_rechargemileage() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VehicleInfoExtendMessage::set_has_rechargemileage() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VehicleInfoExtendMessage::clear_has_rechargemileage() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VehicleInfoExtendMessage::clear_rechargemileage() {
  rechargemileage_ = 0u;
  clear_has_rechargemileage();
}
inline ::google::protobuf::uint32 VehicleInfoExtendMessage::rechargemileage() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.rechargeMileage)
  return rechargemileage_;
}
inline void VehicleInfoExtendMessage::set_rechargemileage(::google::protobuf::uint32 value) {
  set_has_rechargemileage();
  rechargemileage_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.rechargeMileage)
}

// optional uint32 vehicleDirection = 2;
inline bool VehicleInfoExtendMessage::has_vehicledirection() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VehicleInfoExtendMessage::set_has_vehicledirection() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VehicleInfoExtendMessage::clear_has_vehicledirection() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VehicleInfoExtendMessage::clear_vehicledirection() {
  vehicledirection_ = 0u;
  clear_has_vehicledirection();
}
inline ::google::protobuf::uint32 VehicleInfoExtendMessage::vehicledirection() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.vehicleDirection)
  return vehicledirection_;
}
inline void VehicleInfoExtendMessage::set_vehicledirection(::google::protobuf::uint32 value) {
  set_has_vehicledirection();
  vehicledirection_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.vehicleDirection)
}

// optional uint32 brakePedalPosition = 3;
inline bool VehicleInfoExtendMessage::has_brakepedalposition() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VehicleInfoExtendMessage::set_has_brakepedalposition() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VehicleInfoExtendMessage::clear_has_brakepedalposition() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VehicleInfoExtendMessage::clear_brakepedalposition() {
  brakepedalposition_ = 0u;
  clear_has_brakepedalposition();
}
inline ::google::protobuf::uint32 VehicleInfoExtendMessage::brakepedalposition() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.brakePedalPosition)
  return brakepedalposition_;
}
inline void VehicleInfoExtendMessage::set_brakepedalposition(::google::protobuf::uint32 value) {
  set_has_brakepedalposition();
  brakepedalposition_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.brakePedalPosition)
}

// optional uint32 brakePedalStatusValidity = 4;
inline bool VehicleInfoExtendMessage::has_brakepedalstatusvalidity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VehicleInfoExtendMessage::set_has_brakepedalstatusvalidity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VehicleInfoExtendMessage::clear_has_brakepedalstatusvalidity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VehicleInfoExtendMessage::clear_brakepedalstatusvalidity() {
  brakepedalstatusvalidity_ = 0u;
  clear_has_brakepedalstatusvalidity();
}
inline ::google::protobuf::uint32 VehicleInfoExtendMessage::brakepedalstatusvalidity() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.brakePedalStatusValidity)
  return brakepedalstatusvalidity_;
}
inline void VehicleInfoExtendMessage::set_brakepedalstatusvalidity(::google::protobuf::uint32 value) {
  set_has_brakepedalstatusvalidity();
  brakepedalstatusvalidity_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.brakePedalStatusValidity)
}

// optional uint32 brakePedalPositionValidity = 5;
inline bool VehicleInfoExtendMessage::has_brakepedalpositionvalidity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VehicleInfoExtendMessage::set_has_brakepedalpositionvalidity() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VehicleInfoExtendMessage::clear_has_brakepedalpositionvalidity() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VehicleInfoExtendMessage::clear_brakepedalpositionvalidity() {
  brakepedalpositionvalidity_ = 0u;
  clear_has_brakepedalpositionvalidity();
}
inline ::google::protobuf::uint32 VehicleInfoExtendMessage::brakepedalpositionvalidity() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.brakePedalPositionValidity)
  return brakepedalpositionvalidity_;
}
inline void VehicleInfoExtendMessage::set_brakepedalpositionvalidity(::google::protobuf::uint32 value) {
  set_has_brakepedalpositionvalidity();
  brakepedalpositionvalidity_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.brakePedalPositionValidity)
}

// optional uint32 accelerationPedalPositionValidity = 6;
inline bool VehicleInfoExtendMessage::has_accelerationpedalpositionvalidity() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void VehicleInfoExtendMessage::set_has_accelerationpedalpositionvalidity() {
  _has_bits_[0] |= 0x00000020u;
}
inline void VehicleInfoExtendMessage::clear_has_accelerationpedalpositionvalidity() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void VehicleInfoExtendMessage::clear_accelerationpedalpositionvalidity() {
  accelerationpedalpositionvalidity_ = 0u;
  clear_has_accelerationpedalpositionvalidity();
}
inline ::google::protobuf::uint32 VehicleInfoExtendMessage::accelerationpedalpositionvalidity() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.accelerationPedalPositionValidity)
  return accelerationpedalpositionvalidity_;
}
inline void VehicleInfoExtendMessage::set_accelerationpedalpositionvalidity(::google::protobuf::uint32 value) {
  set_has_accelerationpedalpositionvalidity();
  accelerationpedalpositionvalidity_ = value;
  // @@protoc_insertion_point(field_set:VehicleInfoExtendMessage.accelerationPedalPositionValidity)
}

// optional .LocationOffsetInfo locationOffsetInfo = 7;
inline bool VehicleInfoExtendMessage::has_locationoffsetinfo() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void VehicleInfoExtendMessage::set_has_locationoffsetinfo() {
  _has_bits_[0] |= 0x00000040u;
}
inline void VehicleInfoExtendMessage::clear_has_locationoffsetinfo() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void VehicleInfoExtendMessage::clear_locationoffsetinfo() {
  if (locationoffsetinfo_ != NULL) locationoffsetinfo_->::LocationOffsetInfo::Clear();
  clear_has_locationoffsetinfo();
}
inline const ::LocationOffsetInfo& VehicleInfoExtendMessage::locationoffsetinfo() const {
  // @@protoc_insertion_point(field_get:VehicleInfoExtendMessage.locationOffsetInfo)
  return locationoffsetinfo_ != NULL ? *locationoffsetinfo_ : *default_instance_->locationoffsetinfo_;
}
inline ::LocationOffsetInfo* VehicleInfoExtendMessage::mutable_locationoffsetinfo() {
  set_has_locationoffsetinfo();
  if (locationoffsetinfo_ == NULL) {
    locationoffsetinfo_ = new ::LocationOffsetInfo;
  }
  // @@protoc_insertion_point(field_mutable:VehicleInfoExtendMessage.locationOffsetInfo)
  return locationoffsetinfo_;
}
inline ::LocationOffsetInfo* VehicleInfoExtendMessage::release_locationoffsetinfo() {
  // @@protoc_insertion_point(field_release:VehicleInfoExtendMessage.locationOffsetInfo)
  clear_has_locationoffsetinfo();
  ::LocationOffsetInfo* temp = locationoffsetinfo_;
  locationoffsetinfo_ = NULL;
  return temp;
}
inline void VehicleInfoExtendMessage::set_allocated_locationoffsetinfo(::LocationOffsetInfo* locationoffsetinfo) {
  delete locationoffsetinfo_;
  locationoffsetinfo_ = locationoffsetinfo;
  if (locationoffsetinfo) {
    set_has_locationoffsetinfo();
  } else {
    clear_has_locationoffsetinfo();
  }
  // @@protoc_insertion_point(field_set_allocated:VehicleInfoExtendMessage.locationOffsetInfo)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_vehicle_5finfo_5fextend_2eproto__INCLUDED
