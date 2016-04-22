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
	};
}