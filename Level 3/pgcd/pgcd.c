#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);

	if (argc != 3 && number1 <=0 || number2 <= 0)
	{
		printf("\n");
		return 0;
	}
	while (number2 != 0)
	{
		//ft_swap
		int temporary = number2;
		number2 = number1 % number2;
		number1 = temporary;
	}
	printf("%d\n", number1);
	return 0;
}
