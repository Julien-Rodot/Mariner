#include "mstring.hpp"
#include "mtable/mtable.hpp"

Mariner::MString Mariner::MString::Concatenate(MString OtherString) {

    // TODO: refactor this shit code 
    
    const char* a = this->ToCString();
    const char* b = OtherString.ToCString();

    size_t lenA = strlen(a);
    size_t lenB = strlen(b);

    char* Buffer = new char[lenA + lenB + 1];

    memcpy(Buffer, a, lenA);
    memcpy(Buffer + lenA, b, lenB);

    Buffer[lenA + lenB] = '\0';
    return Mariner::MString(Buffer);

}
