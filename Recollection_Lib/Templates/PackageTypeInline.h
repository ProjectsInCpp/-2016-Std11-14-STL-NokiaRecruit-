#pragma once
template < typename T>
class CPackageTypeInline
{
private:
	T mVal;
	T* mPtr = nullptr;
public:
	//CPackageType(T aVal);
	~CPackageTypeInline()
	{
		delete mPtr;
	}
	void SetValue(const T& aVal)
	{
		this->mVal = aVal;
	}
	const T& GetValue()
	{
		return mVal;
	}

	void SetPtr(const T& aPtr)
	{
		this->mPtr = new T(aPtr);
	}
	const T& GetPtr()
	{
		return *mPtr;
	}
};

