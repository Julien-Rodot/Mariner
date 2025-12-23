#include "object.hpp"
#include "MarinerTypes.hpp"

using namespace Mariner;

void Object::SetParent(Object* Instance) {

    if (Parent) {

        Parent->Children.Remove(this);

    }

    Parent = Instance;

    if (Parent) {

        Parent->Children.Add(this);
        
    }

    MGarbageCollector->Track(this);
}