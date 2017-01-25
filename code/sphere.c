#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926

int main(void )
{
    float r;
    int v;

    while(scanf("%f", &r) == 1)
    {
        while(r <= 0 || r >= 100)
        scanf("%f", &r);
        v = floor((4 * PI * pow(r, 3.0))/3);
        printf("%d\n", v);
    }
    return 0;
}

