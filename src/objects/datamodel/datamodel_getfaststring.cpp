#include "datamodel.hpp"

Mariner::MString Mariner::DataModel::GetFastString(MString Name) {

    for(auto& [i, v] : MIterate->pairs(this->FastStrings)) {

       if(this->FastStrings.Get(i)->ToCString() == v.ToCString()) {

            return v;

       };

    }

    return nullptr;

}