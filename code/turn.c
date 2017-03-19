#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node{
    int data;
    struct node *next;
}SeqLink;

SeqLink *createLink()//实现数据的逆序输出
{
    SeqLink *head, *p;//head表示头结点，p表示带插入的节点
    int x;
    head = (SeqLink *)malloc(sizeof(SeqLink));//给头结点申请一个空间
    head->next = NULL;
    scanf("%d", &x);
    while(x != -1)
    {
        p = (SeqLink *)malloc(sizeof(SeqLink));//给新插入的节点申请空间
        p->data = x;
        p->next = head->next;
        head->next = p;
        scanf("%d", &x);
    }
    return head;//返回头结点
}

int main(void)
{
    SeqLink *temp;
    temp = createLink();
    temp = temp->next;
    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
    return 0;
}
