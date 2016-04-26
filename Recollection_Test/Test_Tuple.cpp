#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Templates\PackageTypeInline.h"
#include <tuple>
#include <map>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Test_Tuple)
	{
	public:

		TEST_METHOD(Tuple_String_Int_GetFst_True)
		{
			//arrange
			string inVal = "pawel";
			int inInt = 3;
			tuple<string, int> val{ inVal, inInt };

			//act
			string fst;
			fst = get<0>(val);

			//assert
			Assert::AreEqual(inVal, fst);
		}

		TEST_METHOD(Tuple_String_Int_GetAndSetFst_True)
		{
			//arrange
			string inVal = "pawel";
			string inValSecond = "marcin";
			string expValSecond = "marcin";
			string rcVal;
			int inInt = 3;
			tuple<string, int> val{ inVal, inInt };

			//act
			get<0>(val) = inValSecond;
			rcVal = get<0>(val);
			

			//assert
			Assert::AreEqual(expValSecond, rcVal);
		}

		TEST_METHOD(Tuple_String_GetAndSetFst_True)
		{
			//arrange
			string inVal = "pawel";
			string inValSecond = "marcin";
			string rcVal;
			string expVal = inValSecond;
			tuple<string> val{ inVal };

			//act
			get<0>(val) = inValSecond;
			rcVal = get<0>(val);


			//assert
			Assert::AreEqual(expVal, rcVal);
		}

		TEST_METHOD(Tuple_String_Int_GetSnd_True)
		{
			//arrange
			string inVal = "pawel";
			int inInt = 3;
			tuple<string, int> val{ inVal, inInt };

			//act
			int snd;
			snd = get<1>(val);

			//assert
			Assert::AreEqual(inInt, snd);
		}

		TEST_METHOD(Tuple_String_Int_OwnObj_GetSecond_True)
		{
			//arrange
			string inVal = "pawel";
			VariousFeatures inObj(4);
			int inInt = 3;
			tuple<string, int, VariousFeatures> val{ inVal, inInt ,inObj };

			//act
			VariousFeatures third = get<2>(val);

			//assert
			Assert::AreEqual(inObj.GetVal(), third.GetVal());
		}

		TEST_METHOD(Tuple_String_Map_GetSecond_True)
		{
			//arrange
			string inVal = "pawel";
			int i = 0;
			bool resVal = true;
			map<int, string> inMap =
			{
				{0, "zero"},
				{1, "jeden"},
				{2, "dwa"}
			};
			tuple<string, map<int, string>> val{ inVal, inMap };

			//act
			map<int, string> snd = get<1>(val);

			//assert
			resVal = std::equal(inMap.begin(), inMap.end(), snd.begin());
				
			Assert::IsTrue(resVal);
		}

		TEST_METHOD(Tuple_String_Int_OwnPtr_GetSecond_True)
		{
			//arrange
			string inVal = "pawel";
			VariousFeatures* inObj = new VariousFeatures(4);
			int inInt = 3;
			tuple<string, int, VariousFeatures*> val{ inVal, inInt ,inObj };

			//act
			VariousFeatures* third = get<2>(val);

			//assert
			Assert::AreEqual(inObj->GetVal(), third->GetVal());
		}

		TEST_METHOD(Tuple_String_Int_Tie_True)
		{
			//arrange
			string inVal = "pawel";
			int inInt = 3;
			tuple<string, int> val{ inVal, inInt };

			//act
			string fst;
			int snd;
			tie(fst, snd) = val;

			//assert
			Assert::AreEqual(inVal, fst);
			Assert::AreEqual(inInt, snd);
		}
	};
}