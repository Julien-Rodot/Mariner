#include "object.hpp"

using namespace Mariner;

MTable<Object*> Object::GetChildren() {

    return this->Children;

}