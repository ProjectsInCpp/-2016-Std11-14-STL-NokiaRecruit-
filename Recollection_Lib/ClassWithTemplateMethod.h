#pragma once
#ifndef ClassWithTemplateMethod_h
#define ClassWithTemplateMethod_h

class ClassWithTemplateMethod
{
public:
	ClassWithTemplateMethod()
	{
	}
	~ClassWithTemplateMethod()
	{

	}
	template <typename T>
	const T& GetGeneric(const T& aVal)
	{
		return aVal;
	}
};


#endif