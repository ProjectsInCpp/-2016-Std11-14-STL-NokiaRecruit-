#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Utils;

namespace Recollection_Test
{
	TEST_CLASS(Test_Functions)
	{
	public:

		TEST_METHOD(VariousFeatures_DefaultArguments_AllPassed_50)
		{
			//arrange
			int expVal = 50;
			int inVal1 = 20;
			int inVal2 = 30;
			int rcVal;

			//act
			rcVal = VariousFeatures::suma(inVal1, inVal2);

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(VariousFeatures_ChangeVal_ConstantMethod_0)
		{
			//arrange
			int expVal = 0;
			int rcVal;

			//act
			rcVal = (new VariousFeatures)->changeValAndReturnByRef(3);

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(VariousFeatures_ChangeValByRef_StaticMethod_0)
		{
			//arrange
			int outVal = 3;
			int initVal = 0;
			int expVal = 3;

			//act
			VariousFeatures::changeValAndReturnByRef(outVal, initVal);

			//assert
			Assert::AreEqual(expVal, initVal);
		}

		TEST_METHOD(VariousFeatures_ChangeValByPointer_StaticMethod_0)
		{
			//arrange
			int outVal = 3;
			int* initVal = new int(0);
			int expVal = 3;

			//act
			VariousFeatures::changeValAndReturnWithPointer(outVal, initVal);

			//assert
			Assert::AreEqual(expVal, *initVal);
		}

	};
}