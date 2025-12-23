#include "datamodel.hpp"

Mariner::MString Mariner::DataModel::DefineFastString(Mariner::MString Name, MString Value) {

    this->FastStrings.Add(Name, Value);
    return Value;

}