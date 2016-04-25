#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Templates\PackageTypeInline.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{		
	TEST_CLASS(Test_CTORS)
	{
	public:
		
		TEST_METHOD(VariousFeatures_Dynamically_CTOR_True)
		{
			//arrange
			VariousFeatures* tempObj = new VariousFeatures();

			//act

			//assert
			Assert::IsTrue(true);
		}

		TEST_METHOD(VariousFeatures_Dynamically_CTOR_WithoutParenthesis)
		{
			//arrange
			VariousFeatures* tempObj = new VariousFeatures;

			//act

			//assert
			Assert::IsTrue(true);
		}

		TEST_METHOD(VariousFeatures_Statically_CTOR_True)
		{
			//arrange
			VariousFeatures tempObj();

			//act

			//assert
			Assert::IsTrue(true);
		}

		TEST_METHOD(VariousFeatures_Statically_CTOR_WithoutParenthesis_True)
		{
			//arrange
			VariousFeatures tempObj;

			//act

			//assert
			Assert::IsTrue(true);
		}

		TEST_METHOD(Native_Int_Statically_CTOR_NotHaveDefaultValues)
		{
			//arrange
			int toAddVal0;
			int toAddVal1;

			//act

			//assert
			Assert::AreNotEqual(0, toAddVal0);
			Assert::AreNotEqual(0, toAddVal1);
		}

		TEST_METHOD(Native_Int_Statically_CTOR_WithValue)
		{
			//arrange
			int toAddVal0(0);
			int toAddVal1(0);

			//act

			//assert
			Assert::AreEqual(0, toAddVal0);
			Assert::AreEqual(0, toAddVal1);
		}

		TEST_METHOD(Native_Int_Dynamically_CTOR_NotHaveDefaultValues)
		{
			//arrange
			int* toAddVal0 = new int;
			int* toAddVal1 = new int;

			//act

			//assert
			Assert::AreNotEqual(0, *toAddVal0);
			Assert::AreNotEqual(0, *toAddVal1);
		}

		TEST_METHOD(Native_Int_Dynamically_CTOR_WithValues)
		{
			//arrange
			int* toAddVal0 = new int(2);
			int* toAddVal1 = new int(3);

			//act

			//assert
			Assert::AreEqual(2, *toAddVal0);
			Assert::AreEqual(3, *toAddVal1);
		}

		// Native_Int_Array_Statically_CTOR_True
		TEST_METHOD(Native_Float_Statically_CTOR_NotHaveDefaultValues)
		{
			//arrange
			float toAddVal0;
			float toAddVal1;

			//act

			//assert
			Assert::AreNotEqual((float)0, toAddVal0);
			Assert::AreNotEqual((float)0, toAddVal1);
		}

		// Native_Int_Array_Statically_CTOR_True
		TEST_METHOD(Native_Int_Array_Statically_CTOR_True)
		{
			//arrange
			int buffArray[2];
			int toAddVal0 = 0;
			int toAddVal1 = 1;

			//act
			buffArray[0] = toAddVal0;
			buffArray[1] = toAddVal1;

			//assert
			Assert::AreEqual(buffArray[0], toAddVal0);
			Assert::AreEqual(buffArray[1], toAddVal1);
		}

		// Native_Int_Array_Statically_CTOR_True
		TEST_METHOD(Native_pInt_Array_Statically_CTOR_True)
		{
			//arrange
			int* buffArray[2];
			int toAddVal0 = 0;
			int toAddVal1 = 1;

			//act
			buffArray[0] = &toAddVal0;
			buffArray[1] = &toAddVal1;

			//assert
			Assert::AreEqual(*buffArray[0], toAddVal0);
			Assert::AreEqual(*buffArray[1], toAddVal1);
		}

		TEST_METHOD(Native_Int_Array_Statically_CTOR_NoDefaultValues)
		{
			//arrange
			int buffArray[2];

			//act

			//assert
			Assert::AreNotEqual(0, buffArray[0]);
			Assert::AreNotEqual(0, buffArray[1]);
		}

		TEST_METHOD(Native_Int_Array_Dynamically_CTOR_True)
		{
			//arrange
			int* buffArray = new int[2];
			int toAddVal0 = 0;
			int toAddVal1 = 1;

			//act
			buffArray[0] = toAddVal0;
			buffArray[1] = toAddVal1;

			//assert
			Assert::AreEqual(buffArray[0], toAddVal0);
			Assert::AreEqual(buffArray[1], toAddVal1);
		}

		TEST_METHOD(Native_Int_Array_Dynamically_TwoDimensional_CTOR_True)
		{
			//arrange
			int buffArray[2][3];

			//act
			for (auto i = 0; i < 2; i++)
				for (auto j = 0; j < 3; j++)
					buffArray[i][j] = i + j;

			//assert
			Assert::AreEqual(buffArray[0][0], 0);
		}

		TEST_METHOD(Native_Int_Array_Statically_TwoDimensional_CTOR_True)
		{
			//arrange
			int** buffArray = new int*[2];
			int* toAddArray0 = new int[3];
			int* toAddArray1 = new int[3];

			//act
			buffArray[0] = toAddArray0;
			buffArray[1] = toAddArray1;
			for (auto i = 0; i < 2; i++)
				for (auto j = 0; j < 3; j++)
					buffArray[i][j] = i + j;

			//assert
			Assert::AreEqual(buffArray[0][0], 0);
		}

		TEST_METHOD(Pointer_InitializingList_InitConstVal_GetID_True)
		{
			//arrange
			VariousFeatures *obj1 = new VariousFeatures(1,2);
			int expVal = 2;
			int rcVal = -1;

			//act
			rcVal = obj1->GetID();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Object_InitializingList_forVector_InCTOR_True)
		{
			//arrange
			VariousFeatures obj1{ { 0,1,2,3 } };
			vector<int> tapeOut = { 0,1,2,3 };
			bool result = true;
			int i = 0;

			//act
			for (auto it = obj1.GetTapeBegin(); it < obj1.GetTapeEnd(); it++)
				result &= tapeOut[i++] == *it;

			//assert
			Assert::IsTrue(result);
		}

		TEST_METHOD(Object_InitializingList_InitConstVal_GetVal_True)
		{
			//arrange
			VariousFeatures obj1(1, 2);
			int expVal = 1;
			int rcVal = -1;

			//act
			rcVal = obj1.GetVal();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Object_InitializingList_InitStaticVal_GetCounterWithoutObject_True)
		{
			//arranges
			int expVal = 0;
			int rcVal = -1;

			//act
			rcVal = VariousFeatures::GetCounter();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Object_InitializingList_InitStaticVal_GetCounterWithObject_True)
		{
			//arrange
			VariousFeatures obj1(1, 2);
			int expVal = 0;
			int rcVal = -1;

			//act
			rcVal = obj1.GetCounter();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Object_InitializingList_InitStaticVal_GetCounterWithPointer_True)
		{
			//arrange
			auto obj1 = new VariousFeatures{ 1, 2 };
			int expVal = 0;
			int rcVal = -1;

			//act
			rcVal = obj1->GetCounter();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Pointer_CTOR_VectorWith_Braces)
		{
			//arrange
			auto obj = new vector<int>{ 0,1,2,3,4 };
			vector<int> expVal{ 0, 1, 2, 3, 4 };
			int i = 0;

			//act

			//assert
			for (auto it : *obj)
				Assert::AreEqual(expVal[i++], it);
		}

		TEST_METHOD(Object_CPackageType_CTOR_CopyCTOR_1)
		{
			//arrange
			int inVal = 1;
			CPackageTypeInline<int> obj{ inVal };
			int expVal = inVal;
			
			//act
			auto rcVal = obj.CopyValue(obj);

			//assert
			Assert::AreEqual(expVal, rcVal.GetValue());
			Assert::IsTrue(true);
		}

		TEST_METHOD(Ref_CPackageType_CTOR_CopyCTOR_1)
		{
			//arrange
			int inVal = 1;
			CPackageTypeInline<int> obj{ inVal };
			int expVal = inVal;

			//act
			auto rcVal = obj.CopyValueRef(obj);

			//assert
			Assert::AreEqual(expVal, rcVal.GetValue());
			Assert::IsTrue(true);
		}

		TEST_METHOD(Ref2_CPackageType_CTOR_CopyCTOR_1)
		{
			//arrange
			int inVal = 1;
			CPackageTypeInline<int> obj{ inVal };
			int expVal = inVal;

			//act
			CPackageTypeInline<int> rcVal = obj.CopyValueRef2(obj);

			//assert
			Assert::AreEqual(expVal, rcVal.GetValue());
			Assert::IsTrue(true);
		}

		TEST_METHOD(Pointers_CPackageType_CTOR_CopyCTOR_1)
		{
			//arrange
			int inVal = 1;
			CPackageTypeInline<int>* obj = new CPackageTypeInline<int>{ inVal };
			int expVal = inVal;

			//act
			auto rcVal = obj->CopyValue(obj);

			//assert
			Assert::AreEqual(expVal, rcVal->GetValue());
			delete rcVal;
			delete obj;
			Assert::IsTrue(true);
		}
		TEST_METHOD(Objects_CPackageType_EqualOperator_CopyCTOR_1)
		{
			//arrange
			int inVal = 1;
			int inVal2 = 1;
			CPackageTypeInline<int> obj{ inVal };
			CPackageTypeInline<int> obj2{ inVal2 };
			int expVal = inVal;

			//act
			obj2 = obj;

			//assert
			Assert::AreEqual(obj.GetValue(), obj2.GetValue());
			Assert::IsTrue(true);
		}
	};
}