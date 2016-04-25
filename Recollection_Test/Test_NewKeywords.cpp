#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"
#include <iso646.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Test_NewKeywords)
	{
	public:

		TEST_METHOD(NativeArray_ConstExpr_CTOR_True)
		{
			//arrange
			int buffArray[Utils::ConstExpr()];
			int toAddVal0 = 0;
			int toAddVal1 = 1;
			int toAddVal2 = 2;

			//act
			buffArray[0] = toAddVal0;
			buffArray[1] = toAddVal1;
			buffArray[2] = toAddVal2;

			//assert
			Assert::AreEqual(buffArray[0], toAddVal0);
			Assert::AreEqual(buffArray[1], toAddVal1);
			Assert::AreEqual(buffArray[2], toAddVal2);
		}

		TEST_METHOD(VariousFeatures_ConstVar_GetConstID_True)
		{
			//arrange
			VariousFeatures* temp = new VariousFeatures();
			int expVal = 0;
			int rcVal = -1;

			//act
			rcVal = temp->GetID();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Bools_Not_true)
		{
			//arrange
			bool inVal1 = false;
			bool rcVal = false;
			bool expVal = true;

			//act
			rcVal = not inVal1;

			//assert
			Assert::IsTrue(rcVal);
		}

		TEST_METHOD(Integers_NotEqual_true)
		{
			//arrange
			int inVal1 = 0;
			int inVal2 = 1;
			int rcVal = false;
			bool expVal = true;

			//act
			rcVal = inVal1 not_eq inVal2;

			//assert
			Assert::IsTrue(rcVal);
		}
	};
}