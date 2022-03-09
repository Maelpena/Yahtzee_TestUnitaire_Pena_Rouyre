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

		TEST_METHOD(TestDesValide66423ReturnTrue)
		{
			int dice[5] = { 6, 6, 4, 2, 3 };
			Assert::IsTrue(ValidDice(dice));
		}

		TEST_METHOD(TestDesValideMoins16423ReturnFalse)
		{
			int dice[5] = { -1, 6, 4, 2, 3 };
			Assert::IsFalse(ValidDice(dice));
		}

	};
}
