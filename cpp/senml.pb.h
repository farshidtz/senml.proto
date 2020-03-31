// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: senml.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_senml_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_senml_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_senml_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_senml_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_senml_2eproto;
namespace senml_proto {
class Record;
class RecordDefaultTypeInternal;
extern RecordDefaultTypeInternal _Record_default_instance_;
}  // namespace senml_proto
PROTOBUF_NAMESPACE_OPEN
template<> ::senml_proto::Record* Arena::CreateMaybeMessage<::senml_proto::Record>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace senml_proto {

enum Record_ValueType : int {
  Record_ValueType_FLOAT = 0,
  Record_ValueType_STRING = 1,
  Record_ValueType_BINARY = 2,
  Record_ValueType_BOOL = 3,
  Record_ValueType_SUM = 4,
  Record_ValueType_Record_ValueType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  Record_ValueType_Record_ValueType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool Record_ValueType_IsValid(int value);
constexpr Record_ValueType Record_ValueType_ValueType_MIN = Record_ValueType_FLOAT;
constexpr Record_ValueType Record_ValueType_ValueType_MAX = Record_ValueType_SUM;
constexpr int Record_ValueType_ValueType_ARRAYSIZE = Record_ValueType_ValueType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Record_ValueType_descriptor();
template<typename T>
inline const std::string& Record_ValueType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Record_ValueType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Record_ValueType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Record_ValueType_descriptor(), enum_t_value);
}
inline bool Record_ValueType_Parse(
    const std::string& name, Record_ValueType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Record_ValueType>(
    Record_ValueType_descriptor(), name, value);
}
// ===================================================================

class Record :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:senml_proto.Record) */ {
 public:
  Record();
  virtual ~Record();

  Record(const Record& from);
  Record(Record&& from) noexcept
    : Record() {
    *this = ::std::move(from);
  }

  inline Record& operator=(const Record& from) {
    CopyFrom(from);
    return *this;
  }
  inline Record& operator=(Record&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Record& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Record* internal_default_instance() {
    return reinterpret_cast<const Record*>(
               &_Record_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Record& a, Record& b) {
    a.Swap(&b);
  }
  inline void Swap(Record* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Record* New() const final {
    return CreateMaybeMessage<Record>(nullptr);
  }

  Record* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Record>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Record& from);
  void MergeFrom(const Record& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Record* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "senml_proto.Record";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_senml_2eproto);
    return ::descriptor_table_senml_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef Record_ValueType ValueType;
  static constexpr ValueType FLOAT =
    Record_ValueType_FLOAT;
  static constexpr ValueType STRING =
    Record_ValueType_STRING;
  static constexpr ValueType BINARY =
    Record_ValueType_BINARY;
  static constexpr ValueType BOOL =
    Record_ValueType_BOOL;
  static constexpr ValueType SUM =
    Record_ValueType_SUM;
  static inline bool ValueType_IsValid(int value) {
    return Record_ValueType_IsValid(value);
  }
  static constexpr ValueType ValueType_MIN =
    Record_ValueType_ValueType_MIN;
  static constexpr ValueType ValueType_MAX =
    Record_ValueType_ValueType_MAX;
  static constexpr int ValueType_ARRAYSIZE =
    Record_ValueType_ValueType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ValueType_descriptor() {
    return Record_ValueType_descriptor();
  }
  template<typename T>
  static inline const std::string& ValueType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ValueType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ValueType_Name.");
    return Record_ValueType_Name(enum_t_value);
  }
  static inline bool ValueType_Parse(const std::string& name,
      ValueType* value) {
    return Record_ValueType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBaseNameFieldNumber = 1,
    kBaseUnitFieldNumber = 3,
    kNameFieldNumber = 7,
    kUnitFieldNumber = 8,
    kStringValueFieldNumber = 11,
    kDataValueFieldNumber = 12,
    kBaseTimeFieldNumber = 2,
    kBaseValueFieldNumber = 5,
    kBaseSumFieldNumber = 6,
    kBaseVersionFieldNumber = 4,
    kBoolValueFieldNumber = 13,
    kTimeFieldNumber = 9,
    kValueFieldNumber = 10,
    kSumFieldNumber = 14,
    kUpdateTimeFieldNumber = 16,
    kTypeFieldNumber = 15,
  };
  // string baseName = 1;
  void clear_basename();
  const std::string& basename() const;
  void set_basename(const std::string& value);
  void set_basename(std::string&& value);
  void set_basename(const char* value);
  void set_basename(const char* value, size_t size);
  std::string* mutable_basename();
  std::string* release_basename();
  void set_allocated_basename(std::string* basename);
  private:
  const std::string& _internal_basename() const;
  void _internal_set_basename(const std::string& value);
  std::string* _internal_mutable_basename();
  public:

  // string baseUnit = 3;
  void clear_baseunit();
  const std::string& baseunit() const;
  void set_baseunit(const std::string& value);
  void set_baseunit(std::string&& value);
  void set_baseunit(const char* value);
  void set_baseunit(const char* value, size_t size);
  std::string* mutable_baseunit();
  std::string* release_baseunit();
  void set_allocated_baseunit(std::string* baseunit);
  private:
  const std::string& _internal_baseunit() const;
  void _internal_set_baseunit(const std::string& value);
  std::string* _internal_mutable_baseunit();
  public:

  // string name = 7;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string unit = 8;
  void clear_unit();
  const std::string& unit() const;
  void set_unit(const std::string& value);
  void set_unit(std::string&& value);
  void set_unit(const char* value);
  void set_unit(const char* value, size_t size);
  std::string* mutable_unit();
  std::string* release_unit();
  void set_allocated_unit(std::string* unit);
  private:
  const std::string& _internal_unit() const;
  void _internal_set_unit(const std::string& value);
  std::string* _internal_mutable_unit();
  public:

  // string stringValue = 11;
  void clear_stringvalue();
  const std::string& stringvalue() const;
  void set_stringvalue(const std::string& value);
  void set_stringvalue(std::string&& value);
  void set_stringvalue(const char* value);
  void set_stringvalue(const char* value, size_t size);
  std::string* mutable_stringvalue();
  std::string* release_stringvalue();
  void set_allocated_stringvalue(std::string* stringvalue);
  private:
  const std::string& _internal_stringvalue() const;
  void _internal_set_stringvalue(const std::string& value);
  std::string* _internal_mutable_stringvalue();
  public:

  // string dataValue = 12;
  void clear_datavalue();
  const std::string& datavalue() const;
  void set_datavalue(const std::string& value);
  void set_datavalue(std::string&& value);
  void set_datavalue(const char* value);
  void set_datavalue(const char* value, size_t size);
  std::string* mutable_datavalue();
  std::string* release_datavalue();
  void set_allocated_datavalue(std::string* datavalue);
  private:
  const std::string& _internal_datavalue() const;
  void _internal_set_datavalue(const std::string& value);
  std::string* _internal_mutable_datavalue();
  public:

  // double baseTime = 2;
  void clear_basetime();
  double basetime() const;
  void set_basetime(double value);
  private:
  double _internal_basetime() const;
  void _internal_set_basetime(double value);
  public:

  // double baseValue = 5;
  void clear_basevalue();
  double basevalue() const;
  void set_basevalue(double value);
  private:
  double _internal_basevalue() const;
  void _internal_set_basevalue(double value);
  public:

  // double baseSum = 6;
  void clear_basesum();
  double basesum() const;
  void set_basesum(double value);
  private:
  double _internal_basesum() const;
  void _internal_set_basesum(double value);
  public:

  // int32 baseVersion = 4;
  void clear_baseversion();
  ::PROTOBUF_NAMESPACE_ID::int32 baseversion() const;
  void set_baseversion(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_baseversion() const;
  void _internal_set_baseversion(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // bool boolValue = 13;
  void clear_boolvalue();
  bool boolvalue() const;
  void set_boolvalue(bool value);
  private:
  bool _internal_boolvalue() const;
  void _internal_set_boolvalue(bool value);
  public:

  // double time = 9;
  void clear_time();
  double time() const;
  void set_time(double value);
  private:
  double _internal_time() const;
  void _internal_set_time(double value);
  public:

  // double value = 10;
  void clear_value();
  double value() const;
  void set_value(double value);
  private:
  double _internal_value() const;
  void _internal_set_value(double value);
  public:

  // double sum = 14;
  void clear_sum();
  double sum() const;
  void set_sum(double value);
  private:
  double _internal_sum() const;
  void _internal_set_sum(double value);
  public:

  // double updateTime = 16;
  void clear_updatetime();
  double updatetime() const;
  void set_updatetime(double value);
  private:
  double _internal_updatetime() const;
  void _internal_set_updatetime(double value);
  public:

  // .senml_proto.Record.ValueType type = 15;
  void clear_type();
  ::senml_proto::Record_ValueType type() const;
  void set_type(::senml_proto::Record_ValueType value);
  private:
  ::senml_proto::Record_ValueType _internal_type() const;
  void _internal_set_type(::senml_proto::Record_ValueType value);
  public:

  // @@protoc_insertion_point(class_scope:senml_proto.Record)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr basename_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr baseunit_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr unit_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr stringvalue_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr datavalue_;
  double basetime_;
  double basevalue_;
  double basesum_;
  ::PROTOBUF_NAMESPACE_ID::int32 baseversion_;
  bool boolvalue_;
  double time_;
  double value_;
  double sum_;
  double updatetime_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_senml_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Record

// string baseName = 1;
inline void Record::clear_basename() {
  basename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Record::basename() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.baseName)
  return _internal_basename();
}
inline void Record::set_basename(const std::string& value) {
  _internal_set_basename(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.baseName)
}
inline std::string* Record::mutable_basename() {
  // @@protoc_insertion_point(field_mutable:senml_proto.Record.baseName)
  return _internal_mutable_basename();
}
inline const std::string& Record::_internal_basename() const {
  return basename_.GetNoArena();
}
inline void Record::_internal_set_basename(const std::string& value) {
  
  basename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Record::set_basename(std::string&& value) {
  
  basename_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:senml_proto.Record.baseName)
}
inline void Record::set_basename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  basename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:senml_proto.Record.baseName)
}
inline void Record::set_basename(const char* value, size_t size) {
  
  basename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:senml_proto.Record.baseName)
}
inline std::string* Record::_internal_mutable_basename() {
  
  return basename_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Record::release_basename() {
  // @@protoc_insertion_point(field_release:senml_proto.Record.baseName)
  
  return basename_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Record::set_allocated_basename(std::string* basename) {
  if (basename != nullptr) {
    
  } else {
    
  }
  basename_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), basename);
  // @@protoc_insertion_point(field_set_allocated:senml_proto.Record.baseName)
}

// double baseTime = 2;
inline void Record::clear_basetime() {
  basetime_ = 0;
}
inline double Record::_internal_basetime() const {
  return basetime_;
}
inline double Record::basetime() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.baseTime)
  return _internal_basetime();
}
inline void Record::_internal_set_basetime(double value) {
  
  basetime_ = value;
}
inline void Record::set_basetime(double value) {
  _internal_set_basetime(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.baseTime)
}

// string baseUnit = 3;
inline void Record::clear_baseunit() {
  baseunit_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Record::baseunit() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.baseUnit)
  return _internal_baseunit();
}
inline void Record::set_baseunit(const std::string& value) {
  _internal_set_baseunit(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.baseUnit)
}
inline std::string* Record::mutable_baseunit() {
  // @@protoc_insertion_point(field_mutable:senml_proto.Record.baseUnit)
  return _internal_mutable_baseunit();
}
inline const std::string& Record::_internal_baseunit() const {
  return baseunit_.GetNoArena();
}
inline void Record::_internal_set_baseunit(const std::string& value) {
  
  baseunit_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Record::set_baseunit(std::string&& value) {
  
  baseunit_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:senml_proto.Record.baseUnit)
}
inline void Record::set_baseunit(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  baseunit_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:senml_proto.Record.baseUnit)
}
inline void Record::set_baseunit(const char* value, size_t size) {
  
  baseunit_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:senml_proto.Record.baseUnit)
}
inline std::string* Record::_internal_mutable_baseunit() {
  
  return baseunit_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Record::release_baseunit() {
  // @@protoc_insertion_point(field_release:senml_proto.Record.baseUnit)
  
  return baseunit_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Record::set_allocated_baseunit(std::string* baseunit) {
  if (baseunit != nullptr) {
    
  } else {
    
  }
  baseunit_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), baseunit);
  // @@protoc_insertion_point(field_set_allocated:senml_proto.Record.baseUnit)
}

// int32 baseVersion = 4;
inline void Record::clear_baseversion() {
  baseversion_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Record::_internal_baseversion() const {
  return baseversion_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Record::baseversion() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.baseVersion)
  return _internal_baseversion();
}
inline void Record::_internal_set_baseversion(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  baseversion_ = value;
}
inline void Record::set_baseversion(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_baseversion(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.baseVersion)
}

// double baseValue = 5;
inline void Record::clear_basevalue() {
  basevalue_ = 0;
}
inline double Record::_internal_basevalue() const {
  return basevalue_;
}
inline double Record::basevalue() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.baseValue)
  return _internal_basevalue();
}
inline void Record::_internal_set_basevalue(double value) {
  
  basevalue_ = value;
}
inline void Record::set_basevalue(double value) {
  _internal_set_basevalue(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.baseValue)
}

// double baseSum = 6;
inline void Record::clear_basesum() {
  basesum_ = 0;
}
inline double Record::_internal_basesum() const {
  return basesum_;
}
inline double Record::basesum() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.baseSum)
  return _internal_basesum();
}
inline void Record::_internal_set_basesum(double value) {
  
  basesum_ = value;
}
inline void Record::set_basesum(double value) {
  _internal_set_basesum(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.baseSum)
}

// string name = 7;
inline void Record::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Record::name() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.name)
  return _internal_name();
}
inline void Record::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.name)
}
inline std::string* Record::mutable_name() {
  // @@protoc_insertion_point(field_mutable:senml_proto.Record.name)
  return _internal_mutable_name();
}
inline const std::string& Record::_internal_name() const {
  return name_.GetNoArena();
}
inline void Record::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Record::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:senml_proto.Record.name)
}
inline void Record::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:senml_proto.Record.name)
}
inline void Record::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:senml_proto.Record.name)
}
inline std::string* Record::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Record::release_name() {
  // @@protoc_insertion_point(field_release:senml_proto.Record.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Record::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:senml_proto.Record.name)
}

// string unit = 8;
inline void Record::clear_unit() {
  unit_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Record::unit() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.unit)
  return _internal_unit();
}
inline void Record::set_unit(const std::string& value) {
  _internal_set_unit(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.unit)
}
inline std::string* Record::mutable_unit() {
  // @@protoc_insertion_point(field_mutable:senml_proto.Record.unit)
  return _internal_mutable_unit();
}
inline const std::string& Record::_internal_unit() const {
  return unit_.GetNoArena();
}
inline void Record::_internal_set_unit(const std::string& value) {
  
  unit_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Record::set_unit(std::string&& value) {
  
  unit_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:senml_proto.Record.unit)
}
inline void Record::set_unit(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  unit_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:senml_proto.Record.unit)
}
inline void Record::set_unit(const char* value, size_t size) {
  
  unit_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:senml_proto.Record.unit)
}
inline std::string* Record::_internal_mutable_unit() {
  
  return unit_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Record::release_unit() {
  // @@protoc_insertion_point(field_release:senml_proto.Record.unit)
  
  return unit_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Record::set_allocated_unit(std::string* unit) {
  if (unit != nullptr) {
    
  } else {
    
  }
  unit_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), unit);
  // @@protoc_insertion_point(field_set_allocated:senml_proto.Record.unit)
}

// double time = 9;
inline void Record::clear_time() {
  time_ = 0;
}
inline double Record::_internal_time() const {
  return time_;
}
inline double Record::time() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.time)
  return _internal_time();
}
inline void Record::_internal_set_time(double value) {
  
  time_ = value;
}
inline void Record::set_time(double value) {
  _internal_set_time(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.time)
}

// double updateTime = 16;
inline void Record::clear_updatetime() {
  updatetime_ = 0;
}
inline double Record::_internal_updatetime() const {
  return updatetime_;
}
inline double Record::updatetime() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.updateTime)
  return _internal_updatetime();
}
inline void Record::_internal_set_updatetime(double value) {
  
  updatetime_ = value;
}
inline void Record::set_updatetime(double value) {
  _internal_set_updatetime(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.updateTime)
}

// double value = 10;
inline void Record::clear_value() {
  value_ = 0;
}
inline double Record::_internal_value() const {
  return value_;
}
inline double Record::value() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.value)
  return _internal_value();
}
inline void Record::_internal_set_value(double value) {
  
  value_ = value;
}
inline void Record::set_value(double value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.value)
}

// string stringValue = 11;
inline void Record::clear_stringvalue() {
  stringvalue_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Record::stringvalue() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.stringValue)
  return _internal_stringvalue();
}
inline void Record::set_stringvalue(const std::string& value) {
  _internal_set_stringvalue(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.stringValue)
}
inline std::string* Record::mutable_stringvalue() {
  // @@protoc_insertion_point(field_mutable:senml_proto.Record.stringValue)
  return _internal_mutable_stringvalue();
}
inline const std::string& Record::_internal_stringvalue() const {
  return stringvalue_.GetNoArena();
}
inline void Record::_internal_set_stringvalue(const std::string& value) {
  
  stringvalue_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Record::set_stringvalue(std::string&& value) {
  
  stringvalue_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:senml_proto.Record.stringValue)
}
inline void Record::set_stringvalue(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  stringvalue_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:senml_proto.Record.stringValue)
}
inline void Record::set_stringvalue(const char* value, size_t size) {
  
  stringvalue_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:senml_proto.Record.stringValue)
}
inline std::string* Record::_internal_mutable_stringvalue() {
  
  return stringvalue_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Record::release_stringvalue() {
  // @@protoc_insertion_point(field_release:senml_proto.Record.stringValue)
  
  return stringvalue_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Record::set_allocated_stringvalue(std::string* stringvalue) {
  if (stringvalue != nullptr) {
    
  } else {
    
  }
  stringvalue_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), stringvalue);
  // @@protoc_insertion_point(field_set_allocated:senml_proto.Record.stringValue)
}

// string dataValue = 12;
inline void Record::clear_datavalue() {
  datavalue_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Record::datavalue() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.dataValue)
  return _internal_datavalue();
}
inline void Record::set_datavalue(const std::string& value) {
  _internal_set_datavalue(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.dataValue)
}
inline std::string* Record::mutable_datavalue() {
  // @@protoc_insertion_point(field_mutable:senml_proto.Record.dataValue)
  return _internal_mutable_datavalue();
}
inline const std::string& Record::_internal_datavalue() const {
  return datavalue_.GetNoArena();
}
inline void Record::_internal_set_datavalue(const std::string& value) {
  
  datavalue_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Record::set_datavalue(std::string&& value) {
  
  datavalue_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:senml_proto.Record.dataValue)
}
inline void Record::set_datavalue(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  datavalue_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:senml_proto.Record.dataValue)
}
inline void Record::set_datavalue(const char* value, size_t size) {
  
  datavalue_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:senml_proto.Record.dataValue)
}
inline std::string* Record::_internal_mutable_datavalue() {
  
  return datavalue_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Record::release_datavalue() {
  // @@protoc_insertion_point(field_release:senml_proto.Record.dataValue)
  
  return datavalue_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Record::set_allocated_datavalue(std::string* datavalue) {
  if (datavalue != nullptr) {
    
  } else {
    
  }
  datavalue_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), datavalue);
  // @@protoc_insertion_point(field_set_allocated:senml_proto.Record.dataValue)
}

// bool boolValue = 13;
inline void Record::clear_boolvalue() {
  boolvalue_ = false;
}
inline bool Record::_internal_boolvalue() const {
  return boolvalue_;
}
inline bool Record::boolvalue() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.boolValue)
  return _internal_boolvalue();
}
inline void Record::_internal_set_boolvalue(bool value) {
  
  boolvalue_ = value;
}
inline void Record::set_boolvalue(bool value) {
  _internal_set_boolvalue(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.boolValue)
}

// double sum = 14;
inline void Record::clear_sum() {
  sum_ = 0;
}
inline double Record::_internal_sum() const {
  return sum_;
}
inline double Record::sum() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.sum)
  return _internal_sum();
}
inline void Record::_internal_set_sum(double value) {
  
  sum_ = value;
}
inline void Record::set_sum(double value) {
  _internal_set_sum(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.sum)
}

// .senml_proto.Record.ValueType type = 15;
inline void Record::clear_type() {
  type_ = 0;
}
inline ::senml_proto::Record_ValueType Record::_internal_type() const {
  return static_cast< ::senml_proto::Record_ValueType >(type_);
}
inline ::senml_proto::Record_ValueType Record::type() const {
  // @@protoc_insertion_point(field_get:senml_proto.Record.type)
  return _internal_type();
}
inline void Record::_internal_set_type(::senml_proto::Record_ValueType value) {
  
  type_ = value;
}
inline void Record::set_type(::senml_proto::Record_ValueType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:senml_proto.Record.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace senml_proto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::senml_proto::Record_ValueType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::senml_proto::Record_ValueType>() {
  return ::senml_proto::Record_ValueType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_senml_2eproto
