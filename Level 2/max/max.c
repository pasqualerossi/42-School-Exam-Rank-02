int max(int *tab, unsigned int len)
{
	int max;

	max = tab[--len];
	if (!len)
		return (0);
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}
