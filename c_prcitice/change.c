#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	//思路一
	// int i;
	// int sum;
	// int n = 8;
	// for (i = 0; i <= n-1; i++)
	// {
	// 	int result = pow(2,i);
	// 	sum += result;
	// }
	// printf("%d\n", sum);
	// return 0;
	//
	

	//思路二
	// int n = 8;
	// int result = pow(2,n)-1;
	// printf("%d\n", result); 

	int n =13;
	int result = pow(2,n);
	printf("%d\n", result);
}