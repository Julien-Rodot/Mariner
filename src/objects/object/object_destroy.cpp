#include "object.hpp"
#include "MarinerTypes.hpp"

using namespace Mariner;

Iterate* IterateLib = Iterate::OpenLibrary();

void Object::Destroy() {

    if (Parent) {

        Parent->Children.Remove(this);
        Parent = nullptr;

    }

    for (auto& Pair : IterateLib->ipairs(Children)) {

        Pair.second->Parent = nullptr;

    }

    Children.Clear();

    delete this;

}

