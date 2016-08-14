#include "stdafx.h"
#include <iostream>

int main()
{
    /* The code below will not compile because old enums 
    ** don't allow to use "names" declared in it's scope
    ** In scope leveled upper
    enum ENUM { one, two};
    int one = 1;
    */

    enum class ENUM {one, two};
    int one = 1;

    system("pause");
}