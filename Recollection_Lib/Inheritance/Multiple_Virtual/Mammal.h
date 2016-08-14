#pragma once

#include "Animal.h"

class CMammal :
	public virtual CAnimal
{
public:
	void breathe();
	virtual void yell() override;
	void tell();

	CMammal();
	virtual ~CMammal();
};

