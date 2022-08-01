// Passed Moulinette 2019.09.01

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}

//---------------------------------------------------------------
// #include <stdio.h>
// int	main(void)
// {
// 	char haystack[] = "This is a test string";
// 	char accept[] = "tgaThis";

// 	printf("%zu\n", ft_strspn(haystack, accept));
// }