/*
本题要求编写程序，输出n行由大写字母A开始构成的三角形字符阵列。

输入格式：
输入在一行中给出一个正整数n（1≤n<7）。

输出格式：
输出n行由大写字母A开始构成的三角形字符阵列。格式见输出样例，其中每个字母后面都有一个空格。

输入样例：
4
输出样例：
A B C D 
E F G 
H I 
J 
*/
#include <stdio.h>

int main() {
	int i,j;
	//TO-DO Write your code here.
	int n;
	scanf("%d",&n);
	char Aa = 'A';
	for (i=0;i<n;i++){
		for (j=n;j>i;j--){
			printf("%c ",Aa);
			Aa += 1;
		}
		printf("\n");
	}
	return 0;
}