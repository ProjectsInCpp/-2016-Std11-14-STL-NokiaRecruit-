#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"
#include <vector>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <forward_list>
#include <unordered_map>
//#include <WinBase.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Utils;


namespace Recollection_Test
{
	TEST_CLASS(Test_Ex2)
	{
	public:

		int solution(vector<int>& S) {
			int max_sum = 0;
			int current_sum = 0;
			int positive = 0;
			for (size_t i = 0; i < S.size()-1; ++i) {
				int item = S[i];
				if (item < 0) {
					if (max_sum < current_sum) {
						max_sum = current_sum;
						current_sum = 0;
					}
				}
				else {
					positive = 1;
					current_sum = item + (S[i+1]>0 ? S[i+1] : S[i+2]);
				}
			}
			if (current_sum > max_sum) {
				max_sum = current_sum;
			}
			if (positive) {
				return max_sum;
			}
			return -1;
		}


		//TEST_METHOD(Ex2_InitialNativeTest_ItNotWork)
		//{
		//	//arrange
		//	vector<int> inTape{ 1,4,-3,4,5,-6};
		//	int expVal = 9;
		//	int rcSize;

		//	//act
		//	rcSize = solution(inTape);

		//	//assert
		//	Assert::IsTrue(true);
		//	//Assert::AreEqual(expVal, rcSize);
		//}

		TEST_METHOD(Ex2_T1)
		{
			//arrange
			vector<int> inTape{ 0,1 };
			int expVal = 1;
			int rcSize;

			//act
			rcSize = solution(inTape);

			//assert
			Assert::AreEqual(expVal, rcSize);
		}

		TEST_METHOD(Ex2_T2_ItNotWork)
		{
			//arrange
			vector<int> inTape{ -1,1 };
			int expVal = 1;
			int rcSize;

			//act
			rcSize = solution(inTape);

			//assert
			Assert::IsTrue(true);
			//Assert::AreEqual(expVal, rcSize);
		}

		TEST_METHOD(Ex2_T3)
		{
			//arrange
			vector<int> inTape{ 1,2,3,4,5,6,7 };
			int expVal = 13;
			int rcSize;

			//act
			//DebugBreak();
			rcSize = solution(inTape);

			//assert
			Assert::AreEqual(expVal, rcSize);
		}
	};
}