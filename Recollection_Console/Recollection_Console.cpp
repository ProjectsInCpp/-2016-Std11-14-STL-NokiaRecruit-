// Recollection_Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Inheritance\Shape.h"
#include "Inheritance\FilledShape.h"
#include "Inheritance\PublicInheritance.h"
#include "Inheritance\MultiInheritance.h"
#include "Inheritance\Multiple_Virtual\Bat.h"

using namespace std;

void CreateCShapeObj()
{
	CShape obj;
}

void CreateCFilledShapeObj()
{
	CFilledShape obj;
}

void CreatePublicInheritanceObj()
{
	CPublicInheritance obj;
}

void CreateCMultiInheritanceObj()
{
	CMultiInheritance obj;
}

void CreateCBatObj()
{
	CBat obj;
}

void CreateCBatObjAndPointToItByCAnimal()
{
	CAnimal* obj = new CBat();
	delete obj;
}// to test how virtual DTORS work, go to this class hierarchy and uncomment virtual keywords

void main()
{
	cout << "Hello World" << endl;
	CreateCShapeObj();
	cout << endl;
	CreateCFilledShapeObj();
	cout << endl;
	CreatePublicInheritanceObj();
	cout << endl;
	CreateCMultiInheritanceObj();
	cout << endl;
	CreateCBatObj();
	cout << endl;
	CreateCBatObjAndPointToItByCAnimal();
	cout << endl;
	system("Pause");
}