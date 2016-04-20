#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace Recollection_Test
{
	TEST_CLASS(Collections)
	{
	public:

		TEST_METHOD(Vector_AddThreeTimes_Size3)
		{
			//arrange
			std::vector<int> tape;
			int expVal = 3;

			//act
			tape.push_back(0);
			tape.push_back(1);
			tape.push_back(2);

			//assert
			Assert::AreEqual(expVal, (int)tape.size());
		}

		TEST_METHOD(Vector_AddThreeTimes_PeekLast_2)
		{
			//arrange
			std::vector<int> tape;
			int expVal = 2;
			int rcVal = 0;

			//act
			tape.push_back(0);
			tape.push_back(1);
			tape.push_back(2);
			rcVal = tape.at(tape.size() - 1);

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Vector_AddThreeTimes_PeekLastWithParenthesisOperator_2)
		{
			//arrange
			std::vector<int> tape;
			int expVal = 2;
			int rcVal = 0;

			//act
			tape.push_back(0);
			tape.push_back(1);
			tape.push_back(2);
			rcVal = tape[tape.size() - 1];

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Vector_AddThreeTimes_PeekLast_2_Size3)
		{
			//arrange
			std::vector<int> tape;
			int expVal = 2;
			int expSize = 3;
			int rcVal = 0;

			//act
			tape.push_back(0);
			tape.push_back(1);
			tape.push_back(2);
			rcVal = tape.back();

			//assert
			Assert::AreEqual(expVal, rcVal);
			Assert::AreEqual(expSize, (int)tape.size());
		}
	};
}