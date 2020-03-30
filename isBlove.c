//
// Created by frank on 2020/3/30.
//

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i=0,s,n;
    printf("请输入一个数：");
    scanf("%d",&n);
    s=n;
    while(s!=0){
        i=i*10+s%10;
        s/=10;
    }
    if(i==n)
        printf("是回文数。");
    else
        printf("不是回文数。");
}