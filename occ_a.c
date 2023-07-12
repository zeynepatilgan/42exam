int occ_a(char *ptr)
{
    int i = 0;
    int a = 0;
    while(ptr[i])
    {
        if(ptr[i] == 'A')
                a++;
        i++;
    }
    return (a);
}
#include <stdio.h>
int main()
{
 printf("%d\n", occ_a("zeynepAA"));   
}