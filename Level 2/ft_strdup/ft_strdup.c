#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	length = 0;
	char	*strcpy;

	while (src[length])
		length++;
	strcpy = malloc(length + 1);
	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
