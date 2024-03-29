// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: transfer_file.proto

#include "transfer_file.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace transferfile {
PROTOBUF_CONSTEXPR FileRequest::FileRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FileRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FileRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FileRequestDefaultTypeInternal() {}
  union {
    FileRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FileRequestDefaultTypeInternal _FileRequest_default_instance_;
PROTOBUF_CONSTEXPR Chunk::Chunk(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.buffer_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ChunkDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChunkDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChunkDefaultTypeInternal() {}
  union {
    Chunk _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChunkDefaultTypeInternal _Chunk_default_instance_;
}  // namespace transferfile
static ::_pb::Metadata file_level_metadata_transfer_5ffile_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_transfer_5ffile_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_transfer_5ffile_2eproto = nullptr;

const uint32_t TableStruct_transfer_5ffile_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::transferfile::FileRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::transferfile::FileRequest, _impl_.name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::transferfile::Chunk, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::transferfile::Chunk, _impl_.buffer_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::transferfile::FileRequest)},
  { 7, -1, -1, sizeof(::transferfile::Chunk)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::transferfile::_FileRequest_default_instance_._instance,
  &::transferfile::_Chunk_default_instance_._instance,
};

const char descriptor_table_protodef_transfer_5ffile_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023transfer_file.proto\022\014transferfile\"\033\n\013F"
  "ileRequest\022\014\n\004name\030\001 \001(\t\"\027\n\005Chunk\022\016\n\006buf"
  "fer\030\001 \001(\0142N\n\014TransferFile\022>\n\010Download\022\031."
  "transferfile.FileRequest\032\023.transferfile."
  "Chunk\"\0000\001b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_transfer_5ffile_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_transfer_5ffile_2eproto = {
    false, false, 177, descriptor_table_protodef_transfer_5ffile_2eproto,
    "transfer_file.proto",
    &descriptor_table_transfer_5ffile_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_transfer_5ffile_2eproto::offsets,
    file_level_metadata_transfer_5ffile_2eproto, file_level_enum_descriptors_transfer_5ffile_2eproto,
    file_level_service_descriptors_transfer_5ffile_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_transfer_5ffile_2eproto_getter() {
  return &descriptor_table_transfer_5ffile_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_transfer_5ffile_2eproto(&descriptor_table_transfer_5ffile_2eproto);
namespace transferfile {

// ===================================================================

class FileRequest::_Internal {
 public:
};

FileRequest::FileRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:transferfile.FileRequest)
}
FileRequest::FileRequest(const FileRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FileRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:transferfile.FileRequest)
}

inline void FileRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

FileRequest::~FileRequest() {
  // @@protoc_insertion_point(destructor:transferfile.FileRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FileRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
}

void FileRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FileRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:transferfile.FileRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FileRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "transferfile.FileRequest.name"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FileRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:transferfile.FileRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "transferfile.FileRequest.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:transferfile.FileRequest)
  return target;
}

size_t FileRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:transferfile.FileRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FileRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FileRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FileRequest::GetClassData() const { return &_class_data_; }


void FileRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FileRequest*>(&to_msg);
  auto& from = static_cast<const FileRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:transferfile.FileRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FileRequest::CopyFrom(const FileRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:transferfile.FileRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileRequest::IsInitialized() const {
  return true;
}

void FileRequest::InternalSwap(FileRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata FileRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transfer_5ffile_2eproto_getter, &descriptor_table_transfer_5ffile_2eproto_once,
      file_level_metadata_transfer_5ffile_2eproto[0]);
}

// ===================================================================

class Chunk::_Internal {
 public:
};

Chunk::Chunk(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:transferfile.Chunk)
}
Chunk::Chunk(const Chunk& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Chunk* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.buffer_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.buffer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.buffer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_buffer().empty()) {
    _this->_impl_.buffer_.Set(from._internal_buffer(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:transferfile.Chunk)
}

inline void Chunk::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.buffer_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.buffer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.buffer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Chunk::~Chunk() {
  // @@protoc_insertion_point(destructor:transferfile.Chunk)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Chunk::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.buffer_.Destroy();
}

void Chunk::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Chunk::Clear() {
// @@protoc_insertion_point(message_clear_start:transferfile.Chunk)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.buffer_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Chunk::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes buffer = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_buffer();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Chunk::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:transferfile.Chunk)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes buffer = 1;
  if (!this->_internal_buffer().empty()) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_buffer(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:transferfile.Chunk)
  return target;
}

size_t Chunk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:transferfile.Chunk)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes buffer = 1;
  if (!this->_internal_buffer().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_buffer());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Chunk::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Chunk::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Chunk::GetClassData() const { return &_class_data_; }


void Chunk::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Chunk*>(&to_msg);
  auto& from = static_cast<const Chunk&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:transferfile.Chunk)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_buffer().empty()) {
    _this->_internal_set_buffer(from._internal_buffer());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Chunk::CopyFrom(const Chunk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:transferfile.Chunk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Chunk::IsInitialized() const {
  return true;
}

void Chunk::InternalSwap(Chunk* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.buffer_, lhs_arena,
      &other->_impl_.buffer_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Chunk::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_transfer_5ffile_2eproto_getter, &descriptor_table_transfer_5ffile_2eproto_once,
      file_level_metadata_transfer_5ffile_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace transferfile
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::transferfile::FileRequest*
Arena::CreateMaybeMessage< ::transferfile::FileRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::transferfile::FileRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::transferfile::Chunk*
Arena::CreateMaybeMessage< ::transferfile::Chunk >(Arena* arena) {
  return Arena::CreateMessageInternal< ::transferfile::Chunk >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
