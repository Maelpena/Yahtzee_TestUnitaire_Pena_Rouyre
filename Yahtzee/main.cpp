

int SumDice(int des[5] )
{
	int result = 0;
	for (size_t i = 0; i < 5; i++)
	{
		result += des[i];
	}
	return result;
}

bool ValidDice(int dice[5])
{
	for (size_t i = 0; i < 5; i++)
	{
		if (dice[i] < 1)
			return false;
		if (dice[i] > 6)
			return false;
	}


	return true;
	
}
int main()
{
	return 0;
}