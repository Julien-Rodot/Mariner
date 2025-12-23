#include "datamodel.hpp"

int Mariner::DataModel::DefineFastInt(MString Name, int Value) {

    this->FastInts.Add(Name, Value);
    return 0;

}