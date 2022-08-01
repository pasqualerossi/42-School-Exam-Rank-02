// Passed Moulinette 2019.09.01

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int shift = 7;
	unsigned char mask = 1;
	char out;

	while (shift >= 0)
	{
		out = ((octet >> shift) & mask) + '0';
		write(1, &out, 1);
		--shift;
	}
}

#if 0
int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
}
#endif