// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: resource_handle.proto

#include "resource_handle.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace tensorflow {
class ResourceHandleProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResourceHandleProto> _instance;
} _ResourceHandleProto_default_instance_;
}  // namespace tensorflow
static void InitDefaultsscc_info_ResourceHandleProto_resource_5fhandle_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::_ResourceHandleProto_default_instance_;
    new (ptr) ::tensorflow::ResourceHandleProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::ResourceHandleProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResourceHandleProto_resource_5fhandle_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_ResourceHandleProto_resource_5fhandle_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_resource_5fhandle_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_resource_5fhandle_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_resource_5fhandle_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_resource_5fhandle_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, device_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, container_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, name_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, hash_code_),
  PROTOBUF_FIELD_OFFSET(::tensorflow::ResourceHandleProto, maybe_type_name_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::ResourceHandleProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::tensorflow::_ResourceHandleProto_default_instance_),
};

const char descriptor_table_protodef_resource_5fhandle_2eproto[] =
  "\n\025resource_handle.proto\022\ntensorflow\"r\n\023R"
  "esourceHandleProto\022\016\n\006device\030\001 \001(\t\022\021\n\tco"
  "ntainer\030\002 \001(\t\022\014\n\004name\030\003 \001(\t\022\021\n\thash_code"
  "\030\004 \001(\004\022\027\n\017maybe_type_name\030\005 \001(\tB/\n\030org.t"
  "ensorflow.frameworkB\016ResourceHandleP\001\370\001\001"
  "b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_resource_5fhandle_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_resource_5fhandle_2eproto_sccs[1] = {
  &scc_info_ResourceHandleProto_resource_5fhandle_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_resource_5fhandle_2eproto_once;
static bool descriptor_table_resource_5fhandle_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_resource_5fhandle_2eproto = {
  &descriptor_table_resource_5fhandle_2eproto_initialized, descriptor_table_protodef_resource_5fhandle_2eproto, "resource_handle.proto", 208,
  &descriptor_table_resource_5fhandle_2eproto_once, descriptor_table_resource_5fhandle_2eproto_sccs, descriptor_table_resource_5fhandle_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_resource_5fhandle_2eproto::offsets,
  file_level_metadata_resource_5fhandle_2eproto, 1, file_level_enum_descriptors_resource_5fhandle_2eproto, file_level_service_descriptors_resource_5fhandle_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_resource_5fhandle_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_resource_5fhandle_2eproto), true);
namespace tensorflow {

// ===================================================================

void ResourceHandleProto::InitAsDefaultInstance() {
}
class ResourceHandleProto::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResourceHandleProto::kDeviceFieldNumber;
const int ResourceHandleProto::kContainerFieldNumber;
const int ResourceHandleProto::kNameFieldNumber;
const int ResourceHandleProto::kHashCodeFieldNumber;
const int ResourceHandleProto::kMaybeTypeNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResourceHandleProto::ResourceHandleProto()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.ResourceHandleProto)
}
ResourceHandleProto::ResourceHandleProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
  _internal_metadata_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.ResourceHandleProto)
}
ResourceHandleProto::ResourceHandleProto(const ResourceHandleProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  device_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.device().size() > 0) {
    device_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.device(),
      GetArenaNoVirtual());
  }
  container_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.container().size() > 0) {
    container_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.container(),
      GetArenaNoVirtual());
  }
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name(),
      GetArenaNoVirtual());
  }
  maybe_type_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.maybe_type_name().size() > 0) {
    maybe_type_name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.maybe_type_name(),
      GetArenaNoVirtual());
  }
  hash_code_ = from.hash_code_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.ResourceHandleProto)
}

void ResourceHandleProto::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ResourceHandleProto_resource_5fhandle_2eproto.base);
  device_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  container_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  maybe_type_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  hash_code_ = PROTOBUF_ULONGLONG(0);
}

ResourceHandleProto::~ResourceHandleProto() {
  // @@protoc_insertion_point(destructor:tensorflow.ResourceHandleProto)
  SharedDtor();
}

void ResourceHandleProto::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == nullptr);
  device_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  container_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  maybe_type_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResourceHandleProto::ArenaDtor(void* object) {
  ResourceHandleProto* _this = reinterpret_cast< ResourceHandleProto* >(object);
  (void)_this;
}
void ResourceHandleProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResourceHandleProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResourceHandleProto& ResourceHandleProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResourceHandleProto_resource_5fhandle_2eproto.base);
  return *internal_default_instance();
}


void ResourceHandleProto::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.ResourceHandleProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  device_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  container_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  maybe_type_name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  hash_code_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ResourceHandleProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArenaNoVirtual(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string device = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_device(), ptr, ctx, "tensorflow.ResourceHandleProto.device");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string container = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_container(), ptr, ctx, "tensorflow.ResourceHandleProto.container");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_name(), ptr, ctx, "tensorflow.ResourceHandleProto.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint64 hash_code = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          hash_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string maybe_type_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_maybe_type_name(), ptr, ctx, "tensorflow.ResourceHandleProto.maybe_type_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ResourceHandleProto::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.ResourceHandleProto)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string device = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (10 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_device()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->device().data(), static_cast<int>(this->device().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.device"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string container = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (18 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_container()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->container().data(), static_cast<int>(this->container().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.container"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 hash_code = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint64, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT64>(
                 input, &hash_code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string maybe_type_name = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (42 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_maybe_type_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->maybe_type_name().data(), static_cast<int>(this->maybe_type_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "tensorflow.ResourceHandleProto.maybe_type_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.ResourceHandleProto)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.ResourceHandleProto)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ResourceHandleProto::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.ResourceHandleProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string device = 1;
  if (this->device().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), static_cast<int>(this->device().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.device");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->device(), output);
  }

  // string container = 2;
  if (this->container().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->container().data(), static_cast<int>(this->container().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.container");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->container(), output);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  // uint64 hash_code = 4;
  if (this->hash_code() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64(4, this->hash_code(), output);
  }

  // string maybe_type_name = 5;
  if (this->maybe_type_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->maybe_type_name().data(), static_cast<int>(this->maybe_type_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.maybe_type_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->maybe_type_name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.ResourceHandleProto)
}

::PROTOBUF_NAMESPACE_ID::uint8* ResourceHandleProto::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.ResourceHandleProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string device = 1;
  if (this->device().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->device().data(), static_cast<int>(this->device().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.device");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        1, this->device(), target);
  }

  // string container = 2;
  if (this->container().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->container().data(), static_cast<int>(this->container().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.container");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        2, this->container(), target);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // uint64 hash_code = 4;
  if (this->hash_code() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->hash_code(), target);
  }

  // string maybe_type_name = 5;
  if (this->maybe_type_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->maybe_type_name().data(), static_cast<int>(this->maybe_type_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "tensorflow.ResourceHandleProto.maybe_type_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        5, this->maybe_type_name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.ResourceHandleProto)
  return target;
}

size_t ResourceHandleProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.ResourceHandleProto)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string device = 1;
  if (this->device().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->device());
  }

  // string container = 2;
  if (this->container().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->container());
  }

  // string name = 3;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string maybe_type_name = 5;
  if (this->maybe_type_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->maybe_type_name());
  }

  // uint64 hash_code = 4;
  if (this->hash_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->hash_code());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResourceHandleProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.ResourceHandleProto)
  GOOGLE_DCHECK_NE(&from, this);
  const ResourceHandleProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResourceHandleProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.ResourceHandleProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.ResourceHandleProto)
    MergeFrom(*source);
  }
}

void ResourceHandleProto::MergeFrom(const ResourceHandleProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.ResourceHandleProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.device().size() > 0) {
    set_device(from.device());
  }
  if (from.container().size() > 0) {
    set_container(from.container());
  }
  if (from.name().size() > 0) {
    set_name(from.name());
  }
  if (from.maybe_type_name().size() > 0) {
    set_maybe_type_name(from.maybe_type_name());
  }
  if (from.hash_code() != 0) {
    set_hash_code(from.hash_code());
  }
}

void ResourceHandleProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.ResourceHandleProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResourceHandleProto::CopyFrom(const ResourceHandleProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.ResourceHandleProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResourceHandleProto::IsInitialized() const {
  return true;
}

void ResourceHandleProto::Swap(ResourceHandleProto* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    ResourceHandleProto* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == nullptr) {
      delete temp;
    }
  }
}
void ResourceHandleProto::UnsafeArenaSwap(ResourceHandleProto* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void ResourceHandleProto::InternalSwap(ResourceHandleProto* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  device_.Swap(&other->device_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  container_.Swap(&other->container_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  maybe_type_name_.Swap(&other->maybe_type_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(hash_code_, other->hash_code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResourceHandleProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::tensorflow::ResourceHandleProto* Arena::CreateMaybeMessage< ::tensorflow::ResourceHandleProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::ResourceHandleProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
