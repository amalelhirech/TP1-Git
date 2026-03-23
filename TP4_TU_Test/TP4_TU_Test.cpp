#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../TP4_TU/TP4_TU.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TP4TUTest
{
	TEST_CLASS(TP4TUTest)
	{
	public:
		
		TEST_METHOD(TestEstPair)
		{
			Assert::AreEqual(estPair(4), 1)	;
		}

		TEST_METHOD(TestEstPair2)
		{
			Assert::AreEqual(estPair(7), 0);
		}

		TEST_METHOD(TestEstPair3)
		{
			Assert::AreEqual(estPair(0), 1);
		}

		TEST_METHOD(TestEstPair4)
		{
			Assert::AreEqual(estPair(-2), 1);
		}
	};
}
