int is_power_of_2(unsigned int n)
{
	int number = 1;
	
	while(number <= n)
	{
		if (number == n)
		{
			return 1;
		}
		number = number * 2;
	}
	return 0;
}
