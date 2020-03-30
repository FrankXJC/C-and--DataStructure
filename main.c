#include <stdio.h>

int  main(){
    int n, i;
    int isPrime;

    printf("请输入数字：" );
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        isPrime = 1;
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
        printf("%d不是素数\n" , n);
    else
        printf("%d是素数\n" , n);
    return 0;
}