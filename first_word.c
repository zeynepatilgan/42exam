#include <unistd.h>
int main(int ac, char **av)
{
	int i;
		if( ac == 2)
		{
			i = 0;
			while(av[1][i] <= 32 && av[1][i])
				i++;
			while( av[1][i] > 32 && av[1][i])
				write(1, &av[1][i++], 1);

		}
write(1, "\n", 1);
}
