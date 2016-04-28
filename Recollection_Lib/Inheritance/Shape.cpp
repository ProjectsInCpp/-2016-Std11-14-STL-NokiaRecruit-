#include "stdafx.h"
#include "Shape.h"

CShape::CShape()
{
	cout << "CShape CTOR" << endl;
	this->value = 0;
}

CShape::CShape(int aVal)
{
	cout << "CShape CTOR" << endl;
	this->value = aVal;
}

CShape::~CShape()
{
	cout << "CShape DTOR" << endl;
}

int CShape::GetBrush()
{
	return brush;
}

int CShape::GetVertices()
{
	return vertices;
}

void CShape::perform()
{
	;
}
