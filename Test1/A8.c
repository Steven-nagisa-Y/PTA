/*
本题要求编写程序，计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。

输入格式:
输入在一行中给出2个正整数A和B。

输出格式:
在4行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商。

输入样例:
3 2
输出样例:
3 + 2 = 5
3 - 2 = 1
3 * 2 = 6
3 / 2 = 1
*/
#include<stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    return 0;
}