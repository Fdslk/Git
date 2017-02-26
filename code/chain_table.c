#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;//指向后面节点的指针
}LNode;

LNode *CreatLinkList_head()
{
	int x;
	LNode *head, *p;//p用来创建新的节点存储新的节点信息
	head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	printf("Input int number except 0:\n");
	scanf("%d", &x);
	while (x != 0)
	{
		p = (LNode*)malloc(sizeof(LNode));//创建新的
		p->data = x;
		p->next = head->next;
		head->next = p;
		scanf("%d", &x);
	}
	return head;
}

LNode *CreatLinkList_rear()
{
	LNode *head, *p, *q;
	int x;
	head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	p = head;//把头结点在p中保存，p相当于是头结点
	q = p;//刚开始的时候头和尾在一块
	printf("input any int number:\n");
	scanf("%d", &x);
	while (x != 0)
	{
		p = (LNode*)malloc(sizeof(LNode));
		p->data = x;
		p->next = NULL;
		q->next = p;
		q = p;
		scanf("%d", &x);
	}
	return head;
}

int length_Link(LNode *head)//查表长
{
	int i = 0;
	LNode *p = head;
	while (p->next != NULL)
	{
		p = p->next;
		i++;
	}
	return i;
}

LNode *GetLink(LNode *head, int i)//按结点序号查找
{
	LNode *p;
	p = head;
	int j = 0;
	while (p->next != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	return p;
}

LNode *LocalLink(LNode *head, int x)//按值查找
{
	LNode *p;
	p = head->next;
	while (p != NULL&&p->data != x)
		p = p->next;
	return p;
}

void insert_Link(LNode *head, int i, int x)
{
	LNode *p, *q;//p = the node(i-1), q = new node
	p = GetLink(head, i - 1);
	if (p == NULL)//查找到前一个结点不存在，就没办法插入
		printf("the node can't be inserted\n");
	else
	{
		q = (LNode*)malloc(sizeof(LNode));
		q->data = x;
		q->next = p->next;
		p->next = q;
	}
}

void Del_Link(LNode *head, int i)
{
	LNode *q, *p;
	p = GetLink(head, i - 1);
	if (p == NULL)//待删除结点的前一个结点不存在
		printf("error!\n");
	else if (p->next == NULL)//待删除结点不存在
		printf("error!\n");
	else//p->next = p->next->next
	{
		q = p->next;
		p->next = q->next;
	}
}

int main(void)
{
	LNode *p, *temp;
	//int i, n;
	p = CreatLinkList_rear();
	temp = p;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d\t0x%x\n", p->data, p);
	}

	printf("the Link length is %d\n", length_Link(temp));
	printf("---------insert operation----------\n");
	insert_Link(temp, 3, 9);
	p = temp;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d\t0x%x\n", p->data, p);
	}
	printf("----------delete operation----------\n");
	p = temp;
	Del_Link(p, 3);
	while (p->next != NULL)
	{
		p = p->next;
		printf("%d\t0x%x\n", p->data, p);
	}
	printf("----------local operation----------\n");

	p = temp;
	p = LocalLink(temp, 3);
	if(p!=NULL)
        printf("%d", p->data);
	return 0;
}

