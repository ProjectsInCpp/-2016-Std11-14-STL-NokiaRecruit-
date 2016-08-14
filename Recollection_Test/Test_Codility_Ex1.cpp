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

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
using namespace Utils;


namespace Recollection_Test
{
	TEST_CLASS(Test_Ex1)
	{
	public:

		int solution1(vector<int> &A) {
			int rcVal = subSolution(A, 0, 0, false);
			if (rcVal> A.size())
				return rcVal - 1;
			else
				return rcVal;
		}

int subSolution(vector<int> &A, int idxPrev, int idx, bool loop)
{
	if (idx >= 0)
		if (A[idx] == -1 || idx >= (A.size() - 1) && !loop)
			return 1 + subSolution(A, idx, A[idxPrev], true);
		else if (A[idxPrev] == -1 && loop)
			return 1;
		else
			return 1 + subSolution(A, idx++, idx, false);
	else
		return 0;
}

		TEST_METHOD(Ex1_InitialNativeTest)
		{
			//arrange
			vector<int> inTape{ 1,4,-1,3,2 };
			int expSize = 4;
			int rcSize;

			//act
			rcSize = solution1(inTape);

			//assert
			Assert::AreEqual(expSize, rcSize);
		}

		TEST_METHOD(Ex1_Only_m1)
		{
			//arrange
			vector<int> inTape{ -1 };
			int expSize = 1;
			int rcSize;

			//act
			rcSize = solution1(inTape);

			//assert
			Assert::AreEqual(expSize, rcSize);
		}

		TEST_METHOD(Ex1_Only_123m1)
		{
			//arrange
			vector<int> inTape{ 0,-1 };
			int expSize = 2;
			int rcSize;

			//act
			rcSize = solution1(inTape);

			//assert
			Assert::AreEqual(expSize, rcSize);
		}
	};
}