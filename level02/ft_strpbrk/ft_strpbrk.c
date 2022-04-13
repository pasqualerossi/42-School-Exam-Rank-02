// Passed Moulinette 2019.09.02

int		find_char(const char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		++str;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (find_char(*s1, s2) == 1)
			return ((char *)s1);
		++s1;
	}
	return (0);
}

//--------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>

// int		main(void)
// {
// 	printf("ft: %s; real: %s\n", \
// 		ft_strpbrk("This is a string to search in", "qxd"), \
// 		strpbrk("This is a string to search in", "qxd")
// 		);

// 	printf("ft: %s; real: %s\n", \
// 		ft_strpbrk("This is a string to search in", "sh"), \
// 		strpbrk("This is a string to search in", "sh")
// 		);
// }