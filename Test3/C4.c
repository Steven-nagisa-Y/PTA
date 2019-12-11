/*
本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。

输入样例:
511 292
输出样例:
73 2044
*/
#include <stdio.h>

int zdgys(int m,int n) {
    int temp, i;
    if (m < n) {
        temp = m;
        m = n;
        n = temp;
    }
    i = n;
    while (i > 0) {
        if (m % i == 0 && n % i ==0){
            break;
        } else {
            i--;
        }
    }
    return i;
}

int zxgbs(int m,int n) {
    int temp, i;
    if(m<n)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(i=m; i>0; i++) {
        if(i%m==0 && i%n==0)
            break;
        }
    return i;
}
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d %d",zdgys(m,n),zxgbs(m,n));
    return 0;
}