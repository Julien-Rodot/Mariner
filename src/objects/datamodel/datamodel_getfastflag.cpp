#include "datamodel.hpp"

bool Mariner::DataModel::GetFastFlag(MString Name) {

    for(auto& [i, v] : MIterate->pairs(this->FastFlags)) {

        if(i == Name) {

            return v;

        }

        return false;

    }

    return false;

}