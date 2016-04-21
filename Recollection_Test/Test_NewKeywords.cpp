#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(NewKeywords)
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
	};
}