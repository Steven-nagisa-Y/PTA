/*
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例:
10 31
输出样例:
7 143
*/
#include<stdio.h>
#include<math.h> 

int isPrime(int n){
int i,sign=1;
if(n<2)
	sign=0; //一开始没有考虑到n<2的问题，以为题目中给出的测试数据都是在题目要求范围内的！ 
for(i=2;i<=sqrt(n);i++){
if(n%i==0){
    sign=0;
}
}

return sign;
}

int main(){
	int sum=0,M,N,i,count=0;
	scanf("%d%d",&M,&N);
	for(i=M;i<=N;i++){
		if(isPrime(i)){
			sum=sum+i;
			count++;
		}
		
	}
	printf("%d %d",count,sum);
	return 0;
}