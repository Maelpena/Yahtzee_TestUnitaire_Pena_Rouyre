#include "CppUnitTest.h"
#include "../main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestYahtzee
{
	TEST_CLASS(TestYahtzee)
	{

	public:
		TEST_METHOD(TestSomme11343Renvoie12)
		{
			int des[5] = { 1, 1, 3, 4, 3 };
			Assert::AreEqual(12, SommeDes(des));
		}

		TEST_METHOD(TestDesValide66423RenvoieTrue)
		{
			int des[5] = { 6, 6, 4, 2, 3 };
			Assert::IsTrue(DesValid(des));

		}


	};
}
