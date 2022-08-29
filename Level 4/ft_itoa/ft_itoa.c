#include <stdlib.h>

char	*impossible2convert(int nbr)
{
	if (nbr == 0)
		return ("0");
	return ("-2147483648");
}

char	*ft_itoa(int nbr)
{
	static char	base[10] = "0123456789";
	char		*str;
	int			minus_check = 0;

	if (nbr == -2147483648 || nbr == 0)
		return (impossible2convert(nbr));
	if ((str = malloc(sizeof(str) * 12)))
	{
		str[11] = '\0';
		if (nbr < 0)
		{
			nbr = -nbr;
			minus_check = 1;
		}
		while (nbr)
		{
			*--str = base[nbr % 10];
			nbr /= 10;
		}
		if (minus_check == 1)
			*--str = '-';
		return (str);
	}
	return (NULL);
}
