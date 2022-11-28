// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from test.djinni

#include "NativeTestHelpers.hpp"  // my header
#include "Future_wasm.hpp"
#include "NativeAssortedPrimitives.hpp"
#include "NativeAsyncInterface.hpp"
#include "NativeClientInterface.hpp"
#include "NativeColor.hpp"
#include "NativeMapListRecord.hpp"
#include "NativeNestedCollection.hpp"
#include "NativePrimitiveList.hpp"
#include "NativeSetRecord.hpp"
#include "NativeUserToken.hpp"

namespace djinni_generated {

em::val NativeTestHelpers::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
    });
    return methods;
}

em::val NativeTestHelpers::get_set_record() {
    try {
        auto r = ::testsuite::TestHelpers::get_set_record();
        return ::djinni_generated::NativeSetRecord::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativeSetRecord>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_set_record(const em::val& w_rec) {
    try {
        auto r = ::testsuite::TestHelpers::check_set_record(::djinni_generated::NativeSetRecord::toCpp(w_rec));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_primitive_list() {
    try {
        auto r = ::testsuite::TestHelpers::get_primitive_list();
        return ::djinni_generated::NativePrimitiveList::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativePrimitiveList>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_primitive_list(const em::val& w_pl) {
    try {
        auto r = ::testsuite::TestHelpers::check_primitive_list(::djinni_generated::NativePrimitiveList::toCpp(w_pl));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_nested_collection() {
    try {
        auto r = ::testsuite::TestHelpers::get_nested_collection();
        return ::djinni_generated::NativeNestedCollection::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativeNestedCollection>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_nested_collection(const em::val& w_nc) {
    try {
        auto r = ::testsuite::TestHelpers::check_nested_collection(::djinni_generated::NativeNestedCollection::toCpp(w_nc));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_map() {
    try {
        auto r = ::testsuite::TestHelpers::get_map();
        return ::djinni::Map<::djinni::String, ::djinni::I64>::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Map<::djinni::String, ::djinni::I64>>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_map(const em::val& w_m) {
    try {
        auto r = ::testsuite::TestHelpers::check_map(::djinni::Map<::djinni::String, ::djinni::I64>::toCpp(w_m));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_empty_map() {
    try {
        auto r = ::testsuite::TestHelpers::get_empty_map();
        return ::djinni::Map<::djinni::String, ::djinni::I64>::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Map<::djinni::String, ::djinni::I64>>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_empty_map(const em::val& w_m) {
    try {
        auto r = ::testsuite::TestHelpers::check_empty_map(::djinni::Map<::djinni::String, ::djinni::I64>::toCpp(w_m));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_map_list_record() {
    try {
        auto r = ::testsuite::TestHelpers::get_map_list_record();
        return ::djinni_generated::NativeMapListRecord::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativeMapListRecord>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_map_list_record(const em::val& w_m) {
    try {
        auto r = ::testsuite::TestHelpers::check_map_list_record(::djinni_generated::NativeMapListRecord::toCpp(w_m));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
void NativeTestHelpers::check_client_interface_ascii(const em::val& w_i) {
    try {
        ::testsuite::TestHelpers::check_client_interface_ascii(::djinni_generated::NativeClientInterface::toCpp(w_i));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
void NativeTestHelpers::check_client_interface_nonascii(const em::val& w_i) {
    try {
        ::testsuite::TestHelpers::check_client_interface_nonascii(::djinni_generated::NativeClientInterface::toCpp(w_i));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
void NativeTestHelpers::check_client_interface_args(const em::val& w_i) {
    try {
        ::testsuite::TestHelpers::check_client_interface_args(::djinni_generated::NativeClientInterface::toCpp(w_i));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
void NativeTestHelpers::check_enum_map(const em::val& w_m) {
    try {
        ::testsuite::TestHelpers::check_enum_map(::djinni::Map<::djinni_generated::NativeColor, ::djinni::String>::toCpp(w_m));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
void NativeTestHelpers::check_enum(int32_t w_c) {
    try {
        ::testsuite::TestHelpers::check_enum(::djinni_generated::NativeColor::toCpp(w_c));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::token_id(const em::val& w_t) {
    try {
        auto r = ::testsuite::TestHelpers::token_id(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeUserToken>::toCpp(w_t));
        return ::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeUserToken>::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeUserToken>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::create_cpp_token() {
    try {
        auto r = ::testsuite::TestHelpers::create_cpp_token();
        return ::djinni_generated::NativeUserToken::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativeUserToken>::handleNativeException(e);
    }
}
void NativeTestHelpers::check_cpp_token(const em::val& w_t) {
    try {
        ::testsuite::TestHelpers::check_cpp_token(::djinni_generated::NativeUserToken::toCpp(w_t));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
int64_t NativeTestHelpers::cpp_token_id(const em::val& w_t) {
    try {
        auto r = ::testsuite::TestHelpers::cpp_token_id(::djinni_generated::NativeUserToken::toCpp(w_t));
        return ::djinni::I64::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::I64>::handleNativeException(e);
    }
}
void NativeTestHelpers::check_token_type(const em::val& w_t,const std::string& w_type) {
    try {
        ::testsuite::TestHelpers::check_token_type(::djinni_generated::NativeUserToken::toCpp(w_t),
                         ::djinni::String::toCpp(w_type));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<void>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::return_none() {
    try {
        auto r = ::testsuite::TestHelpers::return_none();
        return ::djinni::Optional<std::experimental::optional, ::djinni::I32>::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Optional<std::experimental::optional, ::djinni::I32>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::assorted_primitives_id(const em::val& w_i) {
    try {
        auto r = ::testsuite::TestHelpers::assorted_primitives_id(::djinni_generated::NativeAssortedPrimitives::toCpp(w_i));
        return ::djinni_generated::NativeAssortedPrimitives::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni_generated::NativeAssortedPrimitives>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::id_binary(const em::val& w_b) {
    try {
        auto r = ::testsuite::TestHelpers::id_binary(::djinni::Binary::toCpp(w_b));
        return ::djinni::Binary::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Binary>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_async_result() {
    try {
        auto r = ::testsuite::TestHelpers::get_async_result();
        return ::djinni::FutureAdaptor<::djinni::I32>::fromCpp(std::move(r));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::FutureAdaptor<::djinni::I32>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::future_roundtrip(const em::val& w_f) {
    try {
        auto r = ::testsuite::TestHelpers::future_roundtrip(::djinni::FutureAdaptor<::djinni::I32>::toCpp(w_f));
        return ::djinni::FutureAdaptor<::djinni::String>::fromCpp(std::move(r));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::FutureAdaptor<::djinni::String>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::async_early_throw() {
    try {
        auto r = ::testsuite::TestHelpers::async_early_throw();
        return ::djinni::FutureAdaptor<::djinni::I32>::fromCpp(std::move(r));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::FutureAdaptor<::djinni::I32>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::void_async_method(const em::val& w_f) {
    try {
        auto r = ::testsuite::TestHelpers::void_async_method(::djinni::FutureAdaptor<::djinni::Void>::toCpp(w_f));
        return ::djinni::FutureAdaptor<::djinni::Void>::fromCpp(std::move(r));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::FutureAdaptor<::djinni::Void>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::check_async_interface(const em::val& w_i) {
    try {
        auto r = ::testsuite::TestHelpers::check_async_interface(::djinni_generated::NativeAsyncInterface::toCpp(w_i));
        return ::djinni::FutureAdaptor<::djinni::String>::fromCpp(std::move(r));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::FutureAdaptor<::djinni::String>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::check_async_composition(const em::val& w_i) {
    try {
        auto r = ::testsuite::TestHelpers::check_async_composition(::djinni_generated::NativeAsyncInterface::toCpp(w_i));
        return ::djinni::FutureAdaptor<::djinni::String>::fromCpp(std::move(r));
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::FutureAdaptor<::djinni::String>>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_optional_list() {
    try {
        auto r = ::testsuite::TestHelpers::get_optional_list();
        return ::djinni::List<::djinni::Optional<std::experimental::optional, ::djinni::String>>::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::List<::djinni::Optional<std::experimental::optional, ::djinni::String>>>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_optional_list(const em::val& w_ol) {
    try {
        auto r = ::testsuite::TestHelpers::check_optional_list(::djinni::List<::djinni::Optional<std::experimental::optional, ::djinni::String>>::toCpp(w_ol));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_optional_set() {
    try {
        auto r = ::testsuite::TestHelpers::get_optional_set();
        return ::djinni::Set<::djinni::Optional<std::experimental::optional, ::djinni::String>>::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Set<::djinni::Optional<std::experimental::optional, ::djinni::String>>>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_optional_set(const em::val& w_os) {
    try {
        auto r = ::testsuite::TestHelpers::check_optional_set(::djinni::Set<::djinni::Optional<std::experimental::optional, ::djinni::String>>::toCpp(w_os));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}
em::val NativeTestHelpers::get_optional_map() {
    try {
        auto r = ::testsuite::TestHelpers::get_optional_map();
        return ::djinni::Map<::djinni::Optional<std::experimental::optional, ::djinni::String>, ::djinni::Optional<std::experimental::optional, ::djinni::String>>::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Map<::djinni::Optional<std::experimental::optional, ::djinni::String>, ::djinni::Optional<std::experimental::optional, ::djinni::String>>>::handleNativeException(e);
    }
}
bool NativeTestHelpers::check_optional_map(const em::val& w_om) {
    try {
        auto r = ::testsuite::TestHelpers::check_optional_map(::djinni::Map<::djinni::Optional<std::experimental::optional, ::djinni::String>, ::djinni::Optional<std::experimental::optional, ::djinni::String>>::toCpp(w_om));
        return ::djinni::Bool::fromCpp(r);
    }
    catch(const std::exception& e) {
        return djinni::ExceptionHandlingTraits<::djinni::Bool>::handleNativeException(e);
    }
}

EMSCRIPTEN_BINDINGS(testsuite_test_helpers) {
    ::djinni::DjinniClass_<::testsuite::TestHelpers>("testsuite_TestHelpers", "testsuite.TestHelpers")
        .smart_ptr<std::shared_ptr<::testsuite::TestHelpers>>("testsuite_TestHelpers")
        .function("nativeDestroy", &NativeTestHelpers::nativeDestroy)
        .class_function("getSetRecord", NativeTestHelpers::get_set_record)
        .class_function("checkSetRecord", NativeTestHelpers::check_set_record)
        .class_function("getPrimitiveList", NativeTestHelpers::get_primitive_list)
        .class_function("checkPrimitiveList", NativeTestHelpers::check_primitive_list)
        .class_function("getNestedCollection", NativeTestHelpers::get_nested_collection)
        .class_function("checkNestedCollection", NativeTestHelpers::check_nested_collection)
        .class_function("getMap", NativeTestHelpers::get_map)
        .class_function("checkMap", NativeTestHelpers::check_map)
        .class_function("getEmptyMap", NativeTestHelpers::get_empty_map)
        .class_function("checkEmptyMap", NativeTestHelpers::check_empty_map)
        .class_function("getMapListRecord", NativeTestHelpers::get_map_list_record)
        .class_function("checkMapListRecord", NativeTestHelpers::check_map_list_record)
        .class_function("checkClientInterfaceAscii", NativeTestHelpers::check_client_interface_ascii)
        .class_function("checkClientInterfaceNonascii", NativeTestHelpers::check_client_interface_nonascii)
        .class_function("checkClientInterfaceArgs", NativeTestHelpers::check_client_interface_args)
        .class_function("checkEnumMap", NativeTestHelpers::check_enum_map)
        .class_function("checkEnum", NativeTestHelpers::check_enum)
        .class_function("tokenId", NativeTestHelpers::token_id)
        .class_function("createCppToken", NativeTestHelpers::create_cpp_token)
        .class_function("checkCppToken", NativeTestHelpers::check_cpp_token)
        .class_function("cppTokenId", NativeTestHelpers::cpp_token_id)
        .class_function("checkTokenType", NativeTestHelpers::check_token_type)
        .class_function("returnNone", NativeTestHelpers::return_none)
        .class_function("assortedPrimitivesId", NativeTestHelpers::assorted_primitives_id)
        .class_function("idBinary", NativeTestHelpers::id_binary)
        .class_function("getAsyncResult", NativeTestHelpers::get_async_result)
        .class_function("futureRoundtrip", NativeTestHelpers::future_roundtrip)
        .class_function("asyncEarlyThrow", NativeTestHelpers::async_early_throw)
        .class_function("voidAsyncMethod", NativeTestHelpers::void_async_method)
        .class_function("checkAsyncInterface", NativeTestHelpers::check_async_interface)
        .class_function("checkAsyncComposition", NativeTestHelpers::check_async_composition)
        .class_function("getOptionalList", NativeTestHelpers::get_optional_list)
        .class_function("checkOptionalList", NativeTestHelpers::check_optional_list)
        .class_function("getOptionalSet", NativeTestHelpers::get_optional_set)
        .class_function("checkOptionalSet", NativeTestHelpers::check_optional_set)
        .class_function("getOptionalMap", NativeTestHelpers::get_optional_map)
        .class_function("checkOptionalMap", NativeTestHelpers::check_optional_map)
        ;
}

} // namespace djinni_generated
