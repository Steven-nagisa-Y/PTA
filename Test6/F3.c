/*
有4名学生，每名学生有4门课程，编写程序，要求输入所有学生的成绩，然后统计每门课不及格的人数。

输入格式:
输入4名学生的4门课程到二维数组a[4] [4] ，数据之间用一个空格分隔，每输入4个数，敲回车，成绩为整数。

输出格式:
在一行中输出每列数据中小于60的个数，即不及格人数，每个数据后有一个空格。

输入样例:
在这里给出一组输入。例如：

86 54 78 90
61 50 60 45
30 90 70 85
80 85 75 96

输出样例:
在这里给出相应的输出。例如：

1 2 0 1 
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 4

int main() {
	int i, j;
	int matrix[N][N];
	//To-do
	for (i=0; i<N; i++) {
		for (j=0; j<N; j++) {
			scanf("%d",&matrix[i][j]);
		}
	}
	
	int line_count[4] = {0};
	for (j=0; j<N; j++) {
		for (i=0; i<N; i++) {
			if (matrix[i][j] < 60) {
				line_count[j]++;
			}
		}
	}
	
	for (i=0; i<N; i++) {
		printf("%d ",line_count[i]);
	}
	return 0;
}