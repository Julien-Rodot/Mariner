#include "mstring.hpp"

using namespace Mariner;

size_t MString::RawSize() {

    return sizeof(this->CString);

}