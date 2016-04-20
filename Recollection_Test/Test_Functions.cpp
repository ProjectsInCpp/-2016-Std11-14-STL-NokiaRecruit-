#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Functions)
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
			Assert::AreEqual(rcVal, expVal);
		}
	};
}