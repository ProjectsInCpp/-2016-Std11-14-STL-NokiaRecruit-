#pragma once

#ifndef FilledShape_h
#define FilledShape_h

class CFilledShape
{
private:
	int filledBrush = 1;
protected:
	int filledSize = 1;
public:
	int filledVertices = 1;
	CFilledShape();
	~CFilledShape();
};

#endif