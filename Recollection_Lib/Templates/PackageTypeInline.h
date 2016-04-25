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
		this->mPtr = new T();
	}
	CPackageTypeInline(const CPackageTypeInline& aVal)
	{
		this->mVal = aVal.mVal;
		this->mPtr = new T(*aVal.mPtr);
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
	CPackageTypeInline& CopyValue(CPackageTypeInline aVal)
	{
		return *(new CPackageTypeInline<T>(aVal));
	}
	CPackageTypeInline& CopyValueRef(CPackageTypeInline& aVal)
	{
		return *(new CPackageTypeInline<T>(aVal));
	}
	CPackageTypeInline& CopyValueRef2(CPackageTypeInline& aVal)
	{
		return aVal;
	}
	CPackageTypeInline* CopyValue(CPackageTypeInline* aVal)
	{
		return new CPackageTypeInline<T>(*aVal);
	}
	void SetPtr(const T& aPtr)
	{
		this->mPtr = new T(aPtr);
	}
	const T& GetPtr()
	{
		return *mPtr;
	}
	CPackageTypeInline& operator= (CPackageTypeInline& aVal)
	{
		return CPackageTypeInline<T>(aVal);
	}
};

