#include <unistd.h>

int main(int arg, char**argv)
{
    int used[255] = {0}, i = 2, j;

    if (arg == 3)
    {
        while (i > 0)
        {
            j = 0;
            while (argv[i][j])
            {
                if (i == 2 && !used[argv[i][j]])
                    used[argv[i][j]] = 1;
                else if (i == 1 && used[argv[i][j]] == 1)
                {
                    write(1, &argv[i][j], 1);
                    used[argv[i][j]] = 53;
                }
                j++;
            }
            i--;
        }
    }
    write(1,"\n",1);
}