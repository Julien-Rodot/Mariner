#include "object.hpp"

#include "MarinerTypes.hpp"

using namespace Mariner;

Object* Object::FindFirstAncestor(MString Name) {

    if(Name == nullptr) {

        return nullptr;

    };

    Object* Current = this;

    for(auto& Pairs : MIterate->ipairs(Current->Parent->Children)) {

        if(Pairs.second->Name != Name) {

            Current = this->Parent;

        } else {

            return Pairs.second;

        }

    };

    return nullptr;

};