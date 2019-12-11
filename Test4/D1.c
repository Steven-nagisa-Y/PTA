/*
这是中国古典算术问题，某工地需要搬运砖块，已知男人一人搬3块，女人一人搬2块，小孩两人搬1块。有多少种搬法用N人正好搬N块砖？

输入格式:
在一行内输出正整数N(N<500)

输出格式:
输出所有满足条件的搬法，每种搬法占一行。

每行按如下格式依次输出该搬法中男人、女人、小孩的人数，按男人人数的递增顺序输出，中间用空格间隔（=前后没有多余的空格，行末也无空格）。

men=男人数 women=女人数 child=小孩数

若没有满足条件的搬法，则输出"No solution!"

输入样例1:
45
输出样例1:
men=0 women=15 child=30
men=3 women=10 child=32
men=6 women=5 child=34
men=9 women=0 child=36
输入样例2:
1
输出样例2:
No solution!
*/
#include <stdio.h>

int main() {
	int i;
	//TO-DO Write your code here.
	int N;
    int j,k;
    int flag = 0;
    scanf("%d", &N);
    for(i=0; i<=N/3; i++){
        for(j=0; j<=N/2; j++){
            for(k=0; k<=N; k+=2){
                if((i+j+k == N) && (3*i+2*j+k/2==N)){
                    flag =1;
                    printf("men=%d women=%d child=%d\n", i, j, k);
                }
            }
        }
    }
    if(flag == 0) printf("No solution!\n");
	return 0;
}