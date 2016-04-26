#pragma once
#include <exception>
#include <string>
using namespace std;

class OwnException : public exception
{
public:
	string what()
	{
		return "It's exception";
	}
};
