#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{		
	TEST_CLASS(CTORS)
	{
	public:
		
		TEST_METHOD(VariousFeatures_Dynamically_CTOR_True)
		{
			//arrange
			VariousFeatures* tempObj = new VariousFeatures();

			//act

			//assert
			Assert::IsTrue(true);
		}

		TEST_METHOD(VariousFeatures_Statically_CTOR_True)
		{
			//arrange
			VariousFeatures tempObj();

			//act

			//assert
			Assert::IsTrue(true);
		}

	};
}