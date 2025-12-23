#pragma once

/**
 * @param name serviceprovider.hpp
 * @author jj
 * @brief the reason you can do datamodel->GetService<T>();
 */

#include "object/object.hpp"
#include "mtable/mtable.hpp"
#include "MarinerTypes.hpp"

namespace Mariner {

    class DataModel;

    class ServiceProvider : public Object {

        public:

            static ServiceProvider* New();

            template<typename T>
            T* GetService() { 
                
                T* Instance = T::New(); 
                this->ServiceBucket.Add(Instance); 
                Instance->SetParent(this->GetDataModel());
                
                return Instance; 
            
            }

            template<typename T>
            T* FindService() {

                for (auto& [i,v] : MIterate->ipairs(this->ServiceBucket)) {    

                    Object* obj = v;  

                    if (T* service = dynamic_cast<T*>(obj)) {  

                        return service;              

                    }

                }

                return nullptr;     

            }

        protected:
        
            ServiceProvider() = default;
            virtual ~ServiceProvider() = default;

        private:

            MTable<Object*> ServiceBucket;

            DataModel* GetDataModel();


    };

} // namespace Mariner
