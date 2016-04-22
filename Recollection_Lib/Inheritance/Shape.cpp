#include "stdafx.h"
#include "Shape.h"

CShape::CShape()
{
	cout << "CShape CTOR" << endl;
}

CShape::CShape(int aVal)
{
	cout << "CShape CTOR" << endl;
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
