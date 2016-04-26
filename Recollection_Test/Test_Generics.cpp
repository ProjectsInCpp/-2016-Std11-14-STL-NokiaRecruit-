#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "SomeClass.h"
#include "Templates\PackageTypeInline.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Test_Generics)
	{
	public:

		TEST_METHOD(SomeClass_genericMethod_IntTrue)
		{
			//arrange
			SomeClass tempObj;
			int expVal = 3;

			//act
			int rcVal = 3;

			//assert
			Assert::AreEqual(expVal, rcVal);
		}
	};
}