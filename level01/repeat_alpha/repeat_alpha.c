#include <unistd.h>

int		main(int	argc, char **argv)
{
	int		count;
	int		i;
	int		j;
	char	str[27] = "abcdefghijklmnopqrstuvwxyz";
	
	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while (str[j] != '\0')
				{
					if (argv[1][i] == str[j])
					{	
						count = j;
						break ;
					}
					j++;				
				}
				while (count >= 0)
				{
					write (1, &argv[1][i], 1);
					count--;
				}
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = 0;
				while (str[j] != '\0')
				{
					if (argv[1][i] == str[j] - 32)
					{
						count = j;
						break ;
					}
					j++;
				}
				while (count >= 0)
				{
					write (1, &argv[1][j], 1);
					count--;
				}
			}
			i++;			
		}	
	}
	write (1, "\n", 1);
	return (0);
}
