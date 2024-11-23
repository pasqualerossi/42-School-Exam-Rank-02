size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;

	count = 0;
	while (*s == *accept && *s && *accept)
	{
		count++;
		s++;
		accept++;
	}
	return (count);
}
