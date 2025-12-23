#include "mstring.hpp"
#include <string.h>

using namespace Mariner;

bool MString::operator==(MString OtherString) {

    if (!CString || !OtherString.CString) {

        return CString == OtherString.CString;

    }

    return strcmp(this->CString, OtherString.CString) == 0;

};