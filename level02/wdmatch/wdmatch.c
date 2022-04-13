// Passed Moulinette 2019.09.01

#include <unistd.h>

void	wdmatch(char *str, char *charset)
{
	int i = 0;
	while (str[i] != '\0')
	{
		while (*charset != str[i] && *charset != '\0')
			++charset;
		if (*charset == '\0')
			return;
		++i;
		++charset;
	}
	write(1, str, i);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}