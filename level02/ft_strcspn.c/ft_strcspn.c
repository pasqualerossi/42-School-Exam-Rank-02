#include <stdio.h>

size_t  ft_strcspn(const char   *s, const char  *reject)
{
    int     i;
    int     i2;

    i = 0;
    i2 = 0;
    while (s[i] != '\0')
    {
        i2 = 0;
        while (reject[i2] != '\0')
        {
            if(s[i] == reject[i2])
                return (i);
            i2++;
        }
        i++;
    }
    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}