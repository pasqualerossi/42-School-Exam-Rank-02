#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	first = atoi(argv[1]);
	int	second = atoi(argv[3]);
	char	oper = argv[2][0];
	int	res;

	if (argc == 4)
	{
		if (oper == '+')
			res = first + second;
		else if (oper == '-')
			res = first - second;
		else if (oper == '*')
			res = first * second;
		else if (oper == '/')
			res = first / second;
		else if (oper == '%')
			res = first % second;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
