/*
本题要求对任意给定的正整数N，求方程X^2+Y^2=N的全部正整数解。

输入格式：
输入在一行中给出正整数N（≤10000）。

输出格式：
输出方程X^2+Y^2=N的全部正整数解，其中X≤Y。每组解占1行，两数字间以1空格分隔，按X的递增顺序输出。如果没有解，则输出No Solution。

输入样例1：
884
输出样例1：
10 28
20 22
输入样例2：
11
输出样例2：
No Solution
*/
#include<stdio.h>
int main() {
    int N;
    int i,j,m=0;
    scanf("%d",&N);
    for(j=1;j<=100;j++) {
        for(i=1;i<=100;i++)
        if((i*i+j*j == N)&&(j < i)) {
            printf("%d %d\n",j,i);
            ++m;
        }
    }
    if(m==0) {
        printf("No Solution");
	}
}