#include <unistd.h>
int ft_atoi(const char *str)
{
	int i = 0;
	int işaret = 1;
	int işlem = 0;
	
	
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if(str[i] == '-')
			işaret *= -1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		işlem = (str[i] - '0') * ( işlem * 10);
		i++;
	}
return( işaret * işlem);
} 