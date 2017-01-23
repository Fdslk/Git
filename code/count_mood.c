#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, a, i, s = 0;
    scanf("%d", &N);
    while(N < 0 || N > 10)
    {
        scanf("%d", &a);
    }
    while(N --)
    {
        scanf("%d", &a);
        for(i = 1; i <= a; i ++)
        {
            s += i * (a - i + 1);
        }
        printf("%d\n", s);
        s = 0;
    }
    return 0;
}

