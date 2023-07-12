#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    if(ac == 2)
    {
        if(av[j][i] == '\0')
        {
        write(1, "\n", 1);
        return(0);
        }

    while(av[j][i])
    {
        if (av[j][i + 1])
        {
            write(1, &av[j][i], 1);
            write(1, "   ", 3);
        }
        i++;
    }
    write(1, &av[j][i - 1], 1);
    }
    write(1, "\n", 1);
}