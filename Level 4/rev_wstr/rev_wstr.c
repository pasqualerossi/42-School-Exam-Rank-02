
#include <unistd.h>

int main(int argc, char **argv)
{
    int start, end;
    int idx = 0;

    if (argc == 2)
    {
        while (argv[1][idx])
            idx++;
        while (idx >= 0) 
        {
            while (idx >= 0 && (argv[1][idx] == ' ' || argv[1][idx] == '\t'))
                idx--;
            end = idx;
            while (idx >= 0 && argv[1][idx] != ' ' && argv[1][idx] != '\t')
                idx--;
            start = idx + 1;
            while (start <= end)
            {
                write(1, &argv[1][start], 1);
                start++;
            }
            if (idx > 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}
