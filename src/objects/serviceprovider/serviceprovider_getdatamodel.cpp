#include "serviceprovider.hpp"
#include "datamodel/datamodel.hpp"

Mariner::DataModel* Mariner::ServiceProvider::GetDataModel() {

    static DataModel* Instance = DataModel::New();
    return Instance;

}