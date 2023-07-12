#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int i2 = 1;
    int j = 1;
    if (ac < 2)
        write(1, "\n", 1);
    if ( ac > 0)
    {
         while(j < ac)
        {

            while(av[j][i])
            {
             if(av[j][i] >= 'A' && av[j][i] <= 'Z')
            av[j][i] += 32;
            i++;
            }
            
            i  = 0;

            while(av[j][i])
            {
               if(av[j][i] >= 'a' && av[j][i] <= 'z')
                {
                    if(i2 == 1)
                       { 
                        i2 = 0;
                        av[j][i] -= 32;
                       }
                    write(1, &av[j][i], 1);
                } 
                else if (av[j][i] >= '0' && av[j][i] <= '9')
                {
                    write(1, &av[j][i], 1);
                    i2 = 0;
                }
                else if(av[j][i] == ' ' || av[j][i] == '\t')
                {
                    i2 = 1;
                    write(1, &av[j][i], 1);
                }
                else if(av[j][i] == '_')
                {
                    i2 = 0;
                    write(1, &av[j][i], 1);
                    i++;
                }
                else
                    write(1, &av[j][i], 1);
                i++;
            }
            j++;
            write(1, "\n", 1);
            i2 = 1;
            i = 0;
        }
    }
}