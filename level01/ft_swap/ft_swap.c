#include <unistd.h>

void	ft_swap(int		*a, int		*b)
{
	int		urish;

	urish = *a;
	*a = *b;
	*b = urish;
}
