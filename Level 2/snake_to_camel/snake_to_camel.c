// Passed Moulinette 2019.09.02

#include <unistd.h>

void	snake_to_camel(char *str)
{
	while (*str != '\0')
	{
		if (*str == '_')
		{
			++str;
			*str = *str - ('a' - 'A');
		}
		write(1, str, 1);
		++str;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		snake_to_camel(argv[1]);

	write(1, "\n", 1);
	return (0);
}