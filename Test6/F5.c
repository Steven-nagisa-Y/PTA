/*
一个IP地址是用四个字节（每个字节8个位）的二进制码组成。请将32位二进制码表示的IP地址转换为十进制格式表示的IP地址输出。

输入格式：
输入在一行中给出32位二进制字符串。

输出格式：
在一行中输出十进制格式的IP地址，其由4个十进制数组成（分别对应4个8位的二进制数），中间用“.”分隔开。

输入样例：
11001100100101000001010101110010
输出样例：
204.148.21.114
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 10
#define M 4

// Not edited by Steven
int main() {
	int i, j, k=0, len1=0;
	char str[M][N];
	char ch;
	int sum[M] = {0};
	for (i = 0; i < M; i++) {
		for (j = 0; j < 8; j++) {
			ch = getchar();
			str[i][j] = ch;
		}
	}
	for (i = 0; i < M; i++) {
		k = 0;
		for (j = 8; j > 0; j--) {
			sum[i] += (str[i][j-1]-48) * pow(2, k); //字符'0'的ASCII码值是48
			k++;
		}
	}
	for (i = 0; i < M; i++) {
		printf("%d", sum[i]);
		if (i != 3) {
			printf(".");
		}
	}
	printf("\n");
	return 0;
}