#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Inheritance\Shape.h"
#include "Inheritance\PublicInheritance.h"
#include "Inheritance\PrivateInheritance.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Test_CShape)
	{
	public:
		TEST_METHOD(CShape_Dynamically_PrivateMemberBrushInitializedINHeader_1)
		{
			//arrange
			CShape* tempObj = new CShape();
			int expVal = 1;
			int rcVal = -1;

			//act
			rcVal = tempObj->GetBrush();

			//assert
			Assert::AreEqual(expVal, rcVal);
		}
	};
}