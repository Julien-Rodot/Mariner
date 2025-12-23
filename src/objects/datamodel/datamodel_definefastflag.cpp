#include "datamodel.hpp"

bool Mariner::DataModel::DefineFastFlag(MString Name, bool Value) {

    this->FastFlags.Add(Name, Value);
    return true;

}