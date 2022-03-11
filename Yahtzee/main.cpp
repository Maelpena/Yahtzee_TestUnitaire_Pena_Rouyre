

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
int YahtzeeTwo(int dice[5])
{
	return YahtzeeForValue(dice, 2);
}

int YahtzeeThree(int dice[5])
{
	return YahtzeeForValue(dice, 3);
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



int main()
{
	return 0;
}