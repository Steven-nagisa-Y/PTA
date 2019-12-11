/*
本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。

注意：题目保证最大和最小值都是唯一的。

输入格式：
输入在第一行中给出一个正整数N（≤10），第二行给出N个整数，数字间以空格分隔。

输出格式：
在一行中顺序输出交换后的序列，每个整数后跟一个空格。

输入样例：
5
8 2 5 1 4
输出样例：
1 2 5 4 8 
*/
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d",&n);
    int a[10];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    // Get the max, min
    int max = a[n-1], min = a[0], max_index, min_index;
    for (i=0; i<n; i++){
    	if (a[i] < min){
    		min = a[i];
    	}
    	if (a[i] > max){
    		max = a[i];
		}
	}
	//Get max,min index
	for (i=0; i<n; i++) {
		if (a[i] == max) {
			max_index = i;
		}
		if (a[i] == min) {
			min_index = i;
		}
	}
	int temp;
	temp = a[0];
	a[0] = min;
	a[min_index] = temp;
	//Get max,min index
	for (i=0; i<n; i++) {
		if (a[i] == max) {
			max_index = i;
		}
		if (a[i] == min) {
			min_index = i;
		}
	}
	temp = a[n-1];
	a[n-1] = max;
	a[max_index] = temp;
	//print
	for (i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
    return 0;
}