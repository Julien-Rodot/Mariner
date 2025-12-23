#include "object.hpp"

#include "MarinerTypes.hpp"

using namespace Mariner;

Object* Object::FindFirstAncestorOfClass(MString ClassName) {

    if(ClassName == nullptr) {

        return nullptr;

    };

    Object* Current = this;

    for(auto& Pairs : MIterate->ipairs(Current->Parent->Children)) {

        if(Pairs.second->ClassName != ClassName) {

            Current = this->Parent;

        } else {

            return Pairs.second;

        }

    };

    return nullptr;

};