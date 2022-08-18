void	ft_swap(int *a, int *b)
{
	(*a ^= *b), (*b ^= *a), (*a ^= *b);
}
