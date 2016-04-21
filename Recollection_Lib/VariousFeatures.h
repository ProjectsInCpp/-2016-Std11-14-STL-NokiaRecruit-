#pragma once
#include <vector>
using namespace std;
class VariousFeatures
{
private:
	int val;
	const int ID = 0;
	static int counter;
public:
	VariousFeatures();
	VariousFeatures(int aVal);
	VariousFeatures(int aVal,const int aID);
	~VariousFeatures();
	static int suma(int fst = 10, int snd = 10);
	static vector<int> sampleArray();
	int changeValAndReturn(int aVal) const;
	const int GetID();	
	static int GetCounter();
	int GetVal();
};

