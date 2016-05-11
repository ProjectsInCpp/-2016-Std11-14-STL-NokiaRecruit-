#pragma once
#ifndef Utils_h
#define Utils_h

#include <string>
using namespace std;

namespace Utils {
	constexpr int ConstExpr()
	{
		return 3;
	}
	using vint = vector<int>;
	enum class COLORS
	{
		BLUE,
		BROWN,
		GREEN,
		RED
	};
	//int solution1(vector<int> &A) {
	//	return A.size();
	//}
};

#endif