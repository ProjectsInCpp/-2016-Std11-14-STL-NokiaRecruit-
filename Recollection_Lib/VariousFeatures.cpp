#include "stdafx.h"
#include "VariousFeatures.h"


VariousFeatures::VariousFeatures()
{
	this->val = 0;
}


VariousFeatures::~VariousFeatures()
{
}

int VariousFeatures::suma(int fst, int snd) 
{
	return fst + snd;
}

vector<int> VariousFeatures::sampleArray()
{
	return vector<int>();
}

int VariousFeatures::changeValAndReturn(int aVal) const
{
	//this->val = aVal;
	return this->val;
}
