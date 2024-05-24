#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
}

int wdmatch(char *s1, char *s2)
{
    while (*s2)
    {
        if (*s1 == *s2)
            s1++;
        s2++;
    }
    return (*s1 == '\0');
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        if (wdmatch(argv[1], argv[2]))
            ft_putstr(argv[1]);
    }
    ft_putchar('\n');
    return 0;
}
