/*
输入一个3位正整数，将其每一位的数字相加，输出和。

输入格式:
输入一个3位正整数。 变量数据类型为unsigned。

输出格式:
输出整数每一位相加后的整数和。

输入样例:
123
输出样例:
6
*/
#include<stdio.h>

int main() {
    unsigned int num;
    scanf("%d",&num);
    int a,b,c;
    a = num / 1 % 10;
    b = num / 10 % 10;
    c = num / 100 % 10;
    printf("%d",a+b+c);
    return 0;
}