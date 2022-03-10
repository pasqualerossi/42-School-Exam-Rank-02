#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	s1 = (char *)malloc(sizeof(char *));
	if (!s1 || !s2)
		return (NULL);
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
