/*
本题要求编写程序，将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序。

输入格式：
输入在第一行先给出非负整数N（<10）；第二行给出N个从小到大排好顺序的整数；第三行给出一个整数X。

输出格式：
在一行内输出将X插入后仍然从小到大有序的整数序列，每个数字后面有一个空格。

输入样例：
5
1 2 4 5 7
3
输出样例：
1 2 3 4 5 7 
*/
#include<stdio.h>

int main() {
    int n, i, j;
    scanf("%d",&n);
    int a[10];
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int num, index;
    scanf("%d",&num);
    if (num < a[0]) {
    	index = 0;
	}
	if (num > a[n-1]) {
		index = n;
	}
    for (i=1; i<n; i++) {
    	if (num > a[i-1] && num < a[i]) {
    		index = i;
		}
	}
	for (j=n; j>index; j--) {
		a[j] = a[j-1];
	}
	a[index] = num;
	
	for (i=0; i<=n; i++) {
		printf("%d ",a[i]);
	}
    return 0;
}