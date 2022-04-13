#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*string_malloc(char *str)
{
	int		size;
	int		caps;
	char		*ret;

	size = 0;
	caps = 0;
	while (str[size] != '\0')
	{
		if (str[size] >= 65 && str[size] <= 90)
			caps++;
		size++;
	}
	ret = (char *)malloc(caps + size);
	if (!ret)
		return (NULL);
	return (ret);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	*str;

	i = 0;
	j = 0;
	if (argc != 2)
		return (0);
	str = string_malloc(argv[1]);
	if (str)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				str[j++] = '_';
				str[j++] = argv[1][i] + 32;
			}
			else
				str[j++] = argv[1][i];
			i++;
		}
		printf("str - %s\n", str);
		free(str);
	}
	return (0);
}
