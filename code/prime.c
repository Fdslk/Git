#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int n)//判断是否是质数
{
    int i;
    for(i = 2; i <= sqrt(n); i ++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int a[100];
    int x, i, j;
    scanf("%d", &x);
    while(x != -1)
    {
        if(x == 0 || x == 1)
            printf("没有质因数!\n");
        else{
            j = 0;
            printf("%d=", x);
            while(x > 3)
            {
                for(i = 2; i <= x; i ++)
                {
                    if(isprime(i) && (x%i==0))
                        break;
                }
                x = x/i;
                a[j++] = i;
            }
            if(x > 1)
                a[j++]=x;
        }
    }
    for(i = 0; i < j; i ++)
    {
        printf("%d", a[i]);
            if(i < j - 1)
                printf("*");
    }
    printf("\n");

    return 0;
}
