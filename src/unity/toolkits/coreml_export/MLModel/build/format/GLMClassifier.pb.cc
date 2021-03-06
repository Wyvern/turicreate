// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GLMClassifier.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GLMClassifier.pb.h"

#include <algorithm>

#include <protobuf/stubs/common.h>
#include <protobuf/stubs/port.h>
#include <protobuf/stubs/once.h>
#include <protobuf/io/coded_stream.h>
#include <protobuf/wire_format_lite_inl.h>
#include <protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {

void protobuf_ShutdownFile_GLMClassifier_2eproto() {
  GLMClassifier_default_instance_.Shutdown();
  GLMClassifier_DoubleArray_default_instance_.Shutdown();
}

void protobuf_InitDefaults_GLMClassifier_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::CoreML::Specification::protobuf_InitDefaults_DataStructures_2eproto();
  GLMClassifier_default_instance_.DefaultConstruct();
  GLMClassifier_DoubleArray_default_instance_.DefaultConstruct();
  GLMClassifier_default_instance_.get_mutable()->InitAsDefaultInstance();
  GLMClassifier_DoubleArray_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_GLMClassifier_2eproto_once_);
void protobuf_InitDefaults_GLMClassifier_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_GLMClassifier_2eproto_once_,
                 &protobuf_InitDefaults_GLMClassifier_2eproto_impl);
}
void protobuf_AddDesc_GLMClassifier_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_GLMClassifier_2eproto();
  ::CoreML::Specification::protobuf_AddDesc_DataStructures_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_GLMClassifier_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_GLMClassifier_2eproto_once_);
void protobuf_AddDesc_GLMClassifier_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_GLMClassifier_2eproto_once_,
                 &protobuf_AddDesc_GLMClassifier_2eproto_impl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_GLMClassifier_2eproto {
  StaticDescriptorInitializer_GLMClassifier_2eproto() {
    protobuf_AddDesc_GLMClassifier_2eproto();
  }
} static_descriptor_initializer_GLMClassifier_2eproto_;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

bool GLMClassifier_PostEvaluationTransform_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const GLMClassifier_PostEvaluationTransform GLMClassifier::Logit;
const GLMClassifier_PostEvaluationTransform GLMClassifier::Probit;
const GLMClassifier_PostEvaluationTransform GLMClassifier::PostEvaluationTransform_MIN;
const GLMClassifier_PostEvaluationTransform GLMClassifier::PostEvaluationTransform_MAX;
const int GLMClassifier::PostEvaluationTransform_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
bool GLMClassifier_ClassEncoding_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const GLMClassifier_ClassEncoding GLMClassifier::ReferenceClass;
const GLMClassifier_ClassEncoding GLMClassifier::OneVsRest;
const GLMClassifier_ClassEncoding GLMClassifier::ClassEncoding_MIN;
const GLMClassifier_ClassEncoding GLMClassifier::ClassEncoding_MAX;
const int GLMClassifier::ClassEncoding_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GLMClassifier_DoubleArray::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GLMClassifier_DoubleArray::GLMClassifier_DoubleArray()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_GLMClassifier_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.GLMClassifier.DoubleArray)
}

void GLMClassifier_DoubleArray::InitAsDefaultInstance() {
}

GLMClassifier_DoubleArray::GLMClassifier_DoubleArray(const GLMClassifier_DoubleArray& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.GLMClassifier.DoubleArray)
}

void GLMClassifier_DoubleArray::SharedCtor() {
  _cached_size_ = 0;
}

GLMClassifier_DoubleArray::~GLMClassifier_DoubleArray() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.GLMClassifier.DoubleArray)
  SharedDtor();
}

void GLMClassifier_DoubleArray::SharedDtor() {
}

void GLMClassifier_DoubleArray::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GLMClassifier_DoubleArray& GLMClassifier_DoubleArray::default_instance() {
  protobuf_InitDefaults_GLMClassifier_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<GLMClassifier_DoubleArray> GLMClassifier_DoubleArray_default_instance_;

GLMClassifier_DoubleArray* GLMClassifier_DoubleArray::New(::google::protobuf::Arena* arena) const {
  GLMClassifier_DoubleArray* n = new GLMClassifier_DoubleArray;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GLMClassifier_DoubleArray::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.GLMClassifier.DoubleArray)
  value_.Clear();
}

bool GLMClassifier_DoubleArray::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.GLMClassifier.DoubleArray)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated double value = 1;
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_value())));
        } else if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 10, input, this->mutable_value())));
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
  // @@protoc_insertion_point(parse_success:CoreML.Specification.GLMClassifier.DoubleArray)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.GLMClassifier.DoubleArray)
  return false;
#undef DO_
}

void GLMClassifier_DoubleArray::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.GLMClassifier.DoubleArray)
  // repeated double value = 1;
  if (this->value_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_value_cached_byte_size_);
  }
  for (int i = 0; i < this->value_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(
      this->value(i), output);
  }

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.GLMClassifier.DoubleArray)
}

size_t GLMClassifier_DoubleArray::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.GLMClassifier.DoubleArray)
  size_t total_size = 0;

  // repeated double value = 1;
  {
    size_t data_size = 0;
    unsigned int count = this->value_size();
    data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _value_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GLMClassifier_DoubleArray::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GLMClassifier_DoubleArray*>(&from));
}

void GLMClassifier_DoubleArray::MergeFrom(const GLMClassifier_DoubleArray& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.GLMClassifier.DoubleArray)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void GLMClassifier_DoubleArray::UnsafeMergeFrom(const GLMClassifier_DoubleArray& from) {
  GOOGLE_DCHECK(&from != this);
  value_.UnsafeMergeFrom(from.value_);
}

void GLMClassifier_DoubleArray::CopyFrom(const GLMClassifier_DoubleArray& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.GLMClassifier.DoubleArray)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool GLMClassifier_DoubleArray::IsInitialized() const {

  return true;
}

void GLMClassifier_DoubleArray::Swap(GLMClassifier_DoubleArray* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GLMClassifier_DoubleArray::InternalSwap(GLMClassifier_DoubleArray* other) {
  value_.UnsafeArenaSwap(&other->value_);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GLMClassifier_DoubleArray::GetTypeName() const {
  return "CoreML.Specification.GLMClassifier.DoubleArray";
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GLMClassifier::kWeightsFieldNumber;
const int GLMClassifier::kOffsetFieldNumber;
const int GLMClassifier::kPostEvaluationTransformFieldNumber;
const int GLMClassifier::kClassEncodingFieldNumber;
const int GLMClassifier::kStringClassLabelsFieldNumber;
const int GLMClassifier::kInt64ClassLabelsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GLMClassifier::GLMClassifier()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_GLMClassifier_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:CoreML.Specification.GLMClassifier)
}

void GLMClassifier::InitAsDefaultInstance() {
}

GLMClassifier::GLMClassifier(const GLMClassifier& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CoreML.Specification.GLMClassifier)
}

void GLMClassifier::SharedCtor() {
  ::memset(&postevaluationtransform_, 0, reinterpret_cast<char*>(&classencoding_) -
    reinterpret_cast<char*>(&postevaluationtransform_) + sizeof(classencoding_));
  clear_has_ClassLabels();
  _cached_size_ = 0;
}

GLMClassifier::~GLMClassifier() {
  // @@protoc_insertion_point(destructor:CoreML.Specification.GLMClassifier)
  SharedDtor();
}

void GLMClassifier::SharedDtor() {
  if (has_ClassLabels()) {
    clear_ClassLabels();
  }
}

void GLMClassifier::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GLMClassifier& GLMClassifier::default_instance() {
  protobuf_InitDefaults_GLMClassifier_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<GLMClassifier> GLMClassifier_default_instance_;

GLMClassifier* GLMClassifier::New(::google::protobuf::Arena* arena) const {
  GLMClassifier* n = new GLMClassifier;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GLMClassifier::clear_ClassLabels() {
// @@protoc_insertion_point(one_of_clear_start:CoreML.Specification.GLMClassifier)
  switch (ClassLabels_case()) {
    case kStringClassLabels: {
      delete ClassLabels_.stringclasslabels_;
      break;
    }
    case kInt64ClassLabels: {
      delete ClassLabels_.int64classlabels_;
      break;
    }
    case CLASSLABELS_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = CLASSLABELS_NOT_SET;
}


void GLMClassifier::Clear() {
// @@protoc_insertion_point(message_clear_start:CoreML.Specification.GLMClassifier)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(GLMClassifier, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<GLMClassifier*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(postevaluationtransform_, classencoding_);

#undef ZR_HELPER_
#undef ZR_

  weights_.Clear();
  offset_.Clear();
  clear_ClassLabels();
}

bool GLMClassifier::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CoreML.Specification.GLMClassifier)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .CoreML.Specification.GLMClassifier.DoubleArray weights = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_weights:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_weights()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_weights;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(18)) goto parse_offset;
        break;
      }

      // repeated double offset = 2;
      case 2: {
        if (tag == 18) {
         parse_offset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_offset())));
        } else if (tag == 17) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 18, input, this->mutable_offset())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_postEvaluationTransform;
        break;
      }

      // optional .CoreML.Specification.GLMClassifier.PostEvaluationTransform postEvaluationTransform = 3;
      case 3: {
        if (tag == 24) {
         parse_postEvaluationTransform:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_postevaluationtransform(static_cast< ::CoreML::Specification::GLMClassifier_PostEvaluationTransform >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_classEncoding;
        break;
      }

      // optional .CoreML.Specification.GLMClassifier.ClassEncoding classEncoding = 4;
      case 4: {
        if (tag == 32) {
         parse_classEncoding:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_classencoding(static_cast< ::CoreML::Specification::GLMClassifier_ClassEncoding >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(802)) goto parse_stringClassLabels;
        break;
      }

      // optional .CoreML.Specification.StringVector stringClassLabels = 100;
      case 100: {
        if (tag == 802) {
         parse_stringClassLabels:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_stringclasslabels()));
        } else {
          goto handle_unusual;
        }
        goto after_int64classlabels;
        break;
      }

      // optional .CoreML.Specification.Int64Vector int64ClassLabels = 101;
      case 101: {
        if (tag == 810) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_int64classlabels()));
        } else {
          goto handle_unusual;
        }
       after_int64classlabels:
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
  // @@protoc_insertion_point(parse_success:CoreML.Specification.GLMClassifier)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CoreML.Specification.GLMClassifier)
  return false;
#undef DO_
}

void GLMClassifier::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CoreML.Specification.GLMClassifier)
  // repeated .CoreML.Specification.GLMClassifier.DoubleArray weights = 1;
  for (unsigned int i = 0, n = this->weights_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->weights(i), output);
  }

  // repeated double offset = 2;
  if (this->offset_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_offset_cached_byte_size_);
  }
  for (int i = 0; i < this->offset_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(
      this->offset(i), output);
  }

  // optional .CoreML.Specification.GLMClassifier.PostEvaluationTransform postEvaluationTransform = 3;
  if (this->postevaluationtransform() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->postevaluationtransform(), output);
  }

  // optional .CoreML.Specification.GLMClassifier.ClassEncoding classEncoding = 4;
  if (this->classencoding() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->classencoding(), output);
  }

  // optional .CoreML.Specification.StringVector stringClassLabels = 100;
  if (has_stringclasslabels()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      100, *ClassLabels_.stringclasslabels_, output);
  }

  // optional .CoreML.Specification.Int64Vector int64ClassLabels = 101;
  if (has_int64classlabels()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      101, *ClassLabels_.int64classlabels_, output);
  }

  // @@protoc_insertion_point(serialize_end:CoreML.Specification.GLMClassifier)
}

size_t GLMClassifier::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CoreML.Specification.GLMClassifier)
  size_t total_size = 0;

  // optional .CoreML.Specification.GLMClassifier.PostEvaluationTransform postEvaluationTransform = 3;
  if (this->postevaluationtransform() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->postevaluationtransform());
  }

  // optional .CoreML.Specification.GLMClassifier.ClassEncoding classEncoding = 4;
  if (this->classencoding() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->classencoding());
  }

  // repeated .CoreML.Specification.GLMClassifier.DoubleArray weights = 1;
  {
    unsigned int count = this->weights_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->weights(i));
    }
  }

  // repeated double offset = 2;
  {
    size_t data_size = 0;
    unsigned int count = this->offset_size();
    data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _offset_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  switch (ClassLabels_case()) {
    // optional .CoreML.Specification.StringVector stringClassLabels = 100;
    case kStringClassLabels: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *ClassLabels_.stringclasslabels_);
      break;
    }
    // optional .CoreML.Specification.Int64Vector int64ClassLabels = 101;
    case kInt64ClassLabels: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *ClassLabels_.int64classlabels_);
      break;
    }
    case CLASSLABELS_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GLMClassifier::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GLMClassifier*>(&from));
}

void GLMClassifier::MergeFrom(const GLMClassifier& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CoreML.Specification.GLMClassifier)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void GLMClassifier::UnsafeMergeFrom(const GLMClassifier& from) {
  GOOGLE_DCHECK(&from != this);
  weights_.MergeFrom(from.weights_);
  offset_.UnsafeMergeFrom(from.offset_);
  switch (from.ClassLabels_case()) {
    case kStringClassLabels: {
      mutable_stringclasslabels()->::CoreML::Specification::StringVector::MergeFrom(from.stringclasslabels());
      break;
    }
    case kInt64ClassLabels: {
      mutable_int64classlabels()->::CoreML::Specification::Int64Vector::MergeFrom(from.int64classlabels());
      break;
    }
    case CLASSLABELS_NOT_SET: {
      break;
    }
  }
  if (from.postevaluationtransform() != 0) {
    set_postevaluationtransform(from.postevaluationtransform());
  }
  if (from.classencoding() != 0) {
    set_classencoding(from.classencoding());
  }
}

void GLMClassifier::CopyFrom(const GLMClassifier& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CoreML.Specification.GLMClassifier)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool GLMClassifier::IsInitialized() const {

  return true;
}

void GLMClassifier::Swap(GLMClassifier* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GLMClassifier::InternalSwap(GLMClassifier* other) {
  weights_.UnsafeArenaSwap(&other->weights_);
  offset_.UnsafeArenaSwap(&other->offset_);
  std::swap(postevaluationtransform_, other->postevaluationtransform_);
  std::swap(classencoding_, other->classencoding_);
  std::swap(ClassLabels_, other->ClassLabels_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string GLMClassifier::GetTypeName() const {
  return "CoreML.Specification.GLMClassifier";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GLMClassifier_DoubleArray

// repeated double value = 1;
int GLMClassifier_DoubleArray::value_size() const {
  return value_.size();
}
void GLMClassifier_DoubleArray::clear_value() {
  value_.Clear();
}
double GLMClassifier_DoubleArray::value(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.DoubleArray.value)
  return value_.Get(index);
}
void GLMClassifier_DoubleArray::set_value(int index, double value) {
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.DoubleArray.value)
}
void GLMClassifier_DoubleArray::add_value(double value) {
  value_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMClassifier.DoubleArray.value)
}
const ::google::protobuf::RepeatedField< double >&
GLMClassifier_DoubleArray::value() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMClassifier.DoubleArray.value)
  return value_;
}
::google::protobuf::RepeatedField< double >*
GLMClassifier_DoubleArray::mutable_value() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMClassifier.DoubleArray.value)
  return &value_;
}

inline const GLMClassifier_DoubleArray* GLMClassifier_DoubleArray::internal_default_instance() {
  return &GLMClassifier_DoubleArray_default_instance_.get();
}
// -------------------------------------------------------------------

// GLMClassifier

// repeated .CoreML.Specification.GLMClassifier.DoubleArray weights = 1;
int GLMClassifier::weights_size() const {
  return weights_.size();
}
void GLMClassifier::clear_weights() {
  weights_.Clear();
}
const ::CoreML::Specification::GLMClassifier_DoubleArray& GLMClassifier::weights(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.weights)
  return weights_.Get(index);
}
::CoreML::Specification::GLMClassifier_DoubleArray* GLMClassifier::mutable_weights(int index) {
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.GLMClassifier.weights)
  return weights_.Mutable(index);
}
::CoreML::Specification::GLMClassifier_DoubleArray* GLMClassifier::add_weights() {
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMClassifier.weights)
  return weights_.Add();
}
::google::protobuf::RepeatedPtrField< ::CoreML::Specification::GLMClassifier_DoubleArray >*
GLMClassifier::mutable_weights() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMClassifier.weights)
  return &weights_;
}
const ::google::protobuf::RepeatedPtrField< ::CoreML::Specification::GLMClassifier_DoubleArray >&
GLMClassifier::weights() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMClassifier.weights)
  return weights_;
}

// repeated double offset = 2;
int GLMClassifier::offset_size() const {
  return offset_.size();
}
void GLMClassifier::clear_offset() {
  offset_.Clear();
}
double GLMClassifier::offset(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.offset)
  return offset_.Get(index);
}
void GLMClassifier::set_offset(int index, double value) {
  offset_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.offset)
}
void GLMClassifier::add_offset(double value) {
  offset_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.GLMClassifier.offset)
}
const ::google::protobuf::RepeatedField< double >&
GLMClassifier::offset() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.GLMClassifier.offset)
  return offset_;
}
::google::protobuf::RepeatedField< double >*
GLMClassifier::mutable_offset() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.GLMClassifier.offset)
  return &offset_;
}

// optional .CoreML.Specification.GLMClassifier.PostEvaluationTransform postEvaluationTransform = 3;
void GLMClassifier::clear_postevaluationtransform() {
  postevaluationtransform_ = 0;
}
::CoreML::Specification::GLMClassifier_PostEvaluationTransform GLMClassifier::postevaluationtransform() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.postEvaluationTransform)
  return static_cast< ::CoreML::Specification::GLMClassifier_PostEvaluationTransform >(postevaluationtransform_);
}
void GLMClassifier::set_postevaluationtransform(::CoreML::Specification::GLMClassifier_PostEvaluationTransform value) {
  
  postevaluationtransform_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.postEvaluationTransform)
}

// optional .CoreML.Specification.GLMClassifier.ClassEncoding classEncoding = 4;
void GLMClassifier::clear_classencoding() {
  classencoding_ = 0;
}
::CoreML::Specification::GLMClassifier_ClassEncoding GLMClassifier::classencoding() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.classEncoding)
  return static_cast< ::CoreML::Specification::GLMClassifier_ClassEncoding >(classencoding_);
}
void GLMClassifier::set_classencoding(::CoreML::Specification::GLMClassifier_ClassEncoding value) {
  
  classencoding_ = value;
  // @@protoc_insertion_point(field_set:CoreML.Specification.GLMClassifier.classEncoding)
}

// optional .CoreML.Specification.StringVector stringClassLabels = 100;
bool GLMClassifier::has_stringclasslabels() const {
  return ClassLabels_case() == kStringClassLabels;
}
void GLMClassifier::set_has_stringclasslabels() {
  _oneof_case_[0] = kStringClassLabels;
}
void GLMClassifier::clear_stringclasslabels() {
  if (has_stringclasslabels()) {
    delete ClassLabels_.stringclasslabels_;
    clear_has_ClassLabels();
  }
}
 const ::CoreML::Specification::StringVector& GLMClassifier::stringclasslabels() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.stringClassLabels)
  return has_stringclasslabels()
      ? *ClassLabels_.stringclasslabels_
      : ::CoreML::Specification::StringVector::default_instance();
}
::CoreML::Specification::StringVector* GLMClassifier::mutable_stringclasslabels() {
  if (!has_stringclasslabels()) {
    clear_ClassLabels();
    set_has_stringclasslabels();
    ClassLabels_.stringclasslabels_ = new ::CoreML::Specification::StringVector;
  }
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.GLMClassifier.stringClassLabels)
  return ClassLabels_.stringclasslabels_;
}
::CoreML::Specification::StringVector* GLMClassifier::release_stringclasslabels() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.GLMClassifier.stringClassLabels)
  if (has_stringclasslabels()) {
    clear_has_ClassLabels();
    ::CoreML::Specification::StringVector* temp = ClassLabels_.stringclasslabels_;
    ClassLabels_.stringclasslabels_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void GLMClassifier::set_allocated_stringclasslabels(::CoreML::Specification::StringVector* stringclasslabels) {
  clear_ClassLabels();
  if (stringclasslabels) {
    set_has_stringclasslabels();
    ClassLabels_.stringclasslabels_ = stringclasslabels;
  }
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.GLMClassifier.stringClassLabels)
}

// optional .CoreML.Specification.Int64Vector int64ClassLabels = 101;
bool GLMClassifier::has_int64classlabels() const {
  return ClassLabels_case() == kInt64ClassLabels;
}
void GLMClassifier::set_has_int64classlabels() {
  _oneof_case_[0] = kInt64ClassLabels;
}
void GLMClassifier::clear_int64classlabels() {
  if (has_int64classlabels()) {
    delete ClassLabels_.int64classlabels_;
    clear_has_ClassLabels();
  }
}
 const ::CoreML::Specification::Int64Vector& GLMClassifier::int64classlabels() const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.GLMClassifier.int64ClassLabels)
  return has_int64classlabels()
      ? *ClassLabels_.int64classlabels_
      : ::CoreML::Specification::Int64Vector::default_instance();
}
::CoreML::Specification::Int64Vector* GLMClassifier::mutable_int64classlabels() {
  if (!has_int64classlabels()) {
    clear_ClassLabels();
    set_has_int64classlabels();
    ClassLabels_.int64classlabels_ = new ::CoreML::Specification::Int64Vector;
  }
  // @@protoc_insertion_point(field_mutable:CoreML.Specification.GLMClassifier.int64ClassLabels)
  return ClassLabels_.int64classlabels_;
}
::CoreML::Specification::Int64Vector* GLMClassifier::release_int64classlabels() {
  // @@protoc_insertion_point(field_release:CoreML.Specification.GLMClassifier.int64ClassLabels)
  if (has_int64classlabels()) {
    clear_has_ClassLabels();
    ::CoreML::Specification::Int64Vector* temp = ClassLabels_.int64classlabels_;
    ClassLabels_.int64classlabels_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void GLMClassifier::set_allocated_int64classlabels(::CoreML::Specification::Int64Vector* int64classlabels) {
  clear_ClassLabels();
  if (int64classlabels) {
    set_has_int64classlabels();
    ClassLabels_.int64classlabels_ = int64classlabels;
  }
  // @@protoc_insertion_point(field_set_allocated:CoreML.Specification.GLMClassifier.int64ClassLabels)
}

bool GLMClassifier::has_ClassLabels() const {
  return ClassLabels_case() != CLASSLABELS_NOT_SET;
}
void GLMClassifier::clear_has_ClassLabels() {
  _oneof_case_[0] = CLASSLABELS_NOT_SET;
}
GLMClassifier::ClassLabelsCase GLMClassifier::ClassLabels_case() const {
  return GLMClassifier::ClassLabelsCase(_oneof_case_[0]);
}
inline const GLMClassifier* GLMClassifier::internal_default_instance() {
  return &GLMClassifier_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)
