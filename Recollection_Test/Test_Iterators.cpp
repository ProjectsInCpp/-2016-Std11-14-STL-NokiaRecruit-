#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Utils;


namespace Recollection_Test
{
	TEST_CLASS(Test_Iterators)
	{
	public:

		TEST_METHOD(Vector_Iterator_InititlizingList_Auto_True)
		{
			//arrange
			vector<int> tape{ 0,1,2,3,4,5 };
			vector<int> expVals{ 0,1,2,3,4,5 };
			bool res = true;
			int i = 0;

			//act
			for (auto it = tape.begin(); it != tape.end(); it++)
				res = expVals[i++] == *it;

			//assert
			Assert::IsTrue(res);
		}

		TEST_METHOD(Vector_ReverseIterator_InititlizingList_Auto_True)
		{
			//arrange
			vector<int> tape{ 0,1,2,3,4,5 };
			vector<int> expVals{ 5,4,3,2,1,0 };
			bool res = true;
			int i = 0;

			//act
			for (auto it = tape.rbegin(); it != tape.rend(); it++)
				res = expVals[i++] == *it;

			//assert
			Assert::IsTrue(res);
		}

		TEST_METHOD(Vector_Using_ReverseIterator_InititlizingList_Auto_True)
		{
			//arrange
			vint tape{ 0,1,2,3,4,5 };
			vint expVals{ 5,4,3,2,1,0 };
			bool res = true;
			int i = 0;

			//act
			for (auto it = tape.rbegin(); it != tape.rend(); it++)
				res = expVals[i++] == *it;

			//assert
			Assert::IsTrue(res);
		}
	};
}