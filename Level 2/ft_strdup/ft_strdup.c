#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int     i;
    char    *dup;
    int     len;

    len = ft_strlen(src);
    i = 0;
    if (!(dup = (char *)malloc(sizeof(char) * len + 1)))
        return (0);
    while (src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}