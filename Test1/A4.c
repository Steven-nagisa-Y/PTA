/*
程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。

输入格式：
每个测试是一个3位的正整数。

输出格式：
输出按位逆序的数。

输入样例：
123
输出样例：
321
*/
#include<stdio.h>

int main() {
    unsigned int num;
    scanf("%d",&num);
    int a,b,c;
    a = num / 1 % 10;
    b = num / 10 % 10;
    c = num / 100 % 10;
    int sb;
    sb = a * 100 + b * 10 + c;
    printf("%d",sb);
    return 0;
}