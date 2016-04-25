#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"
#include <vector>
#include <map>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Utils;


namespace Recollection_Test
{
	TEST_CLASS(Test_Collections)
	{
	public:

		TEST_METHOD(Vector_AddThreeTimes_Size3)
		{
			//arrange
			vector<int> tape;
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
			vector<int> tape;
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
			vector<int> tape;
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
			vector<int> tape;
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


		TEST_METHOD(Vector_AddThreeTimes_Front_0_Size3)
		{
			//arrange
			vector<int> tape;
			int expVal = 0;
			int expSize = 3;
			int rcVal = 0;

			//act
			tape.push_back(0);
			tape.push_back(1);
			tape.push_back(2);
			rcVal = tape.front();

			//assert
			Assert::AreEqual(expVal, rcVal);
			Assert::AreEqual(expSize, (int)tape.size());
		}

		TEST_METHOD(Vector_AddThreeTimes_First_0_Size3)
		{
			//arrange
			vector<int> tape;
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

		TEST_METHOD(Vector_AddThreeTimes_SampleArray_Auto_Size3)
		{
			//arrange
			auto tape = VariousFeatures::sampleArray();
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

		TEST_METHOD(Vector_Iterator_AddThreeTimes_SampleArray_Auto_Size3)
		{
			//arrange
			auto tape = VariousFeatures::sampleArray();
			int expVal = 0;
			int expSize = 3;
			int rcVal = 0;

			//act
			tape.push_back(0);
			tape.push_back(0);
			tape.push_back(0);
			for (auto it = tape.begin(); it < tape.end(); ++it)
				Assert::AreEqual(expVal, *it);

			//assert
			Assert::AreEqual(expSize, (int)tape.size());
		}

		TEST_METHOD(Vector_ForEach_True)
		{
			//arrange
			vint tape = { 0 ,1 ,2 ,3 ,4 };
			vint expTape = { 0 ,1 ,2 ,3 ,4 };
			bool resVal = true;
			int i = 0;

			//act
			for (auto it : tape)
				resVal = it == expTape[i++];

			//assert
			Assert::IsTrue(resVal);
		}

		TEST_METHOD(Map_Int_String_InitializerList_True)
		{
			//arrange
			map<int, string> inTape
			{
				{ 1,"jeden"},
				{ 2,"dwa"  },
				{ 3,"trzy" },
				{ 4,"cztery" },
				{ 5,"piec" }
			};

			vint expTape = { 1 ,2 ,3 ,4 ,5};
			bool resVal = true;
			int i = 0;

			//act
			for (auto it : inTape)
				resVal = it.first == expTape[i++];

			//assert
			Assert::IsTrue(resVal);
		}

		TEST_METHOD(Map_Auto_Auto_InitializerList_True)
		{
			//arrange
			map<int, string> inTape
			{
				{ 1,"jeden" },
				{ 2,"dwa" },
				{ 3,"trzy" },
				{ 4,"cztery" },
				{ 5,"piec" }
			};

			vint expTape = { 1 ,2 ,3 ,4 ,5 };
			bool resVal = true;
			int i = 0;
			//inTape.empty()

			//act
			for (auto it : inTape)
				resVal = it.first == expTape[i++];

			//assert
			Assert::IsTrue(resVal);
		}
	};
}