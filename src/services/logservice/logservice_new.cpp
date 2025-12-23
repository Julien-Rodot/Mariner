#include "logservice.hpp"

Mariner::LogService* Mariner::LogService::New() {

    static LogService* Instance = new LogService();
    Instance->Name = "LogService";
    Instance->ClassName = "LogService";
    return Instance;

}