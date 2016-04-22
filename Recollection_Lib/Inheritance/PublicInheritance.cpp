#include "stdafx.h"
#include "PublicInheritance.h"


CPublicInheritance::CPublicInheritance() : CShape()
{
	cout << "CPublicInheritance CTOR" << endl;
}


CPublicInheritance::~CPublicInheritance()
{
	cout << "CPublicInheritance DTOR" << endl;
}
