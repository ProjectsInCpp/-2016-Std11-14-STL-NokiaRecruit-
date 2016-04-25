#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"
#include <algorithm>
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Utils;


namespace Recollection_Test
{
	TEST_CLASS(Test_Lambdas)
	{
		TEST_METHOD(Lambda_Sort_Vector_ForEach_Check_True)
		{
			//arrange
			vint tape = { 5,2,1,0,3,4 };
			vint outTape = { 0, 1, 2, 3, 4, 5 };
			bool resVal = true;
			int i = 0;

			//act
			sort(tape.begin(),tape.end(),
				[](auto &lVal, auto &rVal)
			{
				return lVal < rVal;
			});

			for (auto it : outTape)
				resVal &= it == tape[i++];

			//assert
			Assert::IsTrue(resVal);
		}
	};
}