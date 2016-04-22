#pragma once
#include "Mammal.h"
#include "WingedAnimal.h"

class CBat : public CMammal,public CWingedAnimal
{
public:
	CBat();
	virtual ~CBat();
};

