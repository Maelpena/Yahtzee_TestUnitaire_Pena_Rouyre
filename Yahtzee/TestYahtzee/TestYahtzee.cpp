#include "CppUnitTest.h"
#include "../main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestYahtzee
{
	TEST_CLASS(TestYahtzee)
	{

	public:
		TEST_METHOD(TestSum11343Return12)
		{
			int dice[5] = { 1, 1, 3, 4, 3 };
			Assert::AreEqual(12, SumDice(dice));
		}

		TEST_METHOD(TestValidDice66423ReturnTrue)
		{
			int dice[5] = { 6, 6, 4, 2, 3 };
			Assert::IsTrue(ValidDice(dice));
		}

		TEST_METHOD(TestValidDiceMoins16423ReturnFalse)
		{
			int dice[5] = { -1, 6, 4, 2, 3 };
			Assert::IsFalse(ValidDice(dice));
		}

		TEST_METHOD(TestValidDice86823ReturnFalse)
		{
			int dice[5] = { 8, 6, 8, 2, 3 };
			Assert::IsFalse(ValidDice(dice));
		}


		TEST_METHOD(TestOneDiceSum11531Return3)
		{
			int dice[5] = { 1, 1, 5, 3, 1 };
			Assert::AreEqual(3, OneDiceSum(dice));
		}

	};
}
