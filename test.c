#include<stdio.h>
int main(int argc, char const *argv[])
{
	// int i , sum = 0, n = 100;
	// for (int i = 1; i <= n; i++)
	// {
	// 	/* code */
	// 	sum += i;
	// }
	// printf("%d\n" , sum);

//	高斯求和
	int i, sum = 0, n = 100;
	sum = (1 + n) * (n / 2);
	printf("%d\n", sum);
	return 0;
}