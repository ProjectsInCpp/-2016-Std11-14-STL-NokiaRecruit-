#include "stdafx.h"
#include "SomeClass.h"

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