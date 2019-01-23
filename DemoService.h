#ifndef QSBL_DEMO_SERVICE_H_
#define QSBL_DEMO_SERVICE_H_

#include <qsbl/BnDemoService.h>

namespace qsbl
{
using namespace android;
class DemoService : public BnDemoService
{
  public:
    virtual binder::Status add(int32_t a, int32_t b, int32_t *_aidl_return);
};

} // namespace qsbl

#endif
