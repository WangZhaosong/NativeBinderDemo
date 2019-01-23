#ifndef AIDL_GENERATED_QSBL_BN_DEMO_SERVICE_H_
#define AIDL_GENERATED_QSBL_BN_DEMO_SERVICE_H_

#include <binder/IInterface.h>
#include <qsbl/IDemoService.h>

namespace qsbl {

class BnDemoService : public ::android::BnInterface<IDemoService> {
public:
::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags = 0) override;
};  // class BnDemoService

}  // namespace qsbl

#endif  // AIDL_GENERATED_QSBL_BN_DEMO_SERVICE_H_
