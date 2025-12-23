#pragma once

/**
 * @param name mstring.hpp
 * @author jj
 * @brief because libc++ strings are cunts.
 */

#include <string.h>

namespace Mariner {

    class MString {

        public:

            MString() : CString("") {}  
            MString(const char* CString);
            
            const char* ToCString();
            size_t RawSize();
            MString Concatenate(MString OtherString);

            bool operator==(MString StringToCompare);

        private:

            const char* CString;

    };

} // namespace Mariner