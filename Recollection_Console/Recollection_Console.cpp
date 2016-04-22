// Recollection_Console.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Inheritance\Shape.h"
#include "Inheritance\FilledShape.h"

using namespace std;

void CreateCFilledShapeObj()
{
	CFilledShape obj;
}

void CreateShapeObj()
{
	CShape obj;
}

void main()
{
	cout << "Hello World" << endl;
	CreateShapeObj();
	cout << endl;
	CreateCFilledShapeObj();
	system("Pause");
}