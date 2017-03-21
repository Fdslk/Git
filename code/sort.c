#include <stdio.h>
#define N 6
void sort_1(int a[], int n)//直接插入
{
    int i, j, temp;
    for(i = 1; i < n; i ++)
    {
        j = i - 1;
        temp = a[i];
        while((j>=0)&&(temp<a[j]))
        {
            a[j+1] = a[j];
            j --;
        }
        a[j+1] = temp;
    }
}

void sort_4(int a[], int n)//直接选择
{
    int i, j, min, temp;//
    for(i = 0; i < n; i ++)
    {
        min = i;
        for(j = i + 1; j < n ; j ++)//每一趟找出无序序列中的最小值
        {
            if(a[j] < a[min])
                min = j;
        }
        if(i != min)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}
void sort_2(int a[], int n)//冒泡
{
    int i, j, temp;
    for(i = 0; i <= n; i ++)
    {
        for(j = 0; j <= n-i; j ++)
        {
            if(a[j+1] < a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(void)
{
    int i, a[N] = {48, 33, 61, 96, 72, 11};
    sort_1(a, N);
    for(i = 0; i < N; i ++)
        printf("%d\t", a[i]);
    /*sort_2(a, N);
    printf("\n");
    for(i = 0; i < N; i ++)
        printf("%d\t", a[i]);*/

    return 0;
}

