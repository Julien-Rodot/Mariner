#pragma once

#include "mgarbagecollector/mgarbagecollector.hpp"
#include "miterate/miterate.hpp"
#include "mtable/mtable.hpp"
#include "mstring/mstring.hpp"

// Global Miterate instance
inline Mariner::Iterate* MIterate = Mariner::Iterate::OpenLibrary();
inline Mariner::GarbageCollector* MGarbageCollector = Mariner::GarbageCollector::OpenLibrary();
