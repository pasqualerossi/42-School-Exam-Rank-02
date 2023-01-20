#include <stdlib.h>

static unsigned int	ft_number_size(int number)
{
	unsigned int length = 0;
	
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char		*string = (char *)malloc(sizeof(char) * (length + 1));
	unsigned int	number;
	unsigned int	length = ft_number_size(n);

	if (string == NULL)
		return (NULL);
	if (number < 0)
	{
		string[0] = '-';
		number = -n;
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[length - 1] = (number % 10) + '0';
		number = number / 10;
		length--;
	}
	return (string);
}
