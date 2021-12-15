// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from data_ref_view.djinni

#include "NativeDataRefTest.hpp"  // my header
#include "DataRef_wasm.hpp"
#include "DataView_wasm.hpp"

namespace djinni_generated {

em::val NativeDataRefTest::cppProxyMethods() {
    static const em::val methods = em::val::array(std::vector<std::string> {
        "sendData",
        "retriveAsBin",
        "sendMutableData",
        "generateData",
        "dataFromVec",
        "dataFromStr",
        "sendDataView",
        "recvDataView",
    });
    return methods;
}

void NativeDataRefTest::sendData(const CppType& self, const em::val& w_data) {
    self->sendData(::snapchat::djinni::NativeDataRef::toCpp(w_data));
}
em::val NativeDataRefTest::retriveAsBin(const CppType& self) {
    auto r = self->retriveAsBin();
    return ::djinni::Binary::fromCpp(r);
}
void NativeDataRefTest::sendMutableData(const CppType& self, const em::val& w_data) {
    self->sendMutableData(::snapchat::djinni::NativeDataRef::toCpp(w_data));
}
em::val NativeDataRefTest::generateData(const CppType& self) {
    auto r = self->generateData();
    return ::snapchat::djinni::NativeDataRef::fromCpp(r);
}
em::val NativeDataRefTest::dataFromVec(const CppType& self) {
    auto r = self->dataFromVec();
    return ::snapchat::djinni::NativeDataRef::fromCpp(r);
}
em::val NativeDataRefTest::dataFromStr(const CppType& self) {
    auto r = self->dataFromStr();
    return ::snapchat::djinni::NativeDataRef::fromCpp(r);
}
em::val NativeDataRefTest::sendDataView(const CppType& self, const em::val& w_data) {
    auto r = self->sendDataView(::snapchat::djinni::NativeDataView::toCpp(w_data));
    return ::djinni::Binary::fromCpp(r);
}
em::val NativeDataRefTest::recvDataView(const CppType& self) {
    auto r = self->recvDataView();
    return ::snapchat::djinni::NativeDataView::fromCpp(r);
}
em::val NativeDataRefTest::create() {
    auto r = ::testsuite::DataRefTest::create();
    return ::djinni_generated::NativeDataRefTest::fromCpp(r);
}

EMSCRIPTEN_BINDINGS(DataRefTest) {
    em::class_<::testsuite::DataRefTest>("DataRefTest")
        .smart_ptr<std::shared_ptr<::testsuite::DataRefTest>>("DataRefTest")
        .function("nativeDestroy", &NativeDataRefTest::nativeDestroy)
        .function("sendData", NativeDataRefTest::sendData)
        .function("retriveAsBin", NativeDataRefTest::retriveAsBin)
        .function("sendMutableData", NativeDataRefTest::sendMutableData)
        .function("generateData", NativeDataRefTest::generateData)
        .function("dataFromVec", NativeDataRefTest::dataFromVec)
        .function("dataFromStr", NativeDataRefTest::dataFromStr)
        .function("sendDataView", NativeDataRefTest::sendDataView)
        .function("recvDataView", NativeDataRefTest::recvDataView)
        .class_function("create", NativeDataRefTest::create)
        ;
}

}  // namespace djinni_generated
