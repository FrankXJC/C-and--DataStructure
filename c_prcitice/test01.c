//宏定义 #define
#include <stdio.h>
#define URL "http://www.baidu.com"
#define NAME "百度"
#define BOSS "李彦宏"
#define YEAR 2000
#define MONTH 1

int main(int argc, char const *argv[])
{
    printf("\t%s成立于%d年%d月\n", NAME, YEAR, MONTH);
    printf("\t%s是由%s所创建的\n", NAME, BOSS);
    printf("\t网址为：%s\n", URL);
    return 0;
}