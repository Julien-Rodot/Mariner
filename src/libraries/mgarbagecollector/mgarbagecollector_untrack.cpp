#include "mgarbagecollector.hpp"

using namespace Mariner;

void GarbageCollector::Untrack(Object* Instance) {

    this->TrackedInstances.Remove(Instance);
    this->Bin.Add(Instance);

}