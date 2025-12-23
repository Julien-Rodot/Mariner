#pragma once

/**
 * @param name miterate.hpp
 * @author jj
 * @brief abunch of iterator functions stolen from various high level languages
 */

#include <any>
#include <vector>
#include <utility>

#include "mtable/mtable.hpp"
#include "mdictionary/mdictionary.hpp"

namespace Mariner {

    class Iterate {

        public:

            static Iterate* OpenLibrary() {

                static Iterate* Instance = new Iterate();
                return Instance;

            } 
            
            template<typename T>
            std::vector<std::pair<size_t, T>> ipairs(MTable<T>& Instance) {

                std::vector<std::pair<size_t, T>> Result;

                for (size_t i = 0; i < Instance.Size(); ++i) {

                    Result.emplace_back(i, Instance[i]);

                }

                return Result;

            };

            template<typename K, typename V>
            std::vector<std::pair<K, V>> pairs(MDictionary<K, V>& Instance) {

                std::vector<std::pair<K, V>> Result;

                for (size_t i = 0; i < Instance.Size(); ++i) {

                    auto& p = Instance.GetPairAt(i);
                    Result.emplace_back(p.first, p.second);

                }
                
                return Result;
            }


        private:

    };

} // namespace Mariner