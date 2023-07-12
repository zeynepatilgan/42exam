#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
            while(av[1][i])
        {
            i++;
            int b;
            b = i;
            b = b - 1;
            write(1, &av[1][0], 1);
            i = 1;
            while(b > 0)
            {
                write(1, "   ", 3);
                write(1, &av[1][i], 1);
                i++;
                --b;
            }
        }
    write(1, "\n", 1);
    }
}