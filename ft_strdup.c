#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
		while(str[i])
		i++;
return(i);
}
char *ft_strdup(char *src)
{
	int i = 0;
	int len;
	char *str;
	
	len = ft_strlen(src);
	str = malloc(len + 1);
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);

}

int main()
{
	ft_strdup("zeynep");

}
