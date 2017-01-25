#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j, temp = 0, t1, t2;;
    scanf("%d", &n);
    while(n <= 0 || n > 1000)
    {
        scanf("%d", &n);
    }
    while(n --)
    {
        scanf("%d%d", &i, &j);
        while(0 == i || 0 == j)
            scanf("%d%d", &i, &j);
        if(i == j)
            printf("%d %d\n", i, j);
        else
        {
            t1 = i;
            t2 = j;
            while(i != j)
            {
                if(i > j)
                {
                    temp = i - j;
                    i = temp;
                }
                else
                {
                    temp = j - i;
                    j = temp;
                }
            }
            printf("%d %d", i, (t1*t2)/i);
            temp = 0;
        }
    }
    return 0;
}

/*最小公倍数为 (i*j)/m m是i与j的最大公约数 所以只要计算出最小公约数即可
法一更相损减法 两数一直相减，一直到减为零
法二辗转相除法

*/

