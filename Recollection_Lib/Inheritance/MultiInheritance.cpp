#include "stdafx.h"
#include "MultiInheritance.h"

CMultiInheritance::CMultiInheritance(): CShape(), CFilledShape()
{
	this->filledSize;
	this->size;
	cout << "CMultiInheritance CTOR" << endl;
}


CMultiInheritance::~CMultiInheritance()
{
	cout << "CMultiInheritance DTOR" << endl;
}

void CMultiInheritance::perform()
{
	;
}
