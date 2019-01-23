#ifndef AIDL_GENERATED_QSBL_BP_DEMO_SERVICE_H_
#define AIDL_GENERATED_QSBL_BP_DEMO_SERVICE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <qsbl/IDemoService.h>

namespace qsbl {

class BpDemoService : public ::android::BpInterface<IDemoService> {
public:
explicit BpDemoService(const ::android::sp<::android::IBinder>& _aidl_impl);
virtual ~BpDemoService() = default;
::android::binder::Status add(int32_t a, int32_t b, int32_t* _aidl_return) override;
};  // class BpDemoService

}  // namespace qsbl

#endif  // AIDL_GENERATED_QSBL_BP_DEMO_SERVICE_H_
