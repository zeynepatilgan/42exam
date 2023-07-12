#include <unistd.h>
char *ft_strrev(char *str)
{
	char tutan;
	int uzunluk = 0;
	int i = 0;
 	while(str[uzunluk])
	i++;
	while( i < (uzunluk - 1))
	{
		tutan = str[i];
		str[i] = str[uzunluk -1];
		str[uzunluk -1] = tutan;
	i++;
	--uzunluk;
	}
return(str);

}
int main()
{
	ft_strrev("zeynep");
}
