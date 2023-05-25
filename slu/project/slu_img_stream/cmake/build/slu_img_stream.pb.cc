// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: slu_img_stream.proto

#include "slu_img_stream.pb.h"

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
namespace sluimgstream {
constexpr ReadyToReceiveImagesRequest::ReadyToReceiveImagesRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : readyclientflag_(false){}
struct ReadyToReceiveImagesRequestDefaultTypeInternal {
  constexpr ReadyToReceiveImagesRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ReadyToReceiveImagesRequestDefaultTypeInternal() {}
  union {
    ReadyToReceiveImagesRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ReadyToReceiveImagesRequestDefaultTypeInternal _ReadyToReceiveImagesRequest_default_instance_;
constexpr ResponseImages::ResponseImages(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : img_data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , img_size_(0u){}
struct ResponseImagesDefaultTypeInternal {
  constexpr ResponseImagesDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ResponseImagesDefaultTypeInternal() {}
  union {
    ResponseImages _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ResponseImagesDefaultTypeInternal _ResponseImages_default_instance_;
constexpr ProcessedDataRequest::ProcessedDataRequest(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : img_data_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , img_size_(0u){}
struct ProcessedDataRequestDefaultTypeInternal {
  constexpr ProcessedDataRequestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ProcessedDataRequestDefaultTypeInternal() {}
  union {
    ProcessedDataRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ProcessedDataRequestDefaultTypeInternal _ProcessedDataRequest_default_instance_;
constexpr ResponseDataReceived::ResponseDataReceived(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : acknowledgedatareceive_(false){}
struct ResponseDataReceivedDefaultTypeInternal {
  constexpr ResponseDataReceivedDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ResponseDataReceivedDefaultTypeInternal() {}
  union {
    ResponseDataReceived _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ResponseDataReceivedDefaultTypeInternal _ResponseDataReceived_default_instance_;
}  // namespace sluimgstream
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_slu_5fimg_5fstream_2eproto[4];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_slu_5fimg_5fstream_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_slu_5fimg_5fstream_2eproto = nullptr;

const uint32_t TableStruct_slu_5fimg_5fstream_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ReadyToReceiveImagesRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ReadyToReceiveImagesRequest, readyclientflag_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ResponseImages, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ResponseImages, img_size_),
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ResponseImages, img_data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ProcessedDataRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ProcessedDataRequest, img_size_),
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ProcessedDataRequest, img_data_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ResponseDataReceived, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::sluimgstream::ResponseDataReceived, acknowledgedatareceive_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::sluimgstream::ReadyToReceiveImagesRequest)},
  { 7, -1, -1, sizeof(::sluimgstream::ResponseImages)},
  { 15, -1, -1, sizeof(::sluimgstream::ProcessedDataRequest)},
  { 23, -1, -1, sizeof(::sluimgstream::ResponseDataReceived)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sluimgstream::_ReadyToReceiveImagesRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sluimgstream::_ResponseImages_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sluimgstream::_ProcessedDataRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sluimgstream::_ResponseDataReceived_default_instance_),
};

const char descriptor_table_protodef_slu_5fimg_5fstream_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024slu_img_stream.proto\022\014sluimgstream\"6\n\033"
  "ReadyToReceiveImagesRequest\022\027\n\017readyClie"
  "ntFlag\030\001 \001(\010\"4\n\016ResponseImages\022\020\n\010img_si"
  "ze\030\001 \001(\r\022\020\n\010img_data\030\002 \001(\014\":\n\024ProcessedD"
  "ataRequest\022\020\n\010img_size\030\001 \001(\r\022\020\n\010img_data"
  "\030\002 \001(\014\"6\n\024ResponseDataReceived\022\036\n\026acknow"
  "ledgeDataReceive\030\001 \001(\0102\304\001\n\014SluImgStream\022"
  "Y\n\nSendImages\022).sluimgstream.ReadyToRece"
  "iveImagesRequest\032\034.sluimgstream.Response"
  "Images\"\0000\001\022Y\n\013ReceiveData\022\".sluimgstream"
  ".ProcessedDataRequest\032\".sluimgstream.Res"
  "ponseDataReceived\"\000(\001b\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_slu_5fimg_5fstream_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_slu_5fimg_5fstream_2eproto = {
  false, false, 469, descriptor_table_protodef_slu_5fimg_5fstream_2eproto, "slu_img_stream.proto", 
  &descriptor_table_slu_5fimg_5fstream_2eproto_once, nullptr, 0, 4,
  schemas, file_default_instances, TableStruct_slu_5fimg_5fstream_2eproto::offsets,
  file_level_metadata_slu_5fimg_5fstream_2eproto, file_level_enum_descriptors_slu_5fimg_5fstream_2eproto, file_level_service_descriptors_slu_5fimg_5fstream_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_slu_5fimg_5fstream_2eproto_getter() {
  return &descriptor_table_slu_5fimg_5fstream_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_slu_5fimg_5fstream_2eproto(&descriptor_table_slu_5fimg_5fstream_2eproto);
namespace sluimgstream {

// ===================================================================

class ReadyToReceiveImagesRequest::_Internal {
 public:
};

ReadyToReceiveImagesRequest::ReadyToReceiveImagesRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:sluimgstream.ReadyToReceiveImagesRequest)
}
ReadyToReceiveImagesRequest::ReadyToReceiveImagesRequest(const ReadyToReceiveImagesRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  readyclientflag_ = from.readyclientflag_;
  // @@protoc_insertion_point(copy_constructor:sluimgstream.ReadyToReceiveImagesRequest)
}

inline void ReadyToReceiveImagesRequest::SharedCtor() {
readyclientflag_ = false;
}

ReadyToReceiveImagesRequest::~ReadyToReceiveImagesRequest() {
  // @@protoc_insertion_point(destructor:sluimgstream.ReadyToReceiveImagesRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ReadyToReceiveImagesRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ReadyToReceiveImagesRequest::ArenaDtor(void* object) {
  ReadyToReceiveImagesRequest* _this = reinterpret_cast< ReadyToReceiveImagesRequest* >(object);
  (void)_this;
}
void ReadyToReceiveImagesRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ReadyToReceiveImagesRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ReadyToReceiveImagesRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:sluimgstream.ReadyToReceiveImagesRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  readyclientflag_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ReadyToReceiveImagesRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool readyClientFlag = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          readyclientflag_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* ReadyToReceiveImagesRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sluimgstream.ReadyToReceiveImagesRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool readyClientFlag = 1;
  if (this->_internal_readyclientflag() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_readyclientflag(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sluimgstream.ReadyToReceiveImagesRequest)
  return target;
}

size_t ReadyToReceiveImagesRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sluimgstream.ReadyToReceiveImagesRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool readyClientFlag = 1;
  if (this->_internal_readyclientflag() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ReadyToReceiveImagesRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ReadyToReceiveImagesRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ReadyToReceiveImagesRequest::GetClassData() const { return &_class_data_; }

void ReadyToReceiveImagesRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ReadyToReceiveImagesRequest *>(to)->MergeFrom(
      static_cast<const ReadyToReceiveImagesRequest &>(from));
}


void ReadyToReceiveImagesRequest::MergeFrom(const ReadyToReceiveImagesRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sluimgstream.ReadyToReceiveImagesRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_readyclientflag() != 0) {
    _internal_set_readyclientflag(from._internal_readyclientflag());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ReadyToReceiveImagesRequest::CopyFrom(const ReadyToReceiveImagesRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sluimgstream.ReadyToReceiveImagesRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReadyToReceiveImagesRequest::IsInitialized() const {
  return true;
}

void ReadyToReceiveImagesRequest::InternalSwap(ReadyToReceiveImagesRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(readyclientflag_, other->readyclientflag_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ReadyToReceiveImagesRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_slu_5fimg_5fstream_2eproto_getter, &descriptor_table_slu_5fimg_5fstream_2eproto_once,
      file_level_metadata_slu_5fimg_5fstream_2eproto[0]);
}

// ===================================================================

class ResponseImages::_Internal {
 public:
};

ResponseImages::ResponseImages(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:sluimgstream.ResponseImages)
}
ResponseImages::ResponseImages(const ResponseImages& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  img_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    img_data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_img_data().empty()) {
    img_data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_img_data(), 
      GetArenaForAllocation());
  }
  img_size_ = from.img_size_;
  // @@protoc_insertion_point(copy_constructor:sluimgstream.ResponseImages)
}

inline void ResponseImages::SharedCtor() {
img_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  img_data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
img_size_ = 0u;
}

ResponseImages::~ResponseImages() {
  // @@protoc_insertion_point(destructor:sluimgstream.ResponseImages)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ResponseImages::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  img_data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResponseImages::ArenaDtor(void* object) {
  ResponseImages* _this = reinterpret_cast< ResponseImages* >(object);
  (void)_this;
}
void ResponseImages::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResponseImages::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ResponseImages::Clear() {
// @@protoc_insertion_point(message_clear_start:sluimgstream.ResponseImages)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  img_data_.ClearToEmpty();
  img_size_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResponseImages::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 img_size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          img_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes img_data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_img_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* ResponseImages::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sluimgstream.ResponseImages)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 img_size = 1;
  if (this->_internal_img_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_img_size(), target);
  }

  // bytes img_data = 2;
  if (!this->_internal_img_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_img_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sluimgstream.ResponseImages)
  return target;
}

size_t ResponseImages::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sluimgstream.ResponseImages)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes img_data = 2;
  if (!this->_internal_img_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_img_data());
  }

  // uint32 img_size = 1;
  if (this->_internal_img_size() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_img_size());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResponseImages::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ResponseImages::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResponseImages::GetClassData() const { return &_class_data_; }

void ResponseImages::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ResponseImages *>(to)->MergeFrom(
      static_cast<const ResponseImages &>(from));
}


void ResponseImages::MergeFrom(const ResponseImages& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sluimgstream.ResponseImages)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_img_data().empty()) {
    _internal_set_img_data(from._internal_img_data());
  }
  if (from._internal_img_size() != 0) {
    _internal_set_img_size(from._internal_img_size());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResponseImages::CopyFrom(const ResponseImages& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sluimgstream.ResponseImages)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseImages::IsInitialized() const {
  return true;
}

void ResponseImages::InternalSwap(ResponseImages* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &img_data_, lhs_arena,
      &other->img_data_, rhs_arena
  );
  swap(img_size_, other->img_size_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResponseImages::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_slu_5fimg_5fstream_2eproto_getter, &descriptor_table_slu_5fimg_5fstream_2eproto_once,
      file_level_metadata_slu_5fimg_5fstream_2eproto[1]);
}

// ===================================================================

class ProcessedDataRequest::_Internal {
 public:
};

ProcessedDataRequest::ProcessedDataRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:sluimgstream.ProcessedDataRequest)
}
ProcessedDataRequest::ProcessedDataRequest(const ProcessedDataRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  img_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    img_data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_img_data().empty()) {
    img_data_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_img_data(), 
      GetArenaForAllocation());
  }
  img_size_ = from.img_size_;
  // @@protoc_insertion_point(copy_constructor:sluimgstream.ProcessedDataRequest)
}

inline void ProcessedDataRequest::SharedCtor() {
img_data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  img_data_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
img_size_ = 0u;
}

ProcessedDataRequest::~ProcessedDataRequest() {
  // @@protoc_insertion_point(destructor:sluimgstream.ProcessedDataRequest)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ProcessedDataRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  img_data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ProcessedDataRequest::ArenaDtor(void* object) {
  ProcessedDataRequest* _this = reinterpret_cast< ProcessedDataRequest* >(object);
  (void)_this;
}
void ProcessedDataRequest::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProcessedDataRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ProcessedDataRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:sluimgstream.ProcessedDataRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  img_data_.ClearToEmpty();
  img_size_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProcessedDataRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 img_size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          img_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes img_data = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_img_data();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* ProcessedDataRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sluimgstream.ProcessedDataRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 img_size = 1;
  if (this->_internal_img_size() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_img_size(), target);
  }

  // bytes img_data = 2;
  if (!this->_internal_img_data().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_img_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sluimgstream.ProcessedDataRequest)
  return target;
}

size_t ProcessedDataRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sluimgstream.ProcessedDataRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes img_data = 2;
  if (!this->_internal_img_data().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_img_data());
  }

  // uint32 img_size = 1;
  if (this->_internal_img_size() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32SizePlusOne(this->_internal_img_size());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProcessedDataRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ProcessedDataRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProcessedDataRequest::GetClassData() const { return &_class_data_; }

void ProcessedDataRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ProcessedDataRequest *>(to)->MergeFrom(
      static_cast<const ProcessedDataRequest &>(from));
}


void ProcessedDataRequest::MergeFrom(const ProcessedDataRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sluimgstream.ProcessedDataRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_img_data().empty()) {
    _internal_set_img_data(from._internal_img_data());
  }
  if (from._internal_img_size() != 0) {
    _internal_set_img_size(from._internal_img_size());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProcessedDataRequest::CopyFrom(const ProcessedDataRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sluimgstream.ProcessedDataRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessedDataRequest::IsInitialized() const {
  return true;
}

void ProcessedDataRequest::InternalSwap(ProcessedDataRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &img_data_, lhs_arena,
      &other->img_data_, rhs_arena
  );
  swap(img_size_, other->img_size_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProcessedDataRequest::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_slu_5fimg_5fstream_2eproto_getter, &descriptor_table_slu_5fimg_5fstream_2eproto_once,
      file_level_metadata_slu_5fimg_5fstream_2eproto[2]);
}

// ===================================================================

class ResponseDataReceived::_Internal {
 public:
};

ResponseDataReceived::ResponseDataReceived(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:sluimgstream.ResponseDataReceived)
}
ResponseDataReceived::ResponseDataReceived(const ResponseDataReceived& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  acknowledgedatareceive_ = from.acknowledgedatareceive_;
  // @@protoc_insertion_point(copy_constructor:sluimgstream.ResponseDataReceived)
}

inline void ResponseDataReceived::SharedCtor() {
acknowledgedatareceive_ = false;
}

ResponseDataReceived::~ResponseDataReceived() {
  // @@protoc_insertion_point(destructor:sluimgstream.ResponseDataReceived)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void ResponseDataReceived::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ResponseDataReceived::ArenaDtor(void* object) {
  ResponseDataReceived* _this = reinterpret_cast< ResponseDataReceived* >(object);
  (void)_this;
}
void ResponseDataReceived::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResponseDataReceived::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ResponseDataReceived::Clear() {
// @@protoc_insertion_point(message_clear_start:sluimgstream.ResponseDataReceived)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  acknowledgedatareceive_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResponseDataReceived::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool acknowledgeDataReceive = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          acknowledgedatareceive_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* ResponseDataReceived::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sluimgstream.ResponseDataReceived)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool acknowledgeDataReceive = 1;
  if (this->_internal_acknowledgedatareceive() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_acknowledgedatareceive(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sluimgstream.ResponseDataReceived)
  return target;
}

size_t ResponseDataReceived::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sluimgstream.ResponseDataReceived)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool acknowledgeDataReceive = 1;
  if (this->_internal_acknowledgedatareceive() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResponseDataReceived::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ResponseDataReceived::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResponseDataReceived::GetClassData() const { return &_class_data_; }

void ResponseDataReceived::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ResponseDataReceived *>(to)->MergeFrom(
      static_cast<const ResponseDataReceived &>(from));
}


void ResponseDataReceived::MergeFrom(const ResponseDataReceived& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sluimgstream.ResponseDataReceived)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_acknowledgedatareceive() != 0) {
    _internal_set_acknowledgedatareceive(from._internal_acknowledgedatareceive());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResponseDataReceived::CopyFrom(const ResponseDataReceived& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sluimgstream.ResponseDataReceived)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResponseDataReceived::IsInitialized() const {
  return true;
}

void ResponseDataReceived::InternalSwap(ResponseDataReceived* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(acknowledgedatareceive_, other->acknowledgedatareceive_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResponseDataReceived::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_slu_5fimg_5fstream_2eproto_getter, &descriptor_table_slu_5fimg_5fstream_2eproto_once,
      file_level_metadata_slu_5fimg_5fstream_2eproto[3]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace sluimgstream
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sluimgstream::ReadyToReceiveImagesRequest* Arena::CreateMaybeMessage< ::sluimgstream::ReadyToReceiveImagesRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sluimgstream::ReadyToReceiveImagesRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::sluimgstream::ResponseImages* Arena::CreateMaybeMessage< ::sluimgstream::ResponseImages >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sluimgstream::ResponseImages >(arena);
}
template<> PROTOBUF_NOINLINE ::sluimgstream::ProcessedDataRequest* Arena::CreateMaybeMessage< ::sluimgstream::ProcessedDataRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sluimgstream::ProcessedDataRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::sluimgstream::ResponseDataReceived* Arena::CreateMaybeMessage< ::sluimgstream::ResponseDataReceived >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sluimgstream::ResponseDataReceived >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
