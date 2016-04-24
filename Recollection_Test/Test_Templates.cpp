#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "SomeClass.h"
#include "Utils.h"
#include "Templates\PackageTypeInline.h"
#include "Templates\PackageType.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Test_Templates)
	{
	public:
		TEST_METHOD(CPackageTypeInline_Value_Setter_Getter_1)
		{
			//arrange
			int expVal = 1;
			int rcVal = -1;
			int inVal = 1;
			CPackageTypeInline<int> obj;

			//act
			obj.SetValue(inVal);
			rcVal = obj.GetValue();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(CPackageTypeInline_Ptr_Setter_Getter_1)
		{
			//arrange
			int expVal = 1;
			int rcVal = -1;
			int inVal = 1;
			CPackageTypeInline<int>* obj = new CPackageTypeInline<int>();

			//act
			obj->SetPtr(inVal);
			rcVal = obj->GetPtr();

			//assert
			Assert::AreEqual(expVal, rcVal);
			delete obj;
		}


		//TEST_METHOD(CPackageType_Ptr_CTOR_Getter_1)
		//{
		//	//arrange
		//	int expVal = 1;
		//	int rcVal = -1;
		//	int inVal = 1;
		//	CPackageType<int>* obj = new CPackageType<int>(inVal);

		//	//act
		//	rcVal = obj->GetPtr();

		//	//assert
		//	Assert::AreEqual(expVal, rcVal);
		//	delete obj;
		//}

		TEST_METHOD(CPackageType_Ptr_Setter_Getter_1)
		{
			//arrange
			int expVal = 1;
			int rcVal = -1;
			int inVal = 1;
			CPackageType<int>* obj = new CPackageType<int>();

			//act
			//obj->SetPtr(inVal);
			//rcVal = obj->GetPtr();

			//assert
			Assert::AreEqual(expVal, rcVal);
			delete obj;
		}
	};
}