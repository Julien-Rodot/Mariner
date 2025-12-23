#include "object.hpp"

using namespace Mariner;

Object* Object::New() {

    Object* Instance = new Object();
    return Instance;

}