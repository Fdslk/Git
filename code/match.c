
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef struct{
    char str[MAXSIZE];
    int top;
}SeqStack;

SeqStack *InitStack()
{
    SeqStack *s;
    s = (SeqStack*)malloc(sizeof(SeqStack));
    s->top = -1;
    return s;
}

int EmptyStack(SeqStack *s)
{
    if(s->top == -1)
        return 1;
    else
        return 0;
}

void PushStack(SeqStack *s, char ch)
{
    if(s->top == MAXSIZE-1)
        printf("the stack is full!\n");
    else
    {
        s->top++;
        s->str[s->top] = ch;
    }
}

void PopStack(SeqStack *s, char *ch)
{
    if(EmptyStack(s))
        printf("the stack is empty!\n");
    else
    {
        *ch = s->str[s->top];//相当于是吧栈顶元素存放的地址出栈
        s->top--;
    }
}

void Top_Stack(SeqStack *s, char *ch)
{
    if(EmptyStack(s))
        printf("the stack is empty!\n");
    else
        *ch = s->str[s->top];
}

void Correct(char ex[])
{
    SeqStack *s;
    char x, *ch = &x;
    int i = 0;
    s = InitStack();
    while(ex[i]!='\0')
    {
        if(ex[i] == '('||ex[i]=='{'||ex[i]=='(')
            PushStack(s, ex[i]);
        if(ex[i]==')'||ex[i]==']'||ex[i]=='}')
        {
            Top_Stack(s, ch);
            if(ex[i]==')'&&*ch=='(')
            {
                PopStack(s, ch);
                goto LL;
            }
            if(ex[i]=='}'&&*ch=='{')
            {
                PopStack(s, ch);
                goto LL;
            }
            if(ex[i]==']'&&*ch=='[')
            {
                PopStack(s, ch);
                goto LL;
            }
            else
                break;
        }
       LL: i ++;
    }
    if(!EmptyStack(s))
        printf("error!\n");
    else
        printf("right!\n");
}
int main()
{
    //SeqStack *p;
    //p = InitStack();
    char ex[MAXSIZE];
    printf("please input the string!\n");
    scanf("%s", ex);
    Correct(ex);
    return 0;
}
