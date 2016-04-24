#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Test_Pointers)
	{
	public:

		TEST_METHOD(Constant_Pointer_ChangePointedObj_False)
		{
			//arrange
			const VariousFeatures *obj1 = new VariousFeatures(1);
			VariousFeatures *obj2 = new VariousFeatures(2);
			int expVal = 1;
			int rcVal = -1;

			//act
			obj1 = obj2;
			
			// cannot be done
			//rcVal = obj1->GetVal();

			//assert
			Assert::AreNotEqual(expVal, rcVal);
		}

		TEST_METHOD(Refference_ToVal_ChangeValueByRef)
		{
			//arrange
			int inVal = 3;
			int &refToVal = inVal;
			int expVal = 1;
			int newVal = 1;

			//act
			refToVal = newVal;
			
			//assert
			Assert::AreEqual(expVal, inVal);
			Assert::AreEqual(expVal, refToVal);
		}

		TEST_METHOD(Pointer_ToVal_ChangeValueByPointer)
		{
			//arrange
			int inVal = 3;
			int *refToVal = &inVal;
			int expVal = 1;
			int newVal = 1;

			//act
			*refToVal = newVal;

			//assert
			Assert::AreEqual(expVal, inVal);
			Assert::AreEqual(expVal, *refToVal);
		}

		TEST_METHOD(Pointer_DefaultValue_Int_0)
		{
			//arrange
			int *obj = new int{};
			int expVal = 0;

			//act

			//assert
			Assert::AreEqual(expVal, *obj);
		}

		TEST_METHOD(Pointer_CTOR_With_Braces_Int_1)
		{
			//arrange
			int *obj = new int{1};
			int expVal = 1;

			//act

			//assert
			Assert::AreEqual(expVal, *obj);
		}

		TEST_METHOD(Object_CTOR_With_Braces_Int_1)
		{
			//arrange
			int obj{ 1 };
			int expVal = 1;

			//act

			//assert
			Assert::AreEqual(expVal, obj);
		}

		TEST_METHOD(Pointer_CTOR_With_Braces_Int_2)
		{
			//arrange
			int* obj{ new int(2) };
			int expVal = 2;

			//act

			//assert
			Assert::AreEqual(expVal, *obj);
		}

		TEST_METHOD(Pointer_DefaultValue_Float_0)
		{
			//arrange
			float *obj = new float{};
			float expVal = 0.0;

			//act

			//assert
			Assert::AreEqual(expVal, *obj);
		}

		TEST_METHOD(Pointer_DefaultValue_Double_0)
		{
			//arrange
			double *obj = new double{};
			double expVal = 0.0;

			//act

			//assert
			Assert::AreEqual(expVal, *obj);
		}

		TEST_METHOD(Pointer_DefaultValue_String_Empty)
		{
			//arrange
			string *obj = new string{};
			string expVal = "";

			//act

			//assert
			Assert::AreEqual(expVal, *obj);
		}

		TEST_METHOD(Pointer_DefaultValue_Char_Empty)
		{
			//arrange
			char *obj = new char{};
			char expVal = '\0';

			//act

			//assert
			Assert::AreEqual(expVal, *obj);
		}
	};
}