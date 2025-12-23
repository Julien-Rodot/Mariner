#include "object.hpp"

#include "MarinerTypes.hpp"

using namespace Mariner;

Object* Object::FindFirstChildOfClass(MString ClassName) {

    if(ClassName == nullptr) {

        return nullptr;

    };

    Object* Current = this;

    for(auto& Pairs : MIterate->ipairs(Current->Children)) {

        if(Pairs.second->Name != ClassName) {

            return nullptr;
           
        } else {

            return Pairs.second;

        }

    };

    return nullptr;

};