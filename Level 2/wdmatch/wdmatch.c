#include <unistd.h>

void ft_putstr(char const *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int argc, char const *argv[])
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
