#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int len;
}SeqList;

SeqList *init_SeqList()//初始化
{
    SeqList *L;
    L = (SeqList*)malloc(sizeof(SeqList));
    L->len = 0;
    return L;
}

void CreatList(SeqList **L)
{
    int i, n;
    printf("input length of list:");
    scanf("%d", &n);
    printf("input elements of list\n");
    for(i = 0; i < n; i ++)
    {
        scanf("%d", &(*L)->data[i]);
    }
    (*L)->len = n;
}

void Insert_SeqList(SeqList *L, int i, int x)//i代表带插入位置，x代表带插入的数据
{
    int j;
    if(L->len == MAXSIZE + 1)
        printf("The list is full");
    else if(i < 1 || i > L->len + 1)
        printf("The position is invalid");
    else
    {
        for(j = L->len; j >= i; j --)
        {
            L->data[j+1] = L->data[j];
        }
        L->data[i] = x;
        L->len ++;
    }
}

void Delete_SeqList(SeqList *L, int i)//i代表待删除的位置
{
    int j;
    if(L->len == 0)//表为空表
        printf("The List is empty\n");
    else if(i < 1 || i > L->len)
        printf("The position is invalid\n");
    else
    {
        for(j = i+1; j < L->len; j ++)
            L->data[j-1] = L->data[j];
        L->len--;
    }
}

int Search_SeqList(SeqList *p, int x)
{
    int i;
    i = p->len;
    p->data[0] = x;
    while(p->data[i] != x)
        i--;
    return i;
}

int main()
{
    int i;
    SeqList *p;
    int judge;//相当于是p是数组的首地址
    p = init_SeqList();
    CreatList(&p);
    for(i = 0; i < p->len; i ++)
    {
        printf("%d\t", p->data[i]);
    }

    Insert_SeqList(p, 5, 7);
    printf("\n");
    for(i = 0; i < p->len; i ++)
    {
        printf("%d\t", p->data[i]);
    }
    printf("\n");

    Delete_SeqList(p, 4);
    for(i = 0; i < p->len; i ++)
    {
        printf("%d\t", p->data[i]);
    }
    printf("\n");
    if((judge=Search_SeqList(p, 4))==0)
        printf("未找到！");
    else
        printf("%d", p->data[judge]);

    return 0;
}

