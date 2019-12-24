/*
本题要求编写程序，打印一个高度为n的、由“*”组成的正菱形图案。

输入格式:
输入在一行中给出一个正的奇数n。

输出格式:
输出由n行星号“*”组成的菱形，如样例所示。每个星号后跟一个空格。

输入样例:
7
输出样例:
      * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      * 

*/
#include <stdio.h>

int main() {
	int i,j;
	//TO-DO Write your code here.
	int n=0;
	scanf("%d",&n);
	int row=(n/2)+1;
	for(int i=1;i<=row;i++){
		for(int j=row-i;j>0;j--){
			printf("  ");
		}
		for(int j=0;j<(2*i-1);j++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=1;i<row;i++){
		for(int j=0;j<i;j++){
			printf("  ");
		}
		for(int j=(row-i)*2-1;j>0;j--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
