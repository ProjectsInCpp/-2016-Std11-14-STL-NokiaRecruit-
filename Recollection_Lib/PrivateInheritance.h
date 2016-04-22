#pragma once
#include "Shape.h"
class CPrivateInheritance :
	private CShape
{
public:
	CPrivateInheritance();
	~CPrivateInheritance();  
};

