
#include <stdio.h>
#include <stdlib.h>
#define MAXSIEZ 100

typedef struct{
    int data[MAXSIEZ];
    int front;
    int rear;
}CircleQueue;

CircleQueue *InitQueue()
{
    CircleQueue *q;
    q = (CircleQueue *)malloc(sizeof(CircleQueue));
    q->front = q->rear = MAXSIEZ - 1;
    return q;
}

void clean(CircleQueue *q)
{
    q->front = q->rear = MAXSIEZ - 1;
}

int EmptyCirQueue(CircleQueue *q)
{
    if((q->front == q->rear))
        return 1;
    else
        return 0;
}

void InQueue(CircleQueue *q, int x)
{
    if(q->front == (q->rear + 1)%MAXSIEZ)
        printf("the queue is full!\n");
    else
    {
        q->rear = (q->rear+1)%MAXSIEZ;//入队的时候会要流出一个位置作为空余，来保证不会溢出
        q->data[q->rear] = x;
    }
}

void OutQueue(CircleQueue *q)
{
    if(q->front == q->rear)
        printf("the queue is empty!\n");
    else
    {
        q->front = (q->front+1)%MAXSIEZ;
    }
}

int GetHead(CircleQueue *q)
{
    if(q->front == q->rear){
        printf("the queue is empty!\n");
        return 0;
    }
    else
		return q->data[(q->front + 1) % MAXSIEZ];
}
int main()
{
    int x;
    CircleQueue *p;
    p = InitQueue();
    if(EmptyCirQueue(p))
        printf("the queue is empty!\n");
    printf("input the data:\n");
    scanf("%d", &x);
    while(x != 0)
    {
        InQueue(p, x);
        scanf("%d", &x);
    }

    printf("原来的队顶元素:%d\n", GetHead(p));
    OutQueue(p);

    printf("出队后的队顶元素：%d\n", GetHead(p));
    return 0;
}
