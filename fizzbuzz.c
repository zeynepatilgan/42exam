#include <unistd.h>
void sayi(int rakam)
{
	if(rakam > 9)
		sayi(rakam / 10);
	write(1, &"0123456789"[rakam % 10], 1);
}
int main(void)
{
	int rakam = 1;
	while( rakam <= 100)
		{
			if(rakam % 3 == 0 && rakam % 5 == 0)
				write(1, "fizzbuzz", 8);
			else if(rakam % 3 == 0 )
				write(1, "fizz", 4);
			else if(rakam % 5 == 0)
				write(1, "buzz", 4);
			else
				sayi(rakam);
 	rakam++;
		}
write(1, "/n", 1);
}
