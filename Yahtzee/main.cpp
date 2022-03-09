

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
int main()
{
	return 0;
}