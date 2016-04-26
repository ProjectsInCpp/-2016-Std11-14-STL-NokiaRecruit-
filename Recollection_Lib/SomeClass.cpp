#include "stdafx.h"
#include "SomeClass.h"
#include <exception>
#include "OwnException.h"

SomeClass::~SomeClass()
{
}

int SomeClass::showValFromVariousFeaturePrivateMethod(VariousFeatures& aInput)
{
	return aInput.val;
}

int friendlyMethodGetVal(VariousFeatures* aInVal)
{
	return aInVal->val; 
}

int SomeClass::IwillThrowException()
{
	throw OwnException();
	return 3;
} 