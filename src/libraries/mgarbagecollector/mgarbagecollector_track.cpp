#include "mgarbagecollector.hpp"

using namespace Mariner;

void GarbageCollector::Track(Object* Instance) {

    this->TrackedInstances.Add(Instance);

}