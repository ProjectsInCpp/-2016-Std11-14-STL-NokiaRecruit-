#pragma once
#ifndef MultiInheritance_h
#define MultiInheritance_h

#include "Shape.h"
#include "FilledShape.h"

class CMultiInheritance : public CShape, public CFilledShape
{
public:
	CMultiInheritance();
	~CMultiInheritance();
};

#endif
