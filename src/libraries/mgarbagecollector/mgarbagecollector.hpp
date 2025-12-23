#pragma once

#include "object/object.hpp"
#include "mtable/mtable.hpp"

/**
 * @param name mgarbagecollector.hpp
 * @author jj
 * @brief the bin man. makes sure that if you forget to delete or free objects,
 * on the next bin run (every frame), the object is guaranteed to be in the bin,
 * and its refrence will point to nullptr
 */

namespace Mariner {

    class GarbageCollector {

        public:

            static bool IsGCActive;

            static GarbageCollector* OpenLibrary();

            void Track(Object* Instance);
            void Untrack(Object* Instance);

            void Collect();
            void Stop();

        private:

            MTable<Object*> Bin = {};
            MTable<Object*> TrackedInstances = {};

    };

} // namespace Mariner