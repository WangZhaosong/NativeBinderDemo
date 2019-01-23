
#include <binder/IServiceManager.h>
#include <qsbl/IDemoService.h>

using namespace android;
using namespace qsbl;
int main()
{
    sp<IServiceManager> sm = defaultServiceManager();
    sp<IBinder> binder = sm->getService(String16(IDemoService::SERVICE_NAME()));
    if (binder == NULL)
    {
        printf("service is not started\n");
        return -1;
    }
    sp<IDemoService> service = interface_cast<IDemoService>(binder);
    if(service == nullptr)
    {
        return -1;
    }
    int sum = 0;
    service->add(3,4,&sum);
    printf("Sum:%d\n", sum);
    return 0;
}