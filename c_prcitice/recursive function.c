#include <stdio.h>



//递归
// int fun(int n)
// {
// 	if (n == 1)
// 	{
// 		return(1);
// 	}else
// 	}{
// 		return(fun(n-1)*n);
// 	}
// }

//循环
// int fun(int n)
// {
// 	int i;
// 	int sum;
// 	if (n == 1)
// 	{
// 		return(1);
// 	}
// 	else
// 	{
// 		for (i = 2; i <= n; i++){
// 			i = i*(i-1);
// 			sum = i;
// 		}
// 		return sum;	
// 	}
// }


int main(int argc, char const *argv[])
{
	int a = fun(3);
	printf("%d\n", a);
	return 0;
}
