#pragma once

/**
 * @file mdictionary.hpp
 * @author jj
 * @brief Key-Value pair array
 */

#include <vector>
#include <algorithm>
#include <utility>

namespace Mariner {

    template<typename K, typename V>
    class MDictionary {

    public:

        MDictionary() {

            this->Vector = new std::vector<std::pair<K, V>>();

        }

        ~MDictionary() {

            delete Vector;

        }

        void Add(const K& key, const V& value) {

            this->Vector->emplace_back(key, value);

        }

        void Clear() {

            this->Vector->clear();

        }

        void Remove(const K& key) {

            auto& vec = *this->Vector;
            vec.erase(std::remove_if(vec.begin(), vec.end(), [&](const std::pair<K, V>& p) { return p.first == key; }), vec.end());

        }

        V* Get(const K& key) {

            for (auto& pair : *Vector) {

                if (pair.first == key) {

                    return &pair.second;

                }

            }

            return nullptr;
        }

        std::pair<K, V>& GetPairAt(size_t Index) {

            if (Index >= Vector->size()) {

                throw std::out_of_range("Index out of range");

            }

            return (*Vector)[Index];
        }

        const std::pair<K, V>& GetPairAt(size_t Index) const {

            if (Index >= Vector->size()) {

                throw std::out_of_range("Index out of range");

            }

            return (*Vector)[Index];
        }

        size_t Size() const { return Vector->size(); }
        size_t RawSize() const { return sizeof(Vector); }

        V& operator[](const K& Key) {

            for (auto& Pair : *Vector) {

                if (Pair.first == Key) {

                    return Pair.second;

                }

            }

            Vector->emplace_back(Key, V{});
            return Vector->back().second;

        }

        const V& operator[](const K& Key) const {

            for (const auto& Pair : *Vector) {

                if (Pair.first == Key) {

                    return Pair.second;

                }
            }
            throw std::out_of_range("Key not found");
        }


    private:

        std::vector<std::pair<K, V>>* Vector;

    };

} // namespace Mariner
