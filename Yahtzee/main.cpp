#include <algorithm>  
#include <iostream>  

int SumDice(int des[5] )
{
	int result = 0;
	for (size_t i = 0; i < 5; i++)
	{
		result += des[i];
	}
	return result;
}

bool ValidValue(int value)
{
	if (value < 1 || value > 6)
		return false;
	return true;
}

bool ValidDice(int dice[5])
{
	for (size_t i = 0; i < 5; i++)
	{
		if (!ValidValue(dice[i]))
			return false;
	}

	return true;
	
}

int SameDiceSumForValue(int dice[5], int value)
{
	int result = 0;
	for (size_t i = 0; i < 5; i++)
	{
		if (dice[i] == value)
		{
			result += value;
		}
	}
	return result;
}

int OneDiceSum(int dice[5])
{
	return SameDiceSumForValue(dice, 1);
}

int TwoDiceSum(int dice[5])
{
	return SameDiceSumForValue(dice, 2);
}

int ThreeDiceSum(int dice[5])
{
	return SameDiceSumForValue(dice, 3);
}

int FourDiceSum(int dice[5])
{
	return SameDiceSumForValue(dice, 4);
}

int FiveDiceSum(int dice[5])
{
	return SameDiceSumForValue(dice, 5);
}

int SixDiceSum(int dice[5])
{
	return SameDiceSumForValue(dice, 6);
}

int ThreeOfAKindForValue(int dice[5], int value)
{
	int diceCount = 0;
	int result = 0;

	for (size_t i = 0; i < 5; i++)
	{
		if (dice[i] == value)
		{
			diceCount++;
			result += value;

		}
	}

	if (diceCount >= 3)
		return result;
	return 0;
}

int ThreeOneDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 1);
}

int ThreeTwoDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 2);
}

int ThreeThreeDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 3);
}

int ThreeFourDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 4);
}

int ThreeFiveDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 5);
}

int ThreeSixDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 6);
}

int ThreeOfAKindCaller(int dice[5])
{
	int value = 0;
	if (ThreeOneDiceSum(dice) > value)
		value = ThreeOneDiceSum(dice);
	if (ThreeTwoDiceSum(dice) > value)
		value = ThreeTwoDiceSum(dice);
	if (ThreeThreeDiceSum(dice) > value)
		value = ThreeThreeDiceSum(dice);
	if (ThreeFourDiceSum(dice) > value)
		value = ThreeFourDiceSum(dice);
	if (ThreeFiveDiceSum(dice) > value)
		value = ThreeFiveDiceSum(dice);
	if (ThreeSixDiceSum(dice) > value)
		value = ThreeSixDiceSum(dice);

	return value;
}
int FourOfAKindForValue(int dice[5], int value)
{
	int diceCount = 0;
	int result = 0;

	for (size_t i = 0; i < 5; i++)
	{
		if (dice[i] == value)
		{
			diceCount++;
			result += value;

		}
	}

	if (diceCount >= 4)
		return result;
	return 0;
}

int FourOneDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 1);
}

int FourTwoDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 2);
}

int FourThreeDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 3);
}
int FourFourDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 4);
}
int FourFiveDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 5);
}
int FourSixDiceSum(int dice[5])
{
	return ThreeOfAKindForValue(dice, 6);
}

int FourOfAKindCaller(int dice[5])
{
	int value = 0;
	if (FourOneDiceSum(dice) > value)
		value = FourOneDiceSum(dice);
	if (FourTwoDiceSum(dice) > value)
		value = FourTwoDiceSum(dice);
	if (FourThreeDiceSum(dice) > value)
		value = FourThreeDiceSum(dice);
	if (FourFourDiceSum(dice) > value)
		value = FourFourDiceSum(dice);
	if (FourFiveDiceSum(dice) > value)
		value = FourFiveDiceSum(dice);
	if (FourSixDiceSum(dice) > value)
		value = FourSixDiceSum(dice);

	return value;
}

int YahtzeeForValue(int dice[5], int value)
{
	int diceCount = 0;

	for (size_t i = 0; i < 5; i++)
	{
		if (dice[i] == value)
		{
			diceCount++;
		}
	}

	if (diceCount == 5)
		return 50;
	return 0;
}

int YahtzeeOne(int dice[5])
{
	return YahtzeeForValue(dice, 1);
}

int YahtzeeTwo(int dice[5])
{
	return YahtzeeForValue(dice, 2);
}

int YahtzeeThree(int dice[5])
{
	return YahtzeeForValue(dice, 3);
}

int YahtzeeFour(int dice[5])
{
	return YahtzeeForValue(dice, 4);
}

int YahtzeeFive(int dice[5])
{
	return YahtzeeForValue(dice, 5);
}

int YahtzeeSix(int dice[5])
{
	return YahtzeeForValue(dice, 6);
}

int YahtzeeOfAKindCaller(int dice[5])
{
	int value = 0;
	if (YahtzeeOne(dice) > value)
		value = YahtzeeOne(dice);
	if (YahtzeeTwo(dice) > value)
		value = YahtzeeTwo(dice);
	if (YahtzeeThree(dice) > value)
		value = YahtzeeThree(dice);
	if (YahtzeeFour(dice) > value)
		value = YahtzeeFour(dice);
	if (YahtzeeFive(dice) > value)
		value = YahtzeeFive(dice);
	if (YahtzeeSix(dice) > value)
		value = YahtzeeSix(dice);

	return value;
}

int FullHouse(int dice[5])
{

	int firstDiceIndex = dice[0];
	int secondDiceIndex = 0;
	int firstDiceCount = 1;
	int secondDiceCount = 0;

	for (size_t i = 1; i < 5; i++)
	{
		
		if (dice[i] == firstDiceIndex )
		{
			firstDiceCount++;
		}
		else if (secondDiceIndex == 0)
		{
			secondDiceIndex = dice[i];
			secondDiceCount++;
		}
		else if (dice[i] == secondDiceIndex)
		{
			secondDiceCount++;

		}
		else {
			return 0;
		}
	}
	if (firstDiceCount == 3 || secondDiceCount == 3)
		return 25;
	else
		return 0;
}

int StraightWithSize(int dice[5], int size)
{
	std::sort(&dice[0], &dice[5]);
	int lastValue = dice[0];
	int straightSize = 1;
	int maxStraightSize = 1;
	for (size_t i = 1; i < 5; i++)
	{
		if (lastValue + 1 == dice[i])
		{
			straightSize += 1;
			if (straightSize >= size)
				return (size * 10) - 10;
		}
		else if (lastValue == dice[i])
		{
			continue;
		}
		else {
			straightSize = 1;
		}
		lastValue = dice[i];
	}

	return 0;
}
int SmallStraight(int dice[5])
{
	return StraightWithSize(dice, 4);
}

int LargeStraight(int dice[5])
{
	return StraightWithSize(dice, 5);

}
int main()
{
	int dice[5] = { 2, 3, 4, 3, 5 };
	std::cout << "**************************" << std::endl;
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << "  " << dice[i] << "  ";
	}
	std::cout << std::endl;
	std::cout << "**************************" << std::endl;

	//int dice[5] = { 3, 2, 5, 4, 1 };


	std::cout << "Ones                 = " << OneDiceSum(dice) << std::endl;
	std::cout << "Twos                 = " << TwoDiceSum(dice) << std::endl;
	std::cout << "Threes               = " << ThreeDiceSum(dice) << std::endl;
	std::cout << "Fours                = " << FourDiceSum(dice) << std::endl;
	std::cout << "Fives                = " << FiveDiceSum(dice) << std::endl;
	std::cout << "Sixes                = " << SixDiceSum(dice) << std::endl;
	std::cout << "Three of a kind      = " << ThreeOfAKindCaller(dice) << std::endl;
	std::cout << "Four of a kind       = " << FourOfAKindCaller(dice) << std::endl;
	std::cout << "Full House           = " << FullHouse(dice) << std::endl;
	std::cout << "Small Straight       = " << SmallStraight(dice) << std::endl;
	std::cout << "Large Straight       = " << LargeStraight(dice) << std::endl;
	std::cout << "Chance               = " << SumDice(dice) << std::endl;
	std::cout << "Yahtzee              = " << YahtzeeOfAKindCaller(dice) << std::endl;


	SmallStraight(dice);
	return 0;
}