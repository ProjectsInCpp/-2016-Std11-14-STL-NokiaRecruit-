#pragma once

#include "Animal.h"

class CMammal :
	public virtual CAnimal
{
public:
	//virtual 
		void breathe();

	CMammal();
	virtual 
		~CMammal();
};

