#pragma once

#include "Animal.h"

class CWingedAnimal :
	public virtual CAnimal
{
public:
	//virtual 
		void flap();
	CWingedAnimal();
	virtual 
		~CWingedAnimal();
};

