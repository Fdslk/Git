#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

int main(void)
{
    int a[MAXSIZE], i, k, n, j;
    scanf("%d%d", &n, &k);
    while(n > 1000 || k > n || k < 0 || n < 0)
    {
        scanf("%d%d", &n, &k);
    }

    for(i = 0; i < n; i ++)
        a[i] = 1;

    for(i = 2; i <= k; i ++)
    {
        for(j = 0; j < n; j ++)
        {
            if((j + 1)%i == 0)
            {
                if(1 == a[j])
                    a[j] = 0;
                else
                    a[j] = 1;
            }
        }
    }

    for(i = 0; i < n; i ++)
    {
        if(1 == a[i])
        {
            printf("%d\t", i + 1);
        }
    }

    return 0;
}

