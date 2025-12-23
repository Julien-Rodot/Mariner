#include "object.hpp"

#include "MarinerTypes.hpp"

using namespace Mariner;

Object* Object::FindFirstChild(MString Name) {

    if(Name == nullptr) {

        return nullptr;

    };

    Object* Current = this;

    for(auto& Pairs : MIterate->ipairs(Current->Children)) {

        if(Pairs.second->Name != Name) {

            return nullptr;
           
        } else {

            return Pairs.second;

        }

    };

    return nullptr;

};