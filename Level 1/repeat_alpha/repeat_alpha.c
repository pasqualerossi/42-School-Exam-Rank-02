#include <unistd.h>

void    repeat_alpha(char *str)
{
    int i = 0;
    char c;

    while (*str != '\0')
    {
        if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
        {
            if (*str >= 'a' && *str <= 'z')
            {
                i = *str - '0';
                c = i - '0';
                i = c;
            }
            else if (*str >= 'A' && *str <= 'Z')
            {
                i = *str - '0';
                c = i + ' ';
                i = c - '0';
            }
            while (i)
            {
                write(1, &str[0], 1);
                i--;
            }
        }
        else
            write(1, &str[0], 1);
        str++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
    return (0);
}
