#include <stdlib.h>

int	ft_count_str(char const *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i])
	{
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && (s[i - 1] != ' ' && s[i - 1] != '\t' && s[i - 1] != '\n'))
			count++;
		i++;
	}
	if (s[i] == '\0' && (s[i - 1] != ' ' && s[i - 1] != '\t' && s[i - 1] != '\n'))
		count++;
	return (count);
}

int	ft_str_len(char const *s, int i)
{
	int	len;

	len = 0;
	while (s[i] && (s[i] != ' ' && s[i] != '\t' && s[i] != '\n'))
	{
		len++;
		i++;
	}
	return (len);
}

char	*ft_write_string(char const *s, char **ptr, int j, int len)
{
	int		x;
	char	*p;

	x = 0;
	p = (char *)s;
	ptr[j] = malloc((len + 1) * sizeof(char));
	if (!ptr[j])
	{
		while (j != 0)
		{
			free(ptr[j]);
			j--;
		}
		free(ptr);
		return (NULL);
	}
	while (len != 0)
	{
		ptr[j][x] = p[x];
		x++;
		len--;
	}
	ptr[j][x] = '\0';
	return (ptr[j]);
}

char	**ft_split(char const *s)
{
	char	**ptr;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	ptr = malloc((ft_count_str(s) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
		{
			len = ft_str_len(s, i);
			ptr[j] = ft_write_string(s + i, ptr, j, len);
			j++;
			i += len;
			if (s[i] == '\0')
				break ;
		}
		i++;
	}
	ptr[j] = NULL;
	return (ptr);
}
