#include "object.hpp"

using namespace Mariner;

Object* Object::Clone() {

    if(this->Archivable) {

        return new Object(*this);

    } else {

        return nullptr;

    }
    
}