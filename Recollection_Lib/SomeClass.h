#pragma once
#ifndef SomeClass_h
#define SomeClass_h
#include "VariousFeatures.h"
#include <exception>
#include "OwnException.h"

class SomeClass
{
public:
	SomeClass()
	{

	}

	~SomeClass()
	{
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

