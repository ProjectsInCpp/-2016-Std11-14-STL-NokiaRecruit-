#include "stdafx.h"
#include "VariousFeatures.h"

int VariousFeatures::counter = 0;

#pragma region ******************** CTORS ***********************

VariousFeatures::VariousFeatures():val(0){}

VariousFeatures::VariousFeatures(initializer_list<int> aTape)
{
	VariousFeatures();
	this->tape = aTape;
}

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

void VariousFeatures::changeValAndReturnByRef(int outVal,int& initVal)
{
	initVal = outVal;
}

void VariousFeatures::changeValAndReturnWithPointer(int outVal, int* initVal)
{
	*initVal = outVal;
}

const int VariousFeatures::GetID() {
	return this->ID;
}

VariousFeatures::~VariousFeatures()
{
}

vector<int>::iterator VariousFeatures::GetTapeBegin()
{
	return tape.begin();
}

vector<int>::iterator VariousFeatures::GetTapeEnd()
{
	return tape.end();
}

int VariousFeatures::suma(int fst, int snd) 
{
	return fst + snd;
}

vector<int> VariousFeatures::sampleArray()
{
	return vector<int>();
}

int VariousFeatures::changeValAndReturnByRef(int aVal) const
{
	return this->val;
}
