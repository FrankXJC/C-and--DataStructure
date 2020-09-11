/*
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Maxsize 100    //堆栈元素的最大个数
typedef int ElemType;  // ElemType 可定义为int类型
typedef struct{
    ElemType data[Maxsize];
    int top;
}SqStack;

//初始化
void InitStack(SqStack S){
    S.top = -1;
}

//IsFull
int IsFull(SqStack S){
    if (S.top == Maxsize-1)
    {
        printf("堆栈满");
        return false;
    }
    
}

//IsEmpty
int IsEmpty(SqStack S){
    if (S.top == -1)
    {
        printf("栈为空");
        return false;
    }
    
}

//Insert
bool Push(SqStack S,ElemType x){
    (IsFull(S));
    S.top = S.top+1;
    S.data[S.top] = x;
    return true;
}
//出栈
bool Pop(SqStack S,ElemType x){
    IsEmpty(S);
    x = S.data[S.top];
    S.top = S.top-1;
    return true;
}
int Length(SqStack S){
	return S.top+1;
} 

int main(){
    int i;
    SqStack S;
    InitStack(S);
    printf("3入栈\n");
    Push(S,3);
    printf("4入栈\n");
    Push(S,4);
    printf("2出栈\n");
    Pop(S,2);
    for(i=0;i<Length(S);i++)
		printf("%d ",S.data[i]);
	printf("\n");
}*/

#include<stdio.h>
#include<stdlib.h> 
#define MaxSize 100   // 堆栈元素的最大个数 
typedef int ElementType; // ElementType 暂时定义为 int 类型 
typedef struct SNode *Stack;
struct SNode{
	ElementType Data[MaxSize];   // 存储堆栈元素
	int Top;  // 记录栈顶元素下标 
}; 
Stack S;

Stack CreateStack();  // 初始化堆栈 
int IsFull(Stack S); // 判断堆栈是否已满 
int IsEmpty(Stack S);   // 判断堆栈是否为空 
void Push(Stack S,ElementType item);   // 入栈 
ElementType Pop(Stack S);   // 出栈 

// 初始化堆栈 
Stack CreateStack(){
	S = (Stack)malloc(sizeof(struct SNode));
	S->Top = -1;
	return S;
} 

// 是否已满 
int IsFull(Stack S){
	return (S->Top == MaxSize-1);
}

// 是否为空 
int IsEmpty(Stack S){
	return (S->Top == -1); 
} 

// 入栈 
void Push(Stack S,ElementType item){
	if(IsFull(S)){   // Top 从 0 开始 
		printf("堆栈满");
		return;
	}else{
		S->Top++;   // 栈顶元素加一 
		S->Data[S->Top] = item;   // 放进最上 
		return;
	}
}

// 出栈
ElementType Pop(Stack S){
	if(IsEmpty(S)){
		printf("堆栈空");
		return 0;
	}else{
		ElementType val = S->Data[S->Top];  //取出最上 
		S->Top--;  // 栈顶元素减一 
		return val;
	}
}
int Length(Stack S){
	return S->Top+1;
} 
int main(){
    int i;
	S = CreateStack();
	printf("5入栈\n");
	Push(S,5);
	printf("7入栈\n");
	Push(S,7);
	printf("66入栈\n");
	Push(S,66);
	printf("%d出栈\n",Pop(S));
    printf("此时堆栈中元素为：\n");
    for(i=0;i<Length(S);i++)
		printf("%d \n",S->Data[i]);
    printf("\n");
	return 0;
}
