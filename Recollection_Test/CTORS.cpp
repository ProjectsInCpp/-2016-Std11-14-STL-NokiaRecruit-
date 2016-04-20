#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{		
	TEST_CLASS(CTORS)
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

		TEST_METHOD(VariousFeatures_Statically_CTOR_True)
		{
			//arrange
			VariousFeatures tempObj();

			//act

			//assert
			Assert::IsTrue(true);
		}

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

		TEST_METHOD(NativeArray_Dynamically_CTOR_True)
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

		TEST_METHOD(NativeArray_TwoDimensional_Dynamically_CTOR_True)
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

		TEST_METHOD(NativeArray_TwoDimensional_Statically_CTOR_True)
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

	};
}