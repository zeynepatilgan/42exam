//tesi düzü aynı olacak. aabbcccbbaa gibi aabbcccbba olmaz
#include<unistd.h>
int main(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int c = 0;

	if (ac == 2)
	{	
        while(av[1][b])
        b++;
        b--;
		while (av[1][a])
		{

				if (av[1][a] == av[1][b])
				{
					c++;
                    b--;
				}
				
			a++;
		}
		if (a == c)
		{
			a = 0;
			while(av[1][a])
			{
				write(1, &av[1][a], 1);
				a++;
			}
		}
	}
	write(1, "\n", 1);
	
}