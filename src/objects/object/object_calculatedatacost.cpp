#include "object.hpp"
#include "MarinerTypes.hpp"

using namespace Mariner;

void Object::CalculateDataCost() {

    size_t DataCost = sizeof(*this);

    for(auto& Iterator : MIterate->ipairs(this->Children)) {

        DataCost += Iterator.second->DataCost;

    };

    DataCost += this->ClassName.RawSize();
    DataCost += this->Name.RawSize();
    DataCost += this->Attributes.RawSize();

    this->DataCost = DataCost;
    
}