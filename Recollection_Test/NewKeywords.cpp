#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(NewKeywords)
	{
	public:

		TEST_METHOD(NativeArray_Statically_CTOR_True)
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

	};
}