#include "stdafx.h"
#include "PublicInheritance.h"


CPublicInheritance::CPublicInheritance() : CShape()
{
}


CPublicInheritance::~CPublicInheritance()
{
}

int CPublicInheritance::GetPublicVerticesFromFather()
{
	return this->vertices;
}
