#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100

void reverse(char arr[], int len);

int main(void)
{
    char arr[MAXSIZE];
    int i = 0;
    scanf("%s", arr);
    for(i = 0; i < strlen(arr); i ++)
        printf("%c", arr[i]);
    printf("\n");
    reverse(arr, strlen(arr));
    for(i = 0; i < strlen(arr); i ++)
        printf("%c", arr[i]);

    return 0;
}

void reverse(char arr[], int len)//相互调换，头尾互相调换
{
    char temp;
    int i;
    for(i = 0; i < len/2; i ++)
    {
        temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }
}

