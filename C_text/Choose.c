#include <stdio.h>
#include <string.h>
#define STR_LEN 128
#define STR_NUM 64
int main()
{
int i = 0, j = 0, n = 0;
int len = 0;
char *start = NULL;
char *end = NULL;
char str[STR_NUM][STR_LEN] = {0};
printf("Please input the number of string: \n");
scanf("%d", &n);
printf("Please input all the string: \n");
for (i = 0; i < n; i++)
{
scanf("%s", str[i]);
}
for (j = 0; j < n; j++)
{
start = str[j];
len = strlen(str[j]);
end = str[j] + len - 1;
while (start - end <= 0)
{
if (*start++ != *end--)
{
break;
}
}
if (start > end)
{
printf("yes\n");
}
else
{
printf("no\n");
}
}
return 0;
}