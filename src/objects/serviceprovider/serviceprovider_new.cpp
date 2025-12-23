#include "serviceprovider.hpp"

using namespace Mariner;

ServiceProvider* ServiceProvider::New() {

    static ServiceProvider* Instance = new ServiceProvider();
    Instance->Name = "ServiceProvider";
    Instance->ClassName = "ServiceProvider";
    return Instance;

}