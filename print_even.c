#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            if(i % 2 == 0)
                write(1, &av[1][i++], 1);
            else
                i++;
        }
        
    }
write(1, "\n", 1);
}