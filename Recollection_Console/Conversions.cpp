#include "stdafx.h"
#include <string>
#include <iostream>

class SimplePackage
{
public:
    inline static std::string retVal(int arg)
    {
        return std::to_string(arg);
    }
};
//
//int main()
//{
//    std::cout << SimplePackage::retVal(true) << "\n";
//    std::cout << SimplePackage::retVal('A') << "\n";
//    std::cout << SimplePackage::retVal(5.5) << "\n";
//    std::cout << SimplePackage::retVal(5) << "\n";
//    std::cout << SimplePackage::retVal(0x0100) << "\n";
//    // if you will hover over hex rValue, then it will show you int representation
//    system("pause");
//}

