#include "CppUnitTest.h"
#include "../main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestYahtzee
{
	TEST_CLASS(TestYahtzee)
	{
		int des[6] = { 1, 1, 3, 4, 1, 2 };

	public:
		TEST_METHOD(TestSomme113412Renvoie12)
		{
			Assert::AreEqual(12, SommeDes(des));
		}
	};
}
