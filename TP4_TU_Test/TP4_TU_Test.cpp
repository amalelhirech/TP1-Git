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

		// estPair 
		
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

		TEST_METHOD(TestEstPair5)
		{
			Assert::AreEqual(estPair(-3), 0);
		}

		// max2

		TEST_METHOD(TestMax2)
		{
			Assert::AreEqual(max2(5, 3), 5);
		}

		TEST_METHOD(TestMax2_2)
		{
			Assert::AreEqual(max2(3, 5), 5);
		}

		TEST_METHOD(TestMax2_3)
		{
			Assert::AreEqual(max2(-1, -8), -1);
		}

		TEST_METHOD(TestMax2_4)
		{
			Assert::AreEqual(max2(4, 4), 4);
		}
		
		// Test factorielle 

		TEST_METHOD(TestFactorielle)
		{
			Assert::AreEqual(factorielle(0), 1);
		}

		TEST_METHOD(TestFactorielle1)
		{
			Assert::AreEqual(factorielle(1), 1);
		}

		TEST_METHOD(TestFactorielle3)
		{
			Assert::AreEqual(factorielle(4), 24);
		}

		TEST_METHOD(TestFactorielle4)
		{
			Assert::AreEqual(factorielle(5), 120);
		}

		TEST_METHOD(TestFactorielle5)
		{
			Assert::AreEqual(factorielle(-3), 0);
		}

		// 6 Test majuscules 

		TEST_METHOD(TestContientMajuscule)
		{
			Assert::AreEqual(contientMajuscule("bonjour"), 0);
		}

		TEST_METHOD(TestContientMajuscule2)
		{
			Assert::AreEqual(contientMajuscule("BonJour"), 1);
		}

		TEST_METHOD(TestContientMajuscule3)
		{
			Assert::AreEqual(contientMajuscule("ABC"), 1);
		}

		TEST_METHOD(TestContientMajuscule4)
		{
			Assert::AreEqual(contientMajuscule(""), 0);
		}

		TEST_METHOD(TestContientMajuscule5)
		{
			Assert::AreEqual(contientMajuscule(NULL), 0);
		}

		// Test divisionExacte 

		TEST_METHOD(TestDivisionExacte)
		{
			Assert::AreEqual(divisionExacte(10,2), 1);
		}

		TEST_METHOD(TestDivisionExacte2)
		{
			Assert::AreEqual(divisionExacte(10, 3), 0);
		}

		TEST_METHOD(TestDivisionExact3)
		{
			Assert::AreEqual(divisionExacte(0, 5), 1);
		}

		TEST_METHOD(TestDivisionExacte4)
		{
			Assert::AreEqual(divisionExacte(10, 0), 0);
		}

		// Test sommeTableau

		TEST_METHOD(TestSommeTableaux)

		{
			int tab[] = { 1, 2, 3 };
			Assert::AreEqual(sommeTableau(tab, 3), 6);
		}
	};
}
