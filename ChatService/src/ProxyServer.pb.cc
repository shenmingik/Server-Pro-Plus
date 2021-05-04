// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProxyServer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProxyServer.pb.h"

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

namespace ik_Proxy {

namespace {

const ::google::protobuf::Descriptor* PoxryMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PoxryMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* PoxryResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PoxryResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ProxyServer_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_ProxyServer_2eproto() {
  protobuf_AddDesc_ProxyServer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ProxyServer.proto");
  GOOGLE_CHECK(file != NULL);
  PoxryMessage_descriptor_ = file->message_type(0);
  static const int PoxryMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryMessage, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryMessage, request_msg_),
  };
  PoxryMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PoxryMessage_descriptor_,
      PoxryMessage::default_instance_,
      PoxryMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(PoxryMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryMessage, _is_default_instance_));
  PoxryResponse_descriptor_ = file->message_type(1);
  static const int PoxryResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryResponse, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryResponse, response_msg_),
  };
  PoxryResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PoxryResponse_descriptor_,
      PoxryResponse::default_instance_,
      PoxryResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(PoxryResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PoxryResponse, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ProxyServer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PoxryMessage_descriptor_, &PoxryMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PoxryResponse_descriptor_, &PoxryResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ProxyServer_2eproto() {
  delete PoxryMessage::default_instance_;
  delete PoxryMessage_reflection_;
  delete PoxryResponse::default_instance_;
  delete PoxryResponse_reflection_;
}

void protobuf_AddDesc_ProxyServer_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_ProxyServer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021ProxyServer.proto\022\010ik_Proxy\"1\n\014PoxryMe"
    "ssage\022\014\n\004type\030\001 \001(\014\022\023\n\013request_msg\030\002 \001(\014"
    "\"3\n\rPoxryResponse\022\014\n\004type\030\001 \001(\014\022\024\n\014respo"
    "nse_msg\030\002 \001(\014b\006proto3", 141);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ProxyServer.proto", &protobuf_RegisterTypes);
  PoxryMessage::default_instance_ = new PoxryMessage();
  PoxryResponse::default_instance_ = new PoxryResponse();
  PoxryMessage::default_instance_->InitAsDefaultInstance();
  PoxryResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProxyServer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProxyServer_2eproto {
  StaticDescriptorInitializer_ProxyServer_2eproto() {
    protobuf_AddDesc_ProxyServer_2eproto();
  }
} static_descriptor_initializer_ProxyServer_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PoxryMessage::kTypeFieldNumber;
const int PoxryMessage::kRequestMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PoxryMessage::PoxryMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ik_Proxy.PoxryMessage)
}

void PoxryMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PoxryMessage::PoxryMessage(const PoxryMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ik_Proxy.PoxryMessage)
}

void PoxryMessage::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  request_msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PoxryMessage::~PoxryMessage() {
  // @@protoc_insertion_point(destructor:ik_Proxy.PoxryMessage)
  SharedDtor();
}

void PoxryMessage::SharedDtor() {
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  request_msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PoxryMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PoxryMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PoxryMessage_descriptor_;
}

const PoxryMessage& PoxryMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProxyServer_2eproto();
  return *default_instance_;
}

PoxryMessage* PoxryMessage::default_instance_ = NULL;

PoxryMessage* PoxryMessage::New(::google::protobuf::Arena* arena) const {
  PoxryMessage* n = new PoxryMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PoxryMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:ik_Proxy.PoxryMessage)
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  request_msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PoxryMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ik_Proxy.PoxryMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes type = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_type()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_request_msg;
        break;
      }

      // optional bytes request_msg = 2;
      case 2: {
        if (tag == 18) {
         parse_request_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_request_msg()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ik_Proxy.PoxryMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ik_Proxy.PoxryMessage)
  return false;
#undef DO_
}

void PoxryMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ik_Proxy.PoxryMessage)
  // optional bytes type = 1;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->type(), output);
  }

  // optional bytes request_msg = 2;
  if (this->request_msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->request_msg(), output);
  }

  // @@protoc_insertion_point(serialize_end:ik_Proxy.PoxryMessage)
}

::google::protobuf::uint8* PoxryMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ik_Proxy.PoxryMessage)
  // optional bytes type = 1;
  if (this->type().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->type(), target);
  }

  // optional bytes request_msg = 2;
  if (this->request_msg().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->request_msg(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ik_Proxy.PoxryMessage)
  return target;
}

int PoxryMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:ik_Proxy.PoxryMessage)
  int total_size = 0;

  // optional bytes type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->type());
  }

  // optional bytes request_msg = 2;
  if (this->request_msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->request_msg());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PoxryMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ik_Proxy.PoxryMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PoxryMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PoxryMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ik_Proxy.PoxryMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ik_Proxy.PoxryMessage)
    MergeFrom(*source);
  }
}

void PoxryMessage::MergeFrom(const PoxryMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ik_Proxy.PoxryMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type().size() > 0) {

    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  if (from.request_msg().size() > 0) {

    request_msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.request_msg_);
  }
}

void PoxryMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ik_Proxy.PoxryMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PoxryMessage::CopyFrom(const PoxryMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ik_Proxy.PoxryMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PoxryMessage::IsInitialized() const {

  return true;
}

void PoxryMessage::Swap(PoxryMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PoxryMessage::InternalSwap(PoxryMessage* other) {
  type_.Swap(&other->type_);
  request_msg_.Swap(&other->request_msg_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PoxryMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PoxryMessage_descriptor_;
  metadata.reflection = PoxryMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PoxryMessage

// optional bytes type = 1;
void PoxryMessage::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PoxryMessage::type() const {
  // @@protoc_insertion_point(field_get:ik_Proxy.PoxryMessage.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryMessage::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_Proxy.PoxryMessage.type)
}
 void PoxryMessage::set_type(const char* value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_Proxy.PoxryMessage.type)
}
 void PoxryMessage::set_type(const void* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_Proxy.PoxryMessage.type)
}
 ::std::string* PoxryMessage::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:ik_Proxy.PoxryMessage.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PoxryMessage::release_type() {
  // @@protoc_insertion_point(field_release:ik_Proxy.PoxryMessage.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryMessage::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:ik_Proxy.PoxryMessage.type)
}

// optional bytes request_msg = 2;
void PoxryMessage::clear_request_msg() {
  request_msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PoxryMessage::request_msg() const {
  // @@protoc_insertion_point(field_get:ik_Proxy.PoxryMessage.request_msg)
  return request_msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryMessage::set_request_msg(const ::std::string& value) {
  
  request_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_Proxy.PoxryMessage.request_msg)
}
 void PoxryMessage::set_request_msg(const char* value) {
  
  request_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_Proxy.PoxryMessage.request_msg)
}
 void PoxryMessage::set_request_msg(const void* value, size_t size) {
  
  request_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_Proxy.PoxryMessage.request_msg)
}
 ::std::string* PoxryMessage::mutable_request_msg() {
  
  // @@protoc_insertion_point(field_mutable:ik_Proxy.PoxryMessage.request_msg)
  return request_msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PoxryMessage::release_request_msg() {
  // @@protoc_insertion_point(field_release:ik_Proxy.PoxryMessage.request_msg)
  
  return request_msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryMessage::set_allocated_request_msg(::std::string* request_msg) {
  if (request_msg != NULL) {
    
  } else {
    
  }
  request_msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_msg);
  // @@protoc_insertion_point(field_set_allocated:ik_Proxy.PoxryMessage.request_msg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PoxryResponse::kTypeFieldNumber;
const int PoxryResponse::kResponseMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PoxryResponse::PoxryResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ik_Proxy.PoxryResponse)
}

void PoxryResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PoxryResponse::PoxryResponse(const PoxryResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ik_Proxy.PoxryResponse)
}

void PoxryResponse::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PoxryResponse::~PoxryResponse() {
  // @@protoc_insertion_point(destructor:ik_Proxy.PoxryResponse)
  SharedDtor();
}

void PoxryResponse::SharedDtor() {
  type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PoxryResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PoxryResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PoxryResponse_descriptor_;
}

const PoxryResponse& PoxryResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProxyServer_2eproto();
  return *default_instance_;
}

PoxryResponse* PoxryResponse::default_instance_ = NULL;

PoxryResponse* PoxryResponse::New(::google::protobuf::Arena* arena) const {
  PoxryResponse* n = new PoxryResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PoxryResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:ik_Proxy.PoxryResponse)
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  response_msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PoxryResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ik_Proxy.PoxryResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes type = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_type()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_response_msg;
        break;
      }

      // optional bytes response_msg = 2;
      case 2: {
        if (tag == 18) {
         parse_response_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_response_msg()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ik_Proxy.PoxryResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ik_Proxy.PoxryResponse)
  return false;
#undef DO_
}

void PoxryResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ik_Proxy.PoxryResponse)
  // optional bytes type = 1;
  if (this->type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->type(), output);
  }

  // optional bytes response_msg = 2;
  if (this->response_msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->response_msg(), output);
  }

  // @@protoc_insertion_point(serialize_end:ik_Proxy.PoxryResponse)
}

::google::protobuf::uint8* PoxryResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ik_Proxy.PoxryResponse)
  // optional bytes type = 1;
  if (this->type().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->type(), target);
  }

  // optional bytes response_msg = 2;
  if (this->response_msg().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->response_msg(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ik_Proxy.PoxryResponse)
  return target;
}

int PoxryResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:ik_Proxy.PoxryResponse)
  int total_size = 0;

  // optional bytes type = 1;
  if (this->type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->type());
  }

  // optional bytes response_msg = 2;
  if (this->response_msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->response_msg());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PoxryResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ik_Proxy.PoxryResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PoxryResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PoxryResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ik_Proxy.PoxryResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ik_Proxy.PoxryResponse)
    MergeFrom(*source);
  }
}

void PoxryResponse::MergeFrom(const PoxryResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ik_Proxy.PoxryResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.type().size() > 0) {

    type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.type_);
  }
  if (from.response_msg().size() > 0) {

    response_msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.response_msg_);
  }
}

void PoxryResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ik_Proxy.PoxryResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PoxryResponse::CopyFrom(const PoxryResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ik_Proxy.PoxryResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PoxryResponse::IsInitialized() const {

  return true;
}

void PoxryResponse::Swap(PoxryResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PoxryResponse::InternalSwap(PoxryResponse* other) {
  type_.Swap(&other->type_);
  response_msg_.Swap(&other->response_msg_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PoxryResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PoxryResponse_descriptor_;
  metadata.reflection = PoxryResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PoxryResponse

// optional bytes type = 1;
void PoxryResponse::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PoxryResponse::type() const {
  // @@protoc_insertion_point(field_get:ik_Proxy.PoxryResponse.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryResponse::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_Proxy.PoxryResponse.type)
}
 void PoxryResponse::set_type(const char* value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_Proxy.PoxryResponse.type)
}
 void PoxryResponse::set_type(const void* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_Proxy.PoxryResponse.type)
}
 ::std::string* PoxryResponse::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:ik_Proxy.PoxryResponse.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PoxryResponse::release_type() {
  // @@protoc_insertion_point(field_release:ik_Proxy.PoxryResponse.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryResponse::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:ik_Proxy.PoxryResponse.type)
}

// optional bytes response_msg = 2;
void PoxryResponse::clear_response_msg() {
  response_msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PoxryResponse::response_msg() const {
  // @@protoc_insertion_point(field_get:ik_Proxy.PoxryResponse.response_msg)
  return response_msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryResponse::set_response_msg(const ::std::string& value) {
  
  response_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_Proxy.PoxryResponse.response_msg)
}
 void PoxryResponse::set_response_msg(const char* value) {
  
  response_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_Proxy.PoxryResponse.response_msg)
}
 void PoxryResponse::set_response_msg(const void* value, size_t size) {
  
  response_msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_Proxy.PoxryResponse.response_msg)
}
 ::std::string* PoxryResponse::mutable_response_msg() {
  
  // @@protoc_insertion_point(field_mutable:ik_Proxy.PoxryResponse.response_msg)
  return response_msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PoxryResponse::release_response_msg() {
  // @@protoc_insertion_point(field_release:ik_Proxy.PoxryResponse.response_msg)
  
  return response_msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PoxryResponse::set_allocated_response_msg(::std::string* response_msg) {
  if (response_msg != NULL) {
    
  } else {
    
  }
  response_msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), response_msg);
  // @@protoc_insertion_point(field_set_allocated:ik_Proxy.PoxryResponse.response_msg)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ik_Proxy

// @@protoc_insertion_point(global_scope)