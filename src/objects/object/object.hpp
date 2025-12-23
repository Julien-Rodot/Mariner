#pragma once

/**
 * @param name object.hpp
 * @author jj
 * @brief everything comes from here
 */

#include "mstring/mstring.hpp"
#include "mtable/mtable.hpp"

namespace Mariner {
    
    class Object {

        public:

            static Object* New();

            bool Archivable = true;
            MTable<MString> Attributes = {};
            size_t DataCost = sizeof(Object);
            MString Name = MString("Object");
            MString ClassName = MString("Object");
            MTable<Object*> Children = {};
            Object* Parent = nullptr;

            void ClearAllChildren();
            Object* Clone();
            virtual void Destroy();
            Object* FindFirstAncestor(MString Name);
            Object* FindFirstAncestorOfClass(MString ClassName);
            Object* FindFirstChild(MString Name);
            Object* FindFirstChildOfClass(MString ClassName);
            MTable<MString> GetAttributes();
            MTable<Object*> GetChildren();
            bool IsA(MString ClassName);
            void SetAttribute(MString AttributeName);
            void SetParent(Object* Instance);
            Object* WaitForChild();
            Object* WaitForChildOfClass();
            // FIXME: Make private!
            void CalculateDataCost();

        protected:

            Object() = default;
            virtual ~Object() = default;

            bool IsEligibleForCollection = false;


    };

} // namespace Mariner
