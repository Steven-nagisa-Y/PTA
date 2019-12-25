/*
本题要求编写程序，输入10个字符，统计其中英文字母、空格或回车、数字字符和其他字符的个数。

输入格式:
输入为10个字符。最后一个回车表示输入结束，不算在内。

输出格式:
在一行内按照

letter = 英文字母个数, blank = 空格或回车个数, digit = 数字字符个数, other = 其他字符个数
的格式输出。

输入样例:
aZ &
09 Az
输出样例:
letter = 4, blank = 3, digit = 2, other = 1
*/
#include <stdio.h>
int main() {
	int letter = 0, blank = 0, digit = 0, other = 0;
	int i;
	char ch;
	for(i=0; i<10; i++) {
    	ch = getchar();
    	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        	letter++;
    	else if(ch>='0' && ch<='9')
        	digit++;
    	else if(ch==' ' || ch=='\n')
        	blank++;
    	else
        	other++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}