#pragma once

#ifndef Shape_h
#define Shape_h

#include "Multiple_Virtual\Utils.h"

class CShape
{
private:
	int brush = 1;
protected:
	int size = 1;
public:
	int vertices = 1;

	int GetBrush();
	int GetVertices();
	CShape();
	CShape(int aVal);
	~CShape();
};

#endif

