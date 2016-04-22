#include "stdafx.h"
#include "Animal.h"


CAnimal::CAnimal()
{
	cout << "CAnimal CTOR" << endl;
}

void CAnimal::eat()
{

}

void CAnimal::yell()
{
	cout << "Yell:I'm animal i don't know how " << endl;
}

void CAnimal::tell()
{
	cout << "Tell:I'm animal i don't know how" << endl;
}

CAnimal::~CAnimal()
{
	cout << "CAnimal DTOR" << endl;
}
