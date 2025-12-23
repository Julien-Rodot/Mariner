#include "baseservice.hpp"

Mariner::BaseService* Mariner::BaseService::New() {

    static BaseService* Instance = new BaseService();
    Instance->Name = "BaseService";
    Instance->ClassName = "BaseService";
    return Instance;

}