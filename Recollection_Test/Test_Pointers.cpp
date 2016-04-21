#include "stdafx.h"
#include "CppUnitTest.h"
#include "VariousFeatures.h"
#include "Utils.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Recollection_Test
{
	TEST_CLASS(Pointers)
	{
	public:

		TEST_METHOD(Constant_Pointer_ChangePointedObj_False)
		{
			//arrange
			const VariousFeatures *obj1 = new VariousFeatures(1);
			VariousFeatures *obj2 = new VariousFeatures(2);
			int expVal = 1;
			int rcVal = -1;

			//act
			obj1 = obj2;
			
			// cannot be done
			//rcVal = obj1->GetVal();

			//assert
			Assert::AreNotEqual(expVal, rcVal);
		}
	};
}