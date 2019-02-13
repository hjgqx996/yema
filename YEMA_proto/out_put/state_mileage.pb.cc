// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: state_mileage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "state_mileage.pb.h"

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

const ::google::protobuf::Descriptor* StateMileageMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StateMileageMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_state_5fmileage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_state_5fmileage_2eproto() {
  protobuf_AddDesc_state_5fmileage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "state_mileage.proto");
  GOOGLE_CHECK(file != NULL);
  StateMileageMessage_descriptor_ = file->message_type(0);
  static const int StateMileageMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StateMileageMessage, odo_mileage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StateMileageMessage, trip_mileage_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StateMileageMessage, endurance_mileage_),
  };
  StateMileageMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      StateMileageMessage_descriptor_,
      StateMileageMessage::default_instance_,
      StateMileageMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StateMileageMessage, _has_bits_[0]),
      -1,
      -1,
      sizeof(StateMileageMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StateMileageMessage, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_state_5fmileage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      StateMileageMessage_descriptor_, &StateMileageMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_state_5fmileage_2eproto() {
  delete StateMileageMessage::default_instance_;
  delete StateMileageMessage_reflection_;
}

void protobuf_AddDesc_state_5fmileage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_state_5fmileage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023state_mileage.proto\"[\n\023StateMileageMes"
    "sage\022\023\n\013odo_mileage\030\001 \001(\005\022\024\n\014trip_mileag"
    "e\030\002 \001(\005\022\031\n\021endurance_mileage\030\003 \001(\005B6\n\"co"
    "m.mx.server.remote.v2.bean.stateB\020StateM"
    "ileageBean", 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "state_mileage.proto", &protobuf_RegisterTypes);
  StateMileageMessage::default_instance_ = new StateMileageMessage();
  StateMileageMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_state_5fmileage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_state_5fmileage_2eproto {
  StaticDescriptorInitializer_state_5fmileage_2eproto() {
    protobuf_AddDesc_state_5fmileage_2eproto();
  }
} static_descriptor_initializer_state_5fmileage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StateMileageMessage::kOdoMileageFieldNumber;
const int StateMileageMessage::kTripMileageFieldNumber;
const int StateMileageMessage::kEnduranceMileageFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StateMileageMessage::StateMileageMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:StateMileageMessage)
}

void StateMileageMessage::InitAsDefaultInstance() {
}

StateMileageMessage::StateMileageMessage(const StateMileageMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:StateMileageMessage)
}

void StateMileageMessage::SharedCtor() {
  _cached_size_ = 0;
  odo_mileage_ = 0;
  trip_mileage_ = 0;
  endurance_mileage_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StateMileageMessage::~StateMileageMessage() {
  // @@protoc_insertion_point(destructor:StateMileageMessage)
  SharedDtor();
}

void StateMileageMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void StateMileageMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StateMileageMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StateMileageMessage_descriptor_;
}

const StateMileageMessage& StateMileageMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_state_5fmileage_2eproto();
  return *default_instance_;
}

StateMileageMessage* StateMileageMessage::default_instance_ = NULL;

StateMileageMessage* StateMileageMessage::New(::google::protobuf::Arena* arena) const {
  StateMileageMessage* n = new StateMileageMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void StateMileageMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:StateMileageMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(StateMileageMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<StateMileageMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(odo_mileage_, endurance_mileage_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool StateMileageMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:StateMileageMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 odo_mileage = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &odo_mileage_)));
          set_has_odo_mileage();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_trip_mileage;
        break;
      }

      // optional int32 trip_mileage = 2;
      case 2: {
        if (tag == 16) {
         parse_trip_mileage:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &trip_mileage_)));
          set_has_trip_mileage();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_endurance_mileage;
        break;
      }

      // optional int32 endurance_mileage = 3;
      case 3: {
        if (tag == 24) {
         parse_endurance_mileage:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &endurance_mileage_)));
          set_has_endurance_mileage();
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
  // @@protoc_insertion_point(parse_success:StateMileageMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:StateMileageMessage)
  return false;
#undef DO_
}

void StateMileageMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:StateMileageMessage)
  // optional int32 odo_mileage = 1;
  if (has_odo_mileage()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->odo_mileage(), output);
  }

  // optional int32 trip_mileage = 2;
  if (has_trip_mileage()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->trip_mileage(), output);
  }

  // optional int32 endurance_mileage = 3;
  if (has_endurance_mileage()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->endurance_mileage(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:StateMileageMessage)
}

::google::protobuf::uint8* StateMileageMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:StateMileageMessage)
  // optional int32 odo_mileage = 1;
  if (has_odo_mileage()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->odo_mileage(), target);
  }

  // optional int32 trip_mileage = 2;
  if (has_trip_mileage()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->trip_mileage(), target);
  }

  // optional int32 endurance_mileage = 3;
  if (has_endurance_mileage()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->endurance_mileage(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:StateMileageMessage)
  return target;
}

int StateMileageMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:StateMileageMessage)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 7u) {
    // optional int32 odo_mileage = 1;
    if (has_odo_mileage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->odo_mileage());
    }

    // optional int32 trip_mileage = 2;
    if (has_trip_mileage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->trip_mileage());
    }

    // optional int32 endurance_mileage = 3;
    if (has_endurance_mileage()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->endurance_mileage());
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

void StateMileageMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:StateMileageMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const StateMileageMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const StateMileageMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:StateMileageMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:StateMileageMessage)
    MergeFrom(*source);
  }
}

void StateMileageMessage::MergeFrom(const StateMileageMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:StateMileageMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_odo_mileage()) {
      set_odo_mileage(from.odo_mileage());
    }
    if (from.has_trip_mileage()) {
      set_trip_mileage(from.trip_mileage());
    }
    if (from.has_endurance_mileage()) {
      set_endurance_mileage(from.endurance_mileage());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void StateMileageMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:StateMileageMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StateMileageMessage::CopyFrom(const StateMileageMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:StateMileageMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StateMileageMessage::IsInitialized() const {

  return true;
}

void StateMileageMessage::Swap(StateMileageMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StateMileageMessage::InternalSwap(StateMileageMessage* other) {
  std::swap(odo_mileage_, other->odo_mileage_);
  std::swap(trip_mileage_, other->trip_mileage_);
  std::swap(endurance_mileage_, other->endurance_mileage_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata StateMileageMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StateMileageMessage_descriptor_;
  metadata.reflection = StateMileageMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// StateMileageMessage

// optional int32 odo_mileage = 1;
bool StateMileageMessage::has_odo_mileage() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void StateMileageMessage::set_has_odo_mileage() {
  _has_bits_[0] |= 0x00000001u;
}
void StateMileageMessage::clear_has_odo_mileage() {
  _has_bits_[0] &= ~0x00000001u;
}
void StateMileageMessage::clear_odo_mileage() {
  odo_mileage_ = 0;
  clear_has_odo_mileage();
}
 ::google::protobuf::int32 StateMileageMessage::odo_mileage() const {
  // @@protoc_insertion_point(field_get:StateMileageMessage.odo_mileage)
  return odo_mileage_;
}
 void StateMileageMessage::set_odo_mileage(::google::protobuf::int32 value) {
  set_has_odo_mileage();
  odo_mileage_ = value;
  // @@protoc_insertion_point(field_set:StateMileageMessage.odo_mileage)
}

// optional int32 trip_mileage = 2;
bool StateMileageMessage::has_trip_mileage() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void StateMileageMessage::set_has_trip_mileage() {
  _has_bits_[0] |= 0x00000002u;
}
void StateMileageMessage::clear_has_trip_mileage() {
  _has_bits_[0] &= ~0x00000002u;
}
void StateMileageMessage::clear_trip_mileage() {
  trip_mileage_ = 0;
  clear_has_trip_mileage();
}
 ::google::protobuf::int32 StateMileageMessage::trip_mileage() const {
  // @@protoc_insertion_point(field_get:StateMileageMessage.trip_mileage)
  return trip_mileage_;
}
 void StateMileageMessage::set_trip_mileage(::google::protobuf::int32 value) {
  set_has_trip_mileage();
  trip_mileage_ = value;
  // @@protoc_insertion_point(field_set:StateMileageMessage.trip_mileage)
}

// optional int32 endurance_mileage = 3;
bool StateMileageMessage::has_endurance_mileage() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void StateMileageMessage::set_has_endurance_mileage() {
  _has_bits_[0] |= 0x00000004u;
}
void StateMileageMessage::clear_has_endurance_mileage() {
  _has_bits_[0] &= ~0x00000004u;
}
void StateMileageMessage::clear_endurance_mileage() {
  endurance_mileage_ = 0;
  clear_has_endurance_mileage();
}
 ::google::protobuf::int32 StateMileageMessage::endurance_mileage() const {
  // @@protoc_insertion_point(field_get:StateMileageMessage.endurance_mileage)
  return endurance_mileage_;
}
 void StateMileageMessage::set_endurance_mileage(::google::protobuf::int32 value) {
  set_has_endurance_mileage();
  endurance_mileage_ = value;
  // @@protoc_insertion_point(field_set:StateMileageMessage.endurance_mileage)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
