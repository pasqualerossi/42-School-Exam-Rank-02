#include <stdlib.h>

char    *ft_itoa(int nbr)
{
	int	len;
	long	n_tmp;
	char	*str;

	len = 0;
	n_tmp = nbr;
	str[len] ='\0';
	
	if (nbr == -2147483648)
		return ("-2147483648");
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		len += 1;
		nbr *= -1;
		str[0] = '-';
	}
	while (n_tmp)
	{
		n_tmp /= 10;
		len += 1;
	}
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}
