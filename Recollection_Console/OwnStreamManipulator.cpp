#include "stdafx.h"
#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>

static int allocatedIdx = std::ios_base::xalloc();

std::ios_base& setSeparatorSpace(std::ios_base& inStream)
{
    inStream.pword(allocatedIdx) = reinterpret_cast<void*>('a');
    return inStream;
}

//std::ostream& operator<<(std::ostream& inStream, int inArg)
//{
//    inStream.pword(allocatedIdx) = reinterpret_cast<void*>('a');
//    inStream.put(reinterpret_cast<char>(inStream.pword(allocatedIdx)));
//    inStream.put(inArg);
//    return inStream;
//}

//int main()
//{
//    std::stringstream someStream;
//    std::string someString = "lValueStr";
//    someStream << setSeparatorSpace << someString << "rValueStr" << 3 << 'elo';
//    std::cout << 3;
//}