#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "SomeClass.h"
#include "Utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(FriendShip)
	{
	public:

		TEST_METHOD(Friend_VariousFeatures_have_friend_SomeClass_readPrivateVal_1)
		{
			//arrange
			int expVal = 1;
			int rcVal = -1;
			VariousFeatures *initiatorOfFriendship = new VariousFeatures(1);
			SomeClass* someMan = new SomeClass();

			//act
			rcVal = someMan->showValFromVariousFeaturePrivateMethod(*initiatorOfFriendship);

			//assert
			Assert::AreEqual(expVal, rcVal);
		}
	};
}