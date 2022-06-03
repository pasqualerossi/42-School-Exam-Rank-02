#include <unistd.h>

int	main(int argc, char **argv)
{
	int	letter = 0;
	int	repeat = 1;

	if (ac == 2)
	{
		while (av[1][letter])
		{
			if (av[1][letter] >= 'a' && av[1][letter] <= 'z')
				repeat += av[1][letter] - 'a';
			else if (av[1][letter] >= 'A' && av[1][letter] <= 'Z')
				repeat += av[1][letter] - 'A';
			while (repeat)
			{
				write(1, &av[1][letter], 1);
				repeat--;
			}
			letter++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
