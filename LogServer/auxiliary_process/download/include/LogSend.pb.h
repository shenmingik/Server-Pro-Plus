// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LogSend.proto

#ifndef PROTOBUF_LogSend_2eproto__INCLUDED
#define PROTOBUF_LogSend_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace ik {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_LogSend_2eproto();
void protobuf_AssignDesc_LogSend_2eproto();
void protobuf_ShutdownFile_LogSend_2eproto();

class LogSendReponse;
class LogSendRequest;

// ===================================================================

class LogSendRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik.LogSendRequest) */ {
 public:
  LogSendRequest();
  virtual ~LogSendRequest();

  LogSendRequest(const LogSendRequest& from);

  inline LogSendRequest& operator=(const LogSendRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LogSendRequest& default_instance();

  void Swap(LogSendRequest* other);

  // implements Message ----------------------------------------------

  inline LogSendRequest* New() const { return New(NULL); }

  LogSendRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogSendRequest& from);
  void MergeFrom(const LogSendRequest& from);
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
  void InternalSwap(LogSendRequest* other);
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

  // optional bytes node_name = 1;
  void clear_node_name();
  static const int kNodeNameFieldNumber = 1;
  const ::std::string& node_name() const;
  void set_node_name(const ::std::string& value);
  void set_node_name(const char* value);
  void set_node_name(const void* value, size_t size);
  ::std::string* mutable_node_name();
  ::std::string* release_node_name();
  void set_allocated_node_name(::std::string* node_name);

  // optional bytes time = 2;
  void clear_time();
  static const int kTimeFieldNumber = 2;
  const ::std::string& time() const;
  void set_time(const ::std::string& value);
  void set_time(const char* value);
  void set_time(const void* value, size_t size);
  ::std::string* mutable_time();
  ::std::string* release_time();
  void set_allocated_time(::std::string* time);

  // @@protoc_insertion_point(class_scope:ik.LogSendRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr node_name_;
  ::google::protobuf::internal::ArenaStringPtr time_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_LogSend_2eproto();
  friend void protobuf_AssignDesc_LogSend_2eproto();
  friend void protobuf_ShutdownFile_LogSend_2eproto();

  void InitAsDefaultInstance();
  static LogSendRequest* default_instance_;
};
// -------------------------------------------------------------------

class LogSendReponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik.LogSendReponse) */ {
 public:
  LogSendReponse();
  virtual ~LogSendReponse();

  LogSendReponse(const LogSendReponse& from);

  inline LogSendReponse& operator=(const LogSendReponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LogSendReponse& default_instance();

  void Swap(LogSendReponse* other);

  // implements Message ----------------------------------------------

  inline LogSendReponse* New() const { return New(NULL); }

  LogSendReponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogSendReponse& from);
  void MergeFrom(const LogSendReponse& from);
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
  void InternalSwap(LogSendReponse* other);
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

  // optional int32 serial = 1;
  void clear_serial();
  static const int kSerialFieldNumber = 1;
  ::google::protobuf::int32 serial() const;
  void set_serial(::google::protobuf::int32 value);

  // optional bool is_end = 2;
  void clear_is_end();
  static const int kIsEndFieldNumber = 2;
  bool is_end() const;
  void set_is_end(bool value);

  // optional bytes msg = 3;
  void clear_msg();
  static const int kMsgFieldNumber = 3;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  void set_msg(const char* value);
  void set_msg(const void* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:ik.LogSendReponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 serial_;
  bool is_end_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_LogSend_2eproto();
  friend void protobuf_AssignDesc_LogSend_2eproto();
  friend void protobuf_ShutdownFile_LogSend_2eproto();

  void InitAsDefaultInstance();
  static LogSendReponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LogSendRequest

// optional bytes node_name = 1;
inline void LogSendRequest::clear_node_name() {
  node_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogSendRequest::node_name() const {
  // @@protoc_insertion_point(field_get:ik.LogSendRequest.node_name)
  return node_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogSendRequest::set_node_name(const ::std::string& value) {
  
  node_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik.LogSendRequest.node_name)
}
inline void LogSendRequest::set_node_name(const char* value) {
  
  node_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik.LogSendRequest.node_name)
}
inline void LogSendRequest::set_node_name(const void* value, size_t size) {
  
  node_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik.LogSendRequest.node_name)
}
inline ::std::string* LogSendRequest::mutable_node_name() {
  
  // @@protoc_insertion_point(field_mutable:ik.LogSendRequest.node_name)
  return node_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogSendRequest::release_node_name() {
  // @@protoc_insertion_point(field_release:ik.LogSendRequest.node_name)
  
  return node_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogSendRequest::set_allocated_node_name(::std::string* node_name) {
  if (node_name != NULL) {
    
  } else {
    
  }
  node_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), node_name);
  // @@protoc_insertion_point(field_set_allocated:ik.LogSendRequest.node_name)
}

// optional bytes time = 2;
inline void LogSendRequest::clear_time() {
  time_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogSendRequest::time() const {
  // @@protoc_insertion_point(field_get:ik.LogSendRequest.time)
  return time_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogSendRequest::set_time(const ::std::string& value) {
  
  time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik.LogSendRequest.time)
}
inline void LogSendRequest::set_time(const char* value) {
  
  time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik.LogSendRequest.time)
}
inline void LogSendRequest::set_time(const void* value, size_t size) {
  
  time_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik.LogSendRequest.time)
}
inline ::std::string* LogSendRequest::mutable_time() {
  
  // @@protoc_insertion_point(field_mutable:ik.LogSendRequest.time)
  return time_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogSendRequest::release_time() {
  // @@protoc_insertion_point(field_release:ik.LogSendRequest.time)
  
  return time_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogSendRequest::set_allocated_time(::std::string* time) {
  if (time != NULL) {
    
  } else {
    
  }
  time_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), time);
  // @@protoc_insertion_point(field_set_allocated:ik.LogSendRequest.time)
}

// -------------------------------------------------------------------

// LogSendReponse

// optional int32 serial = 1;
inline void LogSendReponse::clear_serial() {
  serial_ = 0;
}
inline ::google::protobuf::int32 LogSendReponse::serial() const {
  // @@protoc_insertion_point(field_get:ik.LogSendReponse.serial)
  return serial_;
}
inline void LogSendReponse::set_serial(::google::protobuf::int32 value) {
  
  serial_ = value;
  // @@protoc_insertion_point(field_set:ik.LogSendReponse.serial)
}

// optional bool is_end = 2;
inline void LogSendReponse::clear_is_end() {
  is_end_ = false;
}
inline bool LogSendReponse::is_end() const {
  // @@protoc_insertion_point(field_get:ik.LogSendReponse.is_end)
  return is_end_;
}
inline void LogSendReponse::set_is_end(bool value) {
  
  is_end_ = value;
  // @@protoc_insertion_point(field_set:ik.LogSendReponse.is_end)
}

// optional bytes msg = 3;
inline void LogSendReponse::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LogSendReponse::msg() const {
  // @@protoc_insertion_point(field_get:ik.LogSendReponse.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogSendReponse::set_msg(const ::std::string& value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik.LogSendReponse.msg)
}
inline void LogSendReponse::set_msg(const char* value) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik.LogSendReponse.msg)
}
inline void LogSendReponse::set_msg(const void* value, size_t size) {
  
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik.LogSendReponse.msg)
}
inline ::std::string* LogSendReponse::mutable_msg() {
  
  // @@protoc_insertion_point(field_mutable:ik.LogSendReponse.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogSendReponse::release_msg() {
  // @@protoc_insertion_point(field_release:ik.LogSendReponse.msg)
  
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogSendReponse::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    
  } else {
    
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:ik.LogSendReponse.msg)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ik

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LogSend_2eproto__INCLUDED