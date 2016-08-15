#include "stdafx.h"
#include <iostream>

class NoExcept
{
public:
    static int retVal() noexcept
    {
        return 1;
    }
};

int main()
{
    std::cout << NoExcept::retVal() << '\n';
    return 0;
}
