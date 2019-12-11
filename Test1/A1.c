/* Question:
交换变量a，b的值，如输入a的值为1，b的值为5，则输出a的值为5，b的值为1。

输入格式:
输入两个整数，之间用一个空格间隔。

输出格式:
在一行中按照“a=x,b=y”的格式输出，其中x和y均是原样输出，不加宽度控制。

输入样例:
1 5
输出样例:
a=5,b=1
*/
#include<stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("a=%d,b=%d",b,a);
    return 0;
}