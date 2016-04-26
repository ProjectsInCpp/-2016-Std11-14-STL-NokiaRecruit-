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
//
#pragma region ************** TESTING COMPLEX CTORS AND DTORS CALLS ******

//void CreateCShapeObj()
//{
//	CShape obj;
//}
//
//void CreateCFilledShapeObj()
//{
//	CFilledShape obj;
//}
//
//void CreatePublicInheritanceObj()
//{
//	CPublicInheritance obj;
//}
//
//void CreateCMultiInheritanceObj()
//{
//	CMultiInheritance obj;
//}
//
//void CreateCBatObj()
//{
//	CBat obj;
//}
//
//void CreateCBatObjAndPointToItByCAnimal()
//{
//	CAnimal* obj = new CBat();
//	delete obj;
//}// to test how virtual DTORS work, go to this class hierarchy and uncomment virtual keywords

#pragma endregion
//void CreateObjectCAnimalAndYell()
//{
//	cout << "******************CAnimal Static Obj "<<endl;
//	CAnimal obj;
//	obj.yell();
//}
//
//void CreateObjectCMammalAndYell()
//{
//	cout << "******************CMammal Static Obj " << endl;
//	CMammal obj;
//	obj.yell();
//}

void CreateObjectCMammalTieToToCAnimalAndYell()
{
	CMammal obj;
	CAnimal obj2 = obj;
	obj.yell();
}

void CreateObjectCMammalTieToToCAnimalCastToCAnimalAndYell()
{
	CMammal obj;
	CAnimal obj2 = obj;
	((CAnimal)obj).yell();
}

void TestingPolymorphicYellOnMammalAndAnimal_Static()
{
	CMammal* mammal = new CMammal();
	CAnimal* animal = new CAnimal();

	CAnimal* polymorph = animal;
	polymorph->yell();

	polymorph = mammal;
	polymorph->yell();

	delete mammal;
	delete animal;
}

void TestingPolymorphicYell_Dynamic()
{
	cout << "Polymorphic Yell Dynamic";
	CMammal* mammal = new CMammal();
	CAnimal* animal = new CAnimal();

	CAnimal* polymorph = animal;
	polymorph->yell();

	polymorph = mammal;
	polymorph->yell();

	delete mammal;
	delete animal;
}

void TestingMonomorphicTell_Dynamic()
{
	cout << "Monomorphic Tell Dynamic";
	CMammal* mammal = new CMammal();
	CAnimal* animal = new CAnimal();

	CAnimal* polymorph = animal;
	polymorph->tell();

	polymorph = mammal;
	polymorph->tell();

	delete mammal;
	delete animal;
}

void TestingMonomorphicTell_Casting_Dynamic()
{
	cout << "Monomorphic Tell Dynamic";
	CMammal* mammal = new CMammal();
	CAnimal* animal = new CAnimal();

	CAnimal* polymorph = animal;
	polymorph->tell();

	polymorph = mammal;
	polymorph->tell();

	delete mammal;
	delete animal;
}

void TestingPolymorphicYell_Static()
{
	cout << "Polymorphic Yell Static";
	CMammal mammal;
	CAnimal animal;

	CAnimal& polymorph = mammal;
	polymorph.yell();

	polymorph = animal;
	polymorph.yell();
}

void TestingPolymorphicYell_Static_ByRef()
{
	cout << "Polymorphic Yell Static By Ref "<<endl;
	CMammal mammal;
	CAnimal animal;

	CAnimal& polymorph = mammal;
	polymorph.yell();

	CAnimal& polymorph2 = animal;
	polymorph = polymorph2;
	polymorph.yell();
}

int dodaj(int a, int b)
{
	return a + b;
}

void TestingMonomorphicTell_Static()
{
	cout << "Monomorphic Yell Static";
	CMammal mammal;
	CAnimal animal;

	CAnimal& polymorph = mammal;
	polymorph.tell();

	polymorph = animal;
	polymorph.tell();
}

//void main()
//{
//#pragma region ************** TESTING SIMPLE CTORS ************************
////	cout << "Hello World" << endl;
////	CreateCShapeObj();
////	cout << endl;
////	CreateCFilledShapeObj();
////	cout << endl;
////#pragma endregion
////#pragma region ************** TESTING COMPLEX CTORS AND DTORS CALLS ******
////	CreatePublicInheritanceObj();
////	cout << endl;
////	CreateCMultiInheritanceObj();
////	cout << endl;
////	CreateCBatObj();
////	cout << endl;
////
////	CreateCBatObjAndPointToItByCAnimal();
////	cout << endl;
//#pragma endregion
//
//	//CreateObjectCAnimalAndYell();
//	//cout << endl;
//	//CreateObjectCMammalAndYell();
//	//cout << endl;
//	//CreateObjectCMammalTieToToCAnimalAndYell();
//	//cout << endl;
//	//CreateObjectCMammalTieToToCAnimalAndYell();
//	//cout << endl;
//	//CreateObjectCMammalTieToToCAnimalCastToCAnimalAndYell();
//	//cout << endl;
//	/*
//	TestingPolymorphicYell_Dynamic();
//	cout << endl;
//	TestingMonomorphicTell_Dynamic();
//	cout << endl;
//	TestingPolymorphicYell_Static();
//	cout << endl;
//	TestingMonomorphicTell_Static();
//	cout << endl;
//	TestingPolymorphicYell_Static_ByRef();
//	cout << endl;*/
// #pragma region ********************* LAMBDAS *****************************
//	int(*fun)(int, int) = dodaj;
//
//	//act
//	int retVal = (*fun)(2, 3);
//	cout << retVal;
// # pragma endregion
//	system("Pause");
//}

#include <memory>
#include "VariousFeatures.h"
#include "Inheritance\Shape.h"

void main()
{
	{
		cout << endl << "Shared Pointer " << endl;
		auto* namedPtr = new CShape{ 1 };
		shared_ptr<CShape> scPtrForNamedPtr{ namedPtr };
		shared_ptr<CShape> scPtrForUnknowPtr{ new CShape };
		shared_ptr<CShape> alias = scPtrForUnknowPtr;

		cout << "Alias "<< alias->value << endl;
		cout << "scPtrForUnknowPtr " << scPtrForUnknowPtr->value << endl;

		scPtrForNamedPtr.reset();
		scPtrForUnknowPtr.reset();
		alias.reset();
		cout << " Upper are own dtor Call" << endl;
	}
	{
		cout << endl << "Unique Pointer " << endl;

		CShape* namedPtr = new CShape{ 1 };
		{
			unique_ptr<CShape> scPtrForKnowPtr{ namedPtr };
			unique_ptr<CShape> scPtrForUnknowPtr{ new CShape };
			unique_ptr<CShape> alias = move(scPtrForUnknowPtr);
			cout << "Alias " << alias->value << endl;
		}	
		cout << "elo" << endl;
	}
	system("Pause");
}