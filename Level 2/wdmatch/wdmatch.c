#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    
    if (ac == 3)
    {
        j = 0;
        i = 0;
        while (av[2][j])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (av[1][i] == '\0')
        {
            i = 0;
            while(av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}
