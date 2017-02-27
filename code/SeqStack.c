#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 128
typedef struct{
    int data[MAXSIZE];
    int top;
}SeqStack;

SeqStack *Init_SeqStack()
{
    SeqStack *s;
    s = (SeqStack *)malloc(sizeof(SeqStack));
    s->top = -1;
    return s;
}

int Empty_SeqStack(SeqStack *s)
{
    if(s->top == -1)
        return 1;//返回1为栈为空
    else
        return 0;//返回0，栈中有数据
}

void Push_SeqStack(SeqStack *s, int x)
{
    if(s->top == MAXSIZE - 1)
        printf("the stack is full!\n");
    else{
        s->top++;
        s->data[s->top] = x;
    }
}

int Pop_SeqStack(SeqStack *s)//
{
    int x;
    if(s->top == -1)
        printf("the stack is empty!\n");
    else
    {
        x = s->data[s->top];
        s->top --;
    }
    return x;
}

int Search_SeqStack(SeqStack *s)
{
    if(!Empty_SeqStack(s))
        return s->data[s->top];
    else
        return 0;
}

int main()
{
    SeqStack *p;
    int x, temp;
    p = Init_SeqStack();
    if(!Empty_SeqStack(p))
        printf("OK\n");
    else
        printf("Empty!\n");
    printf("input the data you want to push into the stack!\n");
    scanf("%d", &x);
    while(x != 0)
    {
        Push_SeqStack(p, x);
        scanf("%d", &x);
    }
    temp = p->top;
    while(p->top != -1)
    {
        printf("%d\n", p->data[p->top]);
        p->top --;
    }

    printf("---------search the data-----------\n");

    p->top = temp;
    printf("%d\n", Search_SeqStack(p));
    return 0;
}

