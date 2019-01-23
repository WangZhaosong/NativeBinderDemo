#ifndef AIDL_GENERATED_QSBL_I_DEMO_SERVICE_H_
#define AIDL_GENERATED_QSBL_I_DEMO_SERVICE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/String16.h>
#include <utils/StrongPointer.h>

namespace qsbl {

class IDemoService : public ::android::IInterface {
public:
DECLARE_META_INTERFACE(DemoService)
static const ::android::String16& SERVICE_NAME();
virtual ::android::binder::Status add(int32_t a, int32_t b, int32_t* _aidl_return) = 0;
enum Call {
  ADD = ::android::IBinder::FIRST_CALL_TRANSACTION + 0,
};
};  // class IDemoService

}  // namespace qsbl

#endif  // AIDL_GENERATED_QSBL_I_DEMO_SERVICE_H_
