#pragma once
template < typename T>
class CPackageTypeInline
{
private:
	T mVal;
	T* mPtr = nullptr;
public:
	CPackageTypeInline()
	{
		this->mVal = 0;
		this->mPtr = new T();
	}
	CPackageTypeInline(const T& aVal)
	{
		this->mVal = aVal;
		this->mPtr = nullptr;
	}
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

