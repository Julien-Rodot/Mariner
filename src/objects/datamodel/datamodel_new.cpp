#include "datamodel.hpp"

using namespace Mariner;

DataModel* DataModel::New() {

    static DataModel* Instance = new DataModel();
    Instance->Name = "DataModel";
    Instance->ClassName = "DataModel";
    return Instance;

}