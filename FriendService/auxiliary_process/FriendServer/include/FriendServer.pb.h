// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FriendServer.proto

#ifndef PROTOBUF_FriendServer_2eproto__INCLUDED
#define PROTOBUF_FriendServer_2eproto__INCLUDED

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

namespace ik_FriendServer {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_FriendServer_2eproto();
void protobuf_AssignDesc_FriendServer_2eproto();
void protobuf_ShutdownFile_FriendServer_2eproto();

class AddFriendRequest;
class DeleteFriendRequest;
class FriendInfo;
class FriendListRequest;
class FriendListResponse;
class Request;

// ===================================================================

class Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_FriendServer.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  void Swap(Request* other);

  // implements Message ----------------------------------------------

  inline Request* New() const { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
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
  void InternalSwap(Request* other);
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

  // optional bytes type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  void set_type(const char* value);
  void set_type(const void* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // optional bytes request = 2;
  void clear_request();
  static const int kRequestFieldNumber = 2;
  const ::std::string& request() const;
  void set_request(const ::std::string& value);
  void set_request(const char* value);
  void set_request(const void* value, size_t size);
  ::std::string* mutable_request();
  ::std::string* release_request();
  void set_allocated_request(::std::string* request);

  // @@protoc_insertion_point(class_scope:ik_FriendServer.Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::internal::ArenaStringPtr request_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_FriendServer_2eproto();
  friend void protobuf_AssignDesc_FriendServer_2eproto();
  friend void protobuf_ShutdownFile_FriendServer_2eproto();

  void InitAsDefaultInstance();
  static Request* default_instance_;
};
// -------------------------------------------------------------------

class FriendListRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_FriendServer.FriendListRequest) */ {
 public:
  FriendListRequest();
  virtual ~FriendListRequest();

  FriendListRequest(const FriendListRequest& from);

  inline FriendListRequest& operator=(const FriendListRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FriendListRequest& default_instance();

  void Swap(FriendListRequest* other);

  // implements Message ----------------------------------------------

  inline FriendListRequest* New() const { return New(NULL); }

  FriendListRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FriendListRequest& from);
  void MergeFrom(const FriendListRequest& from);
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
  void InternalSwap(FriendListRequest* other);
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

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ik_FriendServer.FriendListRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_FriendServer_2eproto();
  friend void protobuf_AssignDesc_FriendServer_2eproto();
  friend void protobuf_ShutdownFile_FriendServer_2eproto();

  void InitAsDefaultInstance();
  static FriendListRequest* default_instance_;
};
// -------------------------------------------------------------------

class FriendInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_FriendServer.FriendInfo) */ {
 public:
  FriendInfo();
  virtual ~FriendInfo();

  FriendInfo(const FriendInfo& from);

  inline FriendInfo& operator=(const FriendInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FriendInfo& default_instance();

  void Swap(FriendInfo* other);

  // implements Message ----------------------------------------------

  inline FriendInfo* New() const { return New(NULL); }

  FriendInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FriendInfo& from);
  void MergeFrom(const FriendInfo& from);
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
  void InternalSwap(FriendInfo* other);
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

  // optional int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional bytes name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const void* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:ik_FriendServer.FriendInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_FriendServer_2eproto();
  friend void protobuf_AssignDesc_FriendServer_2eproto();
  friend void protobuf_ShutdownFile_FriendServer_2eproto();

  void InitAsDefaultInstance();
  static FriendInfo* default_instance_;
};
// -------------------------------------------------------------------

class FriendListResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_FriendServer.FriendListResponse) */ {
 public:
  FriendListResponse();
  virtual ~FriendListResponse();

  FriendListResponse(const FriendListResponse& from);

  inline FriendListResponse& operator=(const FriendListResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FriendListResponse& default_instance();

  void Swap(FriendListResponse* other);

  // implements Message ----------------------------------------------

  inline FriendListResponse* New() const { return New(NULL); }

  FriendListResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FriendListResponse& from);
  void MergeFrom(const FriendListResponse& from);
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
  void InternalSwap(FriendListResponse* other);
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

  // optional bool is_success = 1;
  void clear_is_success();
  static const int kIsSuccessFieldNumber = 1;
  bool is_success() const;
  void set_is_success(bool value);

  // repeated .ik_FriendServer.FriendInfo friends = 2;
  int friends_size() const;
  void clear_friends();
  static const int kFriendsFieldNumber = 2;
  const ::ik_FriendServer::FriendInfo& friends(int index) const;
  ::ik_FriendServer::FriendInfo* mutable_friends(int index);
  ::ik_FriendServer::FriendInfo* add_friends();
  ::google::protobuf::RepeatedPtrField< ::ik_FriendServer::FriendInfo >*
      mutable_friends();
  const ::google::protobuf::RepeatedPtrField< ::ik_FriendServer::FriendInfo >&
      friends() const;

  // @@protoc_insertion_point(class_scope:ik_FriendServer.FriendListResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::ik_FriendServer::FriendInfo > friends_;
  bool is_success_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_FriendServer_2eproto();
  friend void protobuf_AssignDesc_FriendServer_2eproto();
  friend void protobuf_ShutdownFile_FriendServer_2eproto();

  void InitAsDefaultInstance();
  static FriendListResponse* default_instance_;
};
// -------------------------------------------------------------------

class AddFriendRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_FriendServer.AddFriendRequest) */ {
 public:
  AddFriendRequest();
  virtual ~AddFriendRequest();

  AddFriendRequest(const AddFriendRequest& from);

  inline AddFriendRequest& operator=(const AddFriendRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AddFriendRequest& default_instance();

  void Swap(AddFriendRequest* other);

  // implements Message ----------------------------------------------

  inline AddFriendRequest* New() const { return New(NULL); }

  AddFriendRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AddFriendRequest& from);
  void MergeFrom(const AddFriendRequest& from);
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
  void InternalSwap(AddFriendRequest* other);
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

  // optional int32 myid = 1;
  void clear_myid();
  static const int kMyidFieldNumber = 1;
  ::google::protobuf::int32 myid() const;
  void set_myid(::google::protobuf::int32 value);

  // optional int32 friendid = 2;
  void clear_friendid();
  static const int kFriendidFieldNumber = 2;
  ::google::protobuf::int32 friendid() const;
  void set_friendid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ik_FriendServer.AddFriendRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 myid_;
  ::google::protobuf::int32 friendid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_FriendServer_2eproto();
  friend void protobuf_AssignDesc_FriendServer_2eproto();
  friend void protobuf_ShutdownFile_FriendServer_2eproto();

  void InitAsDefaultInstance();
  static AddFriendRequest* default_instance_;
};
// -------------------------------------------------------------------

class DeleteFriendRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ik_FriendServer.DeleteFriendRequest) */ {
 public:
  DeleteFriendRequest();
  virtual ~DeleteFriendRequest();

  DeleteFriendRequest(const DeleteFriendRequest& from);

  inline DeleteFriendRequest& operator=(const DeleteFriendRequest& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DeleteFriendRequest& default_instance();

  void Swap(DeleteFriendRequest* other);

  // implements Message ----------------------------------------------

  inline DeleteFriendRequest* New() const { return New(NULL); }

  DeleteFriendRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DeleteFriendRequest& from);
  void MergeFrom(const DeleteFriendRequest& from);
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
  void InternalSwap(DeleteFriendRequest* other);
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

  // optional int32 myid = 1;
  void clear_myid();
  static const int kMyidFieldNumber = 1;
  ::google::protobuf::int32 myid() const;
  void set_myid(::google::protobuf::int32 value);

  // optional int32 friendid = 2;
  void clear_friendid();
  static const int kFriendidFieldNumber = 2;
  ::google::protobuf::int32 friendid() const;
  void set_friendid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ik_FriendServer.DeleteFriendRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 myid_;
  ::google::protobuf::int32 friendid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_FriendServer_2eproto();
  friend void protobuf_AssignDesc_FriendServer_2eproto();
  friend void protobuf_ShutdownFile_FriendServer_2eproto();

  void InitAsDefaultInstance();
  static DeleteFriendRequest* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Request

// optional bytes type = 1;
inline void Request::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::type() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.Request.type)
  return type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_FriendServer.Request.type)
}
inline void Request::set_type(const char* value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_FriendServer.Request.type)
}
inline void Request::set_type(const void* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_FriendServer.Request.type)
}
inline ::std::string* Request::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:ik_FriendServer.Request.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_type() {
  // @@protoc_insertion_point(field_release:ik_FriendServer.Request.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:ik_FriendServer.Request.type)
}

// optional bytes request = 2;
inline void Request::clear_request() {
  request_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::request() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.Request.request)
  return request_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_request(const ::std::string& value) {
  
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_FriendServer.Request.request)
}
inline void Request::set_request(const char* value) {
  
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_FriendServer.Request.request)
}
inline void Request::set_request(const void* value, size_t size) {
  
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_FriendServer.Request.request)
}
inline ::std::string* Request::mutable_request() {
  
  // @@protoc_insertion_point(field_mutable:ik_FriendServer.Request.request)
  return request_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_request() {
  // @@protoc_insertion_point(field_release:ik_FriendServer.Request.request)
  
  return request_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_request(::std::string* request) {
  if (request != NULL) {
    
  } else {
    
  }
  request_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request);
  // @@protoc_insertion_point(field_set_allocated:ik_FriendServer.Request.request)
}

// -------------------------------------------------------------------

// FriendListRequest

// optional int32 id = 1;
inline void FriendListRequest::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 FriendListRequest::id() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.FriendListRequest.id)
  return id_;
}
inline void FriendListRequest::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ik_FriendServer.FriendListRequest.id)
}

// -------------------------------------------------------------------

// FriendInfo

// optional int32 id = 1;
inline void FriendInfo::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 FriendInfo::id() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.FriendInfo.id)
  return id_;
}
inline void FriendInfo::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:ik_FriendServer.FriendInfo.id)
}

// optional bytes name = 2;
inline void FriendInfo::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FriendInfo::name() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.FriendInfo.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FriendInfo::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ik_FriendServer.FriendInfo.name)
}
inline void FriendInfo::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ik_FriendServer.FriendInfo.name)
}
inline void FriendInfo::set_name(const void* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ik_FriendServer.FriendInfo.name)
}
inline ::std::string* FriendInfo::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:ik_FriendServer.FriendInfo.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FriendInfo::release_name() {
  // @@protoc_insertion_point(field_release:ik_FriendServer.FriendInfo.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FriendInfo::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ik_FriendServer.FriendInfo.name)
}

// -------------------------------------------------------------------

// FriendListResponse

// optional bool is_success = 1;
inline void FriendListResponse::clear_is_success() {
  is_success_ = false;
}
inline bool FriendListResponse::is_success() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.FriendListResponse.is_success)
  return is_success_;
}
inline void FriendListResponse::set_is_success(bool value) {
  
  is_success_ = value;
  // @@protoc_insertion_point(field_set:ik_FriendServer.FriendListResponse.is_success)
}

// repeated .ik_FriendServer.FriendInfo friends = 2;
inline int FriendListResponse::friends_size() const {
  return friends_.size();
}
inline void FriendListResponse::clear_friends() {
  friends_.Clear();
}
inline const ::ik_FriendServer::FriendInfo& FriendListResponse::friends(int index) const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.FriendListResponse.friends)
  return friends_.Get(index);
}
inline ::ik_FriendServer::FriendInfo* FriendListResponse::mutable_friends(int index) {
  // @@protoc_insertion_point(field_mutable:ik_FriendServer.FriendListResponse.friends)
  return friends_.Mutable(index);
}
inline ::ik_FriendServer::FriendInfo* FriendListResponse::add_friends() {
  // @@protoc_insertion_point(field_add:ik_FriendServer.FriendListResponse.friends)
  return friends_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ik_FriendServer::FriendInfo >*
FriendListResponse::mutable_friends() {
  // @@protoc_insertion_point(field_mutable_list:ik_FriendServer.FriendListResponse.friends)
  return &friends_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ik_FriendServer::FriendInfo >&
FriendListResponse::friends() const {
  // @@protoc_insertion_point(field_list:ik_FriendServer.FriendListResponse.friends)
  return friends_;
}

// -------------------------------------------------------------------

// AddFriendRequest

// optional int32 myid = 1;
inline void AddFriendRequest::clear_myid() {
  myid_ = 0;
}
inline ::google::protobuf::int32 AddFriendRequest::myid() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.AddFriendRequest.myid)
  return myid_;
}
inline void AddFriendRequest::set_myid(::google::protobuf::int32 value) {
  
  myid_ = value;
  // @@protoc_insertion_point(field_set:ik_FriendServer.AddFriendRequest.myid)
}

// optional int32 friendid = 2;
inline void AddFriendRequest::clear_friendid() {
  friendid_ = 0;
}
inline ::google::protobuf::int32 AddFriendRequest::friendid() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.AddFriendRequest.friendid)
  return friendid_;
}
inline void AddFriendRequest::set_friendid(::google::protobuf::int32 value) {
  
  friendid_ = value;
  // @@protoc_insertion_point(field_set:ik_FriendServer.AddFriendRequest.friendid)
}

// -------------------------------------------------------------------

// DeleteFriendRequest

// optional int32 myid = 1;
inline void DeleteFriendRequest::clear_myid() {
  myid_ = 0;
}
inline ::google::protobuf::int32 DeleteFriendRequest::myid() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.DeleteFriendRequest.myid)
  return myid_;
}
inline void DeleteFriendRequest::set_myid(::google::protobuf::int32 value) {
  
  myid_ = value;
  // @@protoc_insertion_point(field_set:ik_FriendServer.DeleteFriendRequest.myid)
}

// optional int32 friendid = 2;
inline void DeleteFriendRequest::clear_friendid() {
  friendid_ = 0;
}
inline ::google::protobuf::int32 DeleteFriendRequest::friendid() const {
  // @@protoc_insertion_point(field_get:ik_FriendServer.DeleteFriendRequest.friendid)
  return friendid_;
}
inline void DeleteFriendRequest::set_friendid(::google::protobuf::int32 value) {
  
  friendid_ = value;
  // @@protoc_insertion_point(field_set:ik_FriendServer.DeleteFriendRequest.friendid)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ik_FriendServer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FriendServer_2eproto__INCLUDED