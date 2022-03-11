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

		TEST_METHOD(TestTwoDiceSum12241Return2)
		{
			int dice[5] = { 1, 2, 4, 4, 1 };
			Assert::AreEqual(2, TwoDiceSum(dice));
		}

		TEST_METHOD(TestThreeDiceSum12241Return12)
		{
			int dice[5] = { 1, 3, 3, 3, 3 };
			Assert::AreEqual(12, ThreeDiceSum(dice));
		}

		TEST_METHOD(TestAtLeastThreeOneDice11211Return4)
		{
			int dice[5] = { 1, 1, 2, 1, 1 };
			Assert::AreEqual(4, ThreeOneDiceSum(dice));
		}
		
		TEST_METHOD(TestAtLeastThreeTwoDice11222Return6)
		{
			int dice[5] = { 1, 1, 2, 2, 2 };
			Assert::AreEqual(6, ThreeTwoDiceSum(dice));
		}

		TEST_METHOD(TestAtLeastFourOneDice11116Return4)
		{
			int dice[5] = { 1, 1, 1, 1, 6 };
			Assert::AreEqual(4, FourOneDiceSum(dice));
		}

		TEST_METHOD(TestAtLeastFourTwoDice42222Return8)
		{
			int dice[5] = { 4, 2, 2, 2, 2 };
			Assert::AreEqual(8, FourTwoDiceSum(dice));
		}

		TEST_METHOD(TestYahtzeeOfTwo22222Return50)
		{
			int dice[5] = { 2, 2, 2, 2, 2 };
			Assert::AreEqual(50, YahtzeeTwo(dice));
		}

		TEST_METHOD(TestYahtzeeOfThree33333Return50)
		{
			int dice[5] = { 3, 3, 3, 3, 3 };
			Assert::AreEqual(50, YahtzeeThree(dice));
		}

		TEST_METHOD(TestFullOfThreeAndTwo22333Return50)
		{
			int dice[5] = { 2, 2, 3, 3, 3 };
			Assert::AreEqual(25, FullHouse(dice));
		}

		TEST_METHOD(TestFullOfThreeAndTwo44455Return25)
		{
			int dice[5] = { 4, 4, 4, 5, 5 };
			Assert::AreEqual(25, FullHouse(dice));
		}

		TEST_METHOD(TestFull32333Return25)
		{
			int dice[5] = { 3, 2, 3, 3, 3 };
			Assert::AreEqual(0, FullHouse(dice));
		}

		TEST_METHOD(TestSmallStraight52433Return25)
		{
			int dice[5] = { 3, 2, 3, 3, 3 };
			Assert::AreEqual(30, FullHouse(dice));
		}

	};
}
