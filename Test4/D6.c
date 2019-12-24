/*
输入一个正整数repeat (repeat<10)，做repeat次下列运算：

输入一个正整数n(n<10)，输出n行数字金字塔。
输出时使用以下语句：

printf(" ");
printf("%d ", i);
printf("\n");
输入格式:
输入在第1行中给出1个正整数repeat(repeat<10)

接下来repeat行，每行给出一个正整数n(n<10)

输出格式:
按照对应顺序的n值，依次输出repeat个数字金字塔 （n行数字金字塔的格式如样例所示，注意：每个数字后面跟一个空格。）

输入样例:
2
5
2
输出样例:
        1 
      2 2 2 
    3 3 3 3 3 
  4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5 
  1 
2 2 2 
*/
#include<stdio.h>
 
void print(int n) {
	int i,j;
	for(i=1; i<=n; i++){
		for(j=1; j<=2*(n-i); j++) {
			printf(" ");
		}
	for(j=1; j<=2*i-1; j++) {
		printf("%d ", i);
	}
        printf("\n");
    }
}
int main() {
    int n;
    int count, i;
    scanf("%d", &n);
    for(count=0; count<n; count++){
        scanf("%d", &i);
        print(i);
    }
    return 0;
}
