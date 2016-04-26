#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"
#include <vector>
#include <map>
#include <unordered_map>

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

		TEST_METHOD(Vector_OfIntPtrs_CopyCTOR)
		{
			//arrange

			vector<int*> tape;
			int *fstPtr = new int(0);
			int *sndPtr = new int(1);

			//act
			tape.push_back(fstPtr);
			tape.push_back(sndPtr);
			tape.pop_back();
			tape.pop_back();

			//assert
			Assert::IsTrue(true);
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

		TEST_METHOD(Map_Int_String_Insert_InitializerList_True)
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

			vint expTape = { 1 ,2 ,3 ,4 ,5,6 };
			bool resVal = true;
			int i = 0;

			//act
			inTape.insert({ 6, "szesc" });
			for (auto it : inTape)
				resVal = it.first == expTape[i++];

			//assert
			Assert::IsTrue(resVal);
		}

		TEST_METHOD(Map_Int_String_InsertDuplicate_Find_1_InitializerList_TwoValuesInKey_True)
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
			int searchedKey = 5;

			vector<string> rcVal;
			vector<string> expVal{ "piec"};
			int i = 0;
			bool endVal{ true };

			//act
			inTape.insert({5,"five"});
			auto elem = inTape.find(searchedKey);
			while (elem != inTape.end())
				rcVal.push_back((*elem++).second);
			
			//assert
			for (auto it = rcVal.cbegin(); it < rcVal.cend(); it++)
				endVal &= *it == expVal[i++];
				
			Assert::IsTrue(endVal);
		}

		TEST_METHOD(Map_Int_String_Find_1_True)
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
			int searchedKey = 1;
			string expVal{ "jeden" };
			string rcVal{ "" };

			//act
			rcVal = inTape.find(searchedKey)->second;

			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Map_Int_String_InsertDuplicate_Size_NotChanged)
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
			int expSize = inTape.size();
			int rcSize = 0;
			
			//act
			inTape.insert({ 5,"five" });
			rcSize = inTape.size();

			//assert

			Assert::AreEqual(expSize, rcSize);
		}
		TEST_METHOD(MultiMap_Int_String_InsertDuplicate_Size_Changed)
		{
			//arrange
			multimap<int, string> inTape
			{
				{ 1,"jeden" },
				{ 2,"dwa" },
				{ 3,"trzy" },
				{ 4,"cztery" },
				{ 5,"piec" }
			};
			int expSize = inTape.size()+1;
			int rcSize = 0;

			//act
			inTape.insert({ 5,"five" });
			rcSize = inTape.size();

			//assert

			Assert::AreEqual(expSize, rcSize);
		}

		TEST_METHOD(MultiMap_Int_String_AccessToValue)
		{
			//arrange
			multimap<int, string> inTape
			{
				{ 1,"jeden" },
				{ 2,"dwa" },
				{ 3,"trzy" },
				{ 4,"cztery" },
				{ 5,"piec" }
			};
			int expSize = inTape.size() + 1;
			int searchedKey = 5;
			int rcSize = 0;
			bool expVal = true;
			vector<string> rcTape{ };
			vector<string> expTape{ "piec", "five" };
			int i = 0;

			//act
			inTape.insert({ 5,"five" });
			auto it = inTape.find(searchedKey);
			while (it != inTape.cend())
				rcTape.push_back((*it++).second);

			for (auto const val : rcTape)
				expVal &= val == expTape[i++];

			//assert
			Assert::IsTrue(expVal);
		}

		TEST_METHOD(UnorderedMap_Int_String_InsertDuplicate_Size_Changed)
		{
			//arrange
			unordered_map<int, string> inTape
			{
				{ 1,"jeden" },
				{ 2,"dwa" },
				{ 3,"trzy" },
				{ 4,"cztery" },
				{ 5,"piec" }
			};
			int expSize = inTape.size();
			int rcSize = 0;

			//act
			inTape.insert({ 5,"five" });
			rcSize = inTape.size();

			//assert

			Assert::AreEqual(expSize, rcSize);
		}

		TEST_METHOD(List_PopFront_Init_123_Exp_23)
		{
			//arrange
			list<int> inTape{ 1,2,3 };
			bool resVal = true;

			//act
			inTape.pop_front();

			//assert
			resVal = std::equal(inTape.begin(), inTape.end(), initializer_list<int>{2,3}.begin());
			Assert::IsTrue(resVal);
		}

		TEST_METHOD(UnorderedMap_Int_String_AccessToValue)
		{
			//arrange
			unordered_map<int, string> inTape
			{
				{ 1,"jeden" },
				{ 2,"dwa" },
				{ 3,"trzy" },
				{ 4,"cztery" },
				{ 5,"piec" }
			};
			int expSize = inTape.size() + 1;
			int searchedKey = 5;
			int rcSize = 0;
			bool expVal = true;
			vector<string> rcTape{};
			vector<string> expTape{ "piec", "five" };
			int i = 0;

			//act
			inTape.insert({ 5,"five" });
			auto it = inTape.find(searchedKey);
			while (it != inTape.cend())
				rcTape.push_back((it++)->second);

			for (auto const val : rcTape)
				expVal &= val == expTape[i++];

			//assert
			Assert::IsTrue(expVal);
		}

	};
}