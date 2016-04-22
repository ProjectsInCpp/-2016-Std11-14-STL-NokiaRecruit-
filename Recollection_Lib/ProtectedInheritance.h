#pragma once
#ifndef ProtectedInheritance_h
#define ProtectedInheritance_h

#include "Shape.h"
class CProtectedInheritance :
	protected CShape
{
public:
	CProtectedInheritance();
	~CProtectedInheritance();
};

#endif