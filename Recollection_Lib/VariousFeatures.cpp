#include "stdafx.h"
#include "VariousFeatures.h"

int VariousFeatures::counter = 0;

#pragma region ******************** CTORS ***********************

VariousFeatures::VariousFeatures():val(0){}

VariousFeatures::VariousFeatures(int aVal):val(aVal){
}

VariousFeatures::VariousFeatures(int aVal, const int aID): val(aVal),ID(aID){}

#pragma endregion

int VariousFeatures::GetVal() {
	return this->val;
}

int VariousFeatures::GetCounter()
{
	return VariousFeatures::counter;
}


const int VariousFeatures::GetID() {
	return this->ID;
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
	return this->val;
}

