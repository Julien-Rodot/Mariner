#include "object.hpp"

using namespace Mariner;

bool Object::IsA(MString ClassName) {

    if(!ClassName.ToCString()) {

        return false;

    }

    return strcmp(ClassName.ToCString(), this->ClassName.ToCString()) == 0;

}