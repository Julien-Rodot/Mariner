#include "datamodel.hpp"

int Mariner::DataModel::GetFastInt(MString Name) {

    for(auto& [i, v] : MIterate->pairs(this->FastInts)) {

        if(i == Name) {

            return v;

        }

        return -1;

    }

    return -1;

}