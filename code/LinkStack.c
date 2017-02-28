#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}StackNode;

StackNode *Init_LinkStack()//初始化时加了一个头结点
{
    StackNode *s;
    s = (StackNode*)malloc(sizeof(StackNode));
    s->next = NULL;
    return s;
}

int Empty_LinkStack(StackNode *s)
{
    if(s->next == NULL)
        return 1;
    else
        return 0;
}

void Push_LinkStack(StackNode *s, int x)
{
    StackNode *p;
    p = (StackNode*)malloc(sizeof(StackNode));
    p->data = x;
    p->next = s->next;
    s->next = p;
}

void Pop_LinkStack(StackNode *s)
{
    StackNode *p;
    p = (StackNode*)malloc(sizeof(StackNode));
    if(s->next == NULL)
        printf("the chain stack is empty!\n");
    else
    {
        p = s->next;
        s->next = p->next;//指向栈顶的下一个元素
        free(p);
    }
}

int length_LinkStack(StackNode *s)
{
    int i = 0;
	if (s->next == NULL)
		return 0;
	else
	{
		s = s->next;
		while (s != NULL)
		{
			i++;
			s = s->next;
		}
	}
	
	return i;
}

int main()
{
    int x;
    StackNode *top, *temp;//top为头指针，temp作为暂时的头指针
    top = Init_LinkStack();
    printf("input the data:\n");
    scanf("%d", &x);
    while(x!=0)
    {
        Push_LinkStack(top, x);
        scanf("%d", &x);
    }
    temp = top;
    printf("the data in the stack:\n");
    while(temp->next != NULL)
    {
        temp = temp->next;
        printf("%d\n", temp->data);
    }
    temp = top;
    while(temp->next->data!=2)
        Pop_LinkStack(temp);
    printf("弹出了第一个栈顶元素!\n");
    while(temp->next != NULL)
    {
        temp = temp->next;
        printf("%d\n", temp->data);
    }
    printf("%d\n", Empty_LinkStack(top));
    printf("%d\n", length_LinkStack(top));
    return 0;
}

