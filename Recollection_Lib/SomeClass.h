#pragma once
#ifndef SomeClass_h
#define SomeClass_h
#include "VariousFeatures.h"
#include <exception>
#include "OwnException.h"
#include <iostream>
using namespace std;

class SomeClass
{
public:
	SomeClass()
	{
		cout << "SomeClass CTOR" << endl;
	}

	~SomeClass()
	{
		cout << "SomeClass DTOR" << endl;
	}

	int showValFromVariousFeaturePrivateMethod(VariousFeatures& aInput)
	{
		return aInput.val;
	}

	friend int friendlyMethodGetVal(VariousFeatures* aInVal)
	{
		return aInVal->val;
	}

	int IwillThrowException()
	{
		throw OwnException();
		return 3;
	}
};

#endif

