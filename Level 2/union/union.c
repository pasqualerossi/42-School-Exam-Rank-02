#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int seen[256] = {0};
        int i = 0;
        int j = 0;

        while (av[1][i])
        {
            if (!seen[av[1][i]])
            {
                write(1, &av[1][i], 1);
                seen[av[1][i]] = 1;
            }
            i++;
        }
        while (av[2][j])
        {
            if (!seen[av[2][j]])
            {
                write(1, &av[2][j], 1);
                seen[av[2][j]] = 1;
            }
            j++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
