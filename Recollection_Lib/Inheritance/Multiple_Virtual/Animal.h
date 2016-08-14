#pragma once

#include "Utils.h"

class CAnimal
{
public:
	void eat();
	virtual void yell();
	void tell();

	CAnimal();
	virtual ~CAnimal();
};

