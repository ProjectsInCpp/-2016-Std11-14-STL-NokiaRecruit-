#pragma once

#ifndef PrivateInheritance_h
#define PrivateInheritance_h

#include "Shape.h"

class CPrivateInheritance :
	private CShape
{
public:
	CPrivateInheritance();
	~CPrivateInheritance();  
};

#endif