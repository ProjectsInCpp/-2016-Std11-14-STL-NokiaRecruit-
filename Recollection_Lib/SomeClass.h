#pragma once
#include "VariousFeatures.h"

class SomeClass
{
public:
	~SomeClass();
	int showValFromVariousFeaturePrivateMethod(VariousFeatures& aInput);
	friend int friendlyMethodGetVal(VariousFeatures* aInVal);
};

