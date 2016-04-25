#pragma once
#ifndef VariousFeatures_h
#define VariousFeatures_h

#include <vector>
using namespace std;

class VariousFeatures
{
	friend class SomeClass;
private:
	int val;
	const int ID = 0;
	static int counter;
	vector<int> tape = {};

public:
	VariousFeatures(initializer_list<int> aTape);
	VariousFeatures();
	VariousFeatures(int aVal);
	VariousFeatures(int aVal,const int aID);
	~VariousFeatures();

	static int suma(int fst = 10, int snd = 10);
	static vector<int> sampleArray();
	int changeValAndReturnByRef(int aVal) const;

	int GetVal();
	const int GetID();	
	static int GetCounter();
	vector<int>::iterator GetTapeBegin();
	vector<int>::iterator GetTapeEnd();

	static void changeValAndReturnByRef(int outVal, int& initVal);
	static void changeValAndReturnWithPointer(int outVal, int* initVal);

	friend int friendlyMethodGetVal(VariousFeatures* aInVal);
};

#endif

