/*
本题要求编写程序，针对输入的N个字符串，输出其中最长的字符串。

输入格式：
输入第一行给出正整数N；随后N行，每行给出一个长度小于80的非空字符串，其中不会出现换行符，空格，制表符。

输出格式：
在一行中用以下格式输出最长的字符串：

The longest is: 最长的字符串
如果字符串的长度相同，则输出先输入的字符串。

输入样例：
5
li
wang
zhang
jin
xiang
输出样例：
The longest is: zhang
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 80

// Not edited by Steven
int main() {
	int i, j;
	char matrix[N];
	//To-do
	i = 0;
	char s[80] = {""}, max[80] = {""};
	int n;
	scanf("%d",&n);
	scanf("%s",s);
	int len_max, len;
	strcpy(max,s);
	for(i=1; i<n; i++) {
		scanf("%s",s);
		len_max = strlen(max);
		len = strlen(s);
		if(len_max < len)
			strcpy(max,s);
	}
	printf("The longest is: %s",max);
	return 0;
}