char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char *)s);
	else if (!*s)
		return (NULL);
	else
		return (ft_strchr(s + 1, c));
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
			return (char *)s1;
		s1++;
	}
	return (NULL);
}
