char *ft_strrev(char *str)
{
	int i = -1;
	int length = 0;
	char tmp = str[i];

	while (str[length])
		length++;
	while (++i < --length)
	{
		str[i] = str[length];
		str[length] = tmp;
	}
	return (str);
}
