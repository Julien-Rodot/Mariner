#include "mgarbagecollector.hpp"

using namespace Mariner;

bool GarbageCollector::IsGCActive = false;

GarbageCollector* GarbageCollector::OpenLibrary() {

    static GarbageCollector* Instance = new GarbageCollector();
    GarbageCollector::IsGCActive = true;
    return Instance;

}