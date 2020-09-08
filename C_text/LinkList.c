//C语言创建单链表如下：bai

#include"stdio.h"

#include"stdlib.h"

#include"malloc.h"

#include<"iostream.h">

typedef struct node

{

int  data;

node * next;

}node , * List;

void create(int n)

{

int c;

List s,L;

L=(List)malloc(sizeof(node));

L->next=NULL;

printf("请输入du第1个数据zhi：");

scanf("%d",&c);

L->data=c;

for(int i=2;i<=n;i++)

{

s=(List)malloc(sizeof(node));

printf("请输入第%d个数据：",i);

scanf("%d",&c);

s->data=c;

s->next=L;

L->next =s;

}

printf("链表dao创建成功！");

}

void main()

{

int n;

printf("请你输入链表的个数：");

scanf("%d",&n);

create(n);

}