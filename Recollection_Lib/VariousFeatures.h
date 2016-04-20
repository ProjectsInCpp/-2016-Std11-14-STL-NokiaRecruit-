#pragma once
#include <vector>
using namespace std;
class VariousFeatures
{
	int val;
public:
	VariousFeatures();
	~VariousFeatures();
	static int suma(int fst = 10, int snd = 10);
	static vector<int> sampleArray();
	int changeValAndReturn(int aVal) const;
};

