#include "stdafx.h"
#include "Mammal.h"


CMammal::CMammal()
{
	cout << "CMammal CTOR" << endl;
}

void CMammal::breathe()
{

}


void CMammal::yell()
{
	cout << "Yell:I'm mammal i don't know how" << endl;
}

void CMammal::tell()
{
	cout << "Tell:I'm mammal i don't know how" << endl;
}

CMammal::~CMammal()
{
	cout << "CMammal DTOR" << endl;
}
