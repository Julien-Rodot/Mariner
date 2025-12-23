#include "mgarbagecollector.hpp"

using namespace Mariner;

void GarbageCollector::Stop() {

    delete this;
    return;

}