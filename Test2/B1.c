/*
本题要求将输入的任意3个整数从小到大输出。

输入格式:
输入在一行中给出3个整数，其间以空格分隔。

输出格式:
在一行中将3个整数从小到大输出，其间以“->”相连。

输入样例:
4 2 8
输出样例:
2->4->8
*/
#include <stdio.h>

int main() {
    int a[3];
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	int max = a[0], mid = a[0], min = a[0], i;
	for (i=0;i<3;i++) {
		if (a[i] >= max) {
			max = a[i];
		} else if (a[i] <= min) {
			min = a[i];
		}
	}
	for (i=0;i<3;i++) {
		if (a[i] != max && a[i] != min) {
            mid =a[i];
		}
	}
	printf("%d->%d->%d",min,mid,max);
    return 0;
}