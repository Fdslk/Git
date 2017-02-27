#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, N;
    scanf("%d", &N);
    //上半部分
    for(i = 1; i <= N; i ++)
    {
        for(j = 1; j <= N-i; j++)
            printf(" ");
        for(k = 1; k <= 2*i-1; k++)
           printf("*");
        printf("\n");
    }
    //下半部分
    for(i = 1; i <= N ; i++)
    {
        for(j = 1; j <= i; j++)
            printf(" ");
        for(k = 1; k <= (N-i)*2-1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}

