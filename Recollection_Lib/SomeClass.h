#pragma once
#ifndef SomeClass_h
#define SomeClass_h

#include "VariousFeatures.h"

class SomeClass
{
public:
	~SomeClass();
	int showValFromVariousFeaturePrivateMethod(VariousFeatures& aInput);
	friend int friendlyMethodGetVal(VariousFeatures* aInVal);
	int IwillThrowException();
};

#endif

