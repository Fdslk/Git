#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct{
    int data[MAXSIZE];
    int front;
    int rear;
}SeqQueue;

void clean(SeqQueue *q)//置空栈
{
    q->front = q->rear = -1;
}

SeqQueue *InitQueue()
{
    SeqQueue *q;
    q = (SeqQueue*)malloc(sizeof(SeqQueue));
    q->front = q->rear = -1;
    return q;
}

int EmptyQueue(SeqQueue *q)
{
    if(q->front == q->rear)
        return 1;//返回1为队空
    else
        return 0;//返回0表示队中有元素
}
void InQueue(SeqQueue *q, int x)
{
    if(q->rear == MAXSIZE - 1)
        printf("the queue is full!\n");
    else
    {
        q->data[q->rear] = x;
        q->rear ++;
    }
}

void OutQueue(SeqQueue *q)
{
    if(EmptyQueue(q))
        printf("the Queue is empty!\n");
    else
        q->front ++;
}

int GetHead(SeqQueue *q)
{
    if(EmptyQueue(q))
        printf("the Queue is empty!\n");
    else
        return q->data[q->front];
}
int main()
{
    int x;
    SeqQueue *p;
    p = InitQueue();
    printf("%d\n", EmptyQueue(p));
    scanf("%d", &x);
    while(x != 0){
        InQueue(p, x);
        scanf("%d", &x);
    }

    printf("p->front:%d\n", p->front);
    printf("p->data[p->front]:%d\n", p->data[p->front]);
    printf("the head of the Queue:%d\n", GetHead(p));
    OutQueue(p);
    printf("the head of the Queue:%d\n", GetHead(p));
    while(p->front != p->rear)
    {
        printf("%d\t", p->data[p->front]);
        printf("p->front%d\n", p->front);
        p->front ++;
    }

    return 0;
}

