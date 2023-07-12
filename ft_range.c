#include <stdlib.h>
#include <stdio.h>
int *ft_range(int start, int end)
{
    int i;
    int value;
    int *retval;

    value = start - end;
    if(value == 0)
    {
        retval = malloc(sizeof(int) * 2);
        retval[0] = 0;
        retval[1] = 0;
        return(retval);
    }
    if(value < 0)
        value *= -1;
    retval = malloc(sizeof(int) * value);
    if(end <= start)
    {
        i = 0;
        while (end <= start)
        {
            retval[i] = start;
            start--;
            i++;
        }
        return(retval);
        
    }
    if(start <= end)
    {
        i = 0;
        while(start <= end)
        {
            retval[i] = start;
            start++;
            i++;
        }
        return(value);
    }
}
