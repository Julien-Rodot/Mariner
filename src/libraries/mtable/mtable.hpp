#pragma once

/**
 * @param name mtable.hpp
 * @author jj
 * @brief string lib
 */

#include <vector>
#include <any>

namespace Mariner {

    template<typename T>
    class MTable {

        public:

            MTable<T>(){
                
                this->Vector = new std::vector<T>();
            
            };

            ~MTable() {

                delete this->Vector;

            }

            void Add(T Instance) {

                this->Vector->push_back(Instance); 
            
            };

            void Clear() {

                this->Vector->clear();

            }

            void Remove(T instance) {

                auto& vec = *this->Vector;
                vec.erase(std::remove(vec.begin(), vec.end(), instance), vec.end());

            }

            T* Get(std::vector<std::any>& vec) {

                for (auto& val : vec) {

                    if (val.type() == typeid(T)) {

                        return &std::any_cast<T&>(val);

                    }

                }

                return nullptr; 
                
            }

            size_t Size() { return this->Vector->size(); }
            size_t RawSize() { return sizeof(this->Vector); }

            T& operator[](size_t Index) {

                if (Index >= Vector->size()) {

                    Vector->resize(Index + 1);

                }

                return (*Vector)[Index];

            }

            const T& operator[](size_t Index) const {

                return Vector->at(Index);
                
            }

        private:

            std::vector<T>* Vector;

    };

} // namespace Mariner