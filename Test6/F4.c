/*
本题要求编写程序，将给定字符串中的大写英文字母按以下对应规则替换：

原字母	对应字母
A	Z
B	Y
C	X
D	W
…	…
X	C
Y	B
Z	A
输入格式：
输入在一行中给出一个不超过80个字符、并以回车结束的字符串。

输出格式：
输出在一行中给出替换完成后的字符串。

输入样例：
Only the 11 CAPItaL LeTtERS are replaced.
输出样例：
Lnly the 11 XZKRtaO OeGtVIH are replaced.
*/
#include <stdio.h>

int main() {
	char str[81];
	int k, i;
	k = 0;
	while ( (str[k] = getchar()) != '\n' ) {
		k++;
	}
	str[k] = '\0';
	for ( i=0; i<k; i++ ) {
		if ( str[i] >= 'A'  &&  str[i] <= 'Z' ) {
			str[i] = 'Z' + ( 'A' - str[i] );
		}
		printf("%c", str[i]);
	}
	return 0;
}
