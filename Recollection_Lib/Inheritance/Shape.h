#pragma once

#ifndef Shape_h
#define Shape_h

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
	~CShape();
};

#endif

