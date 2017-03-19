#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node{
    int data;
    struct node *next;
}SeqLink;

SeqLink *createLink()//ʵ�����ݵ��������
{
    SeqLink *head, *p;//head��ʾͷ��㣬p��ʾ������Ľڵ�
    int x;
    head = (SeqLink *)malloc(sizeof(SeqLink));//��ͷ�������һ���ռ�
    head->next = NULL;
    scanf("%d", &x);
    while(x != -1)
    {
        p = (SeqLink *)malloc(sizeof(SeqLink));//���²���Ľڵ�����ռ�
        p->data = x;
        p->next = head->next;
        head->next = p;
        scanf("%d", &x);
    }
    return head;//����ͷ���
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
