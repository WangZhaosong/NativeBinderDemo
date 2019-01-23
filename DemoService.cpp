#include "DemoService.h"

namespace qsbl
{

binder::Status DemoService::add(int32_t a, int32_t b, int32_t *_aidl_return)
{
    *_aidl_return = a + b;
    return binder::Status::ok();
}

} // namespace qsbl