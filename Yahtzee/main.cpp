

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

int FourOneDiceSum(int dice[5])
{
	return 4;
}


int main()
{
	return 0;
}