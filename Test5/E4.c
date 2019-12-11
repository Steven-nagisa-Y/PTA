/*
本题要求统计一个整型序列中出现次数最多的整数及其出现次数。

输入格式：
输入在一行中给出序列中整数个数N（0<N≤1000），以及N个整数。数字间以空格分隔。

输出格式：
在一行中输出出现次数最多的整数及其出现次数，数字间以空格分隔。题目保证这样的数字是唯一的。

输入样例：
10 3 2 -1 5 3 4 3 0 3 2
输出样例：
3 4
*/
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int number[1000];
   int i,j,n;
   int temp;
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
        scanf("%d",&number[i]);
   for(i=2;i<=n;i++)
    for(j=0;j<=n-i;j++){
       if(number[j]>number[j+1]){
           temp=number[j];
           number[j]=number[j+1];
           number[j+1]=temp;
       }
 
   }
  int count=0;
  int count1=0;
  int flag=0;
  if(n>1){
 
  for(i=0;i<=n-2;i++){
      count1=1;
      while(number[i+1]==number[i]){
          i++;
          count1++;
      }
      if(count1>count){
          flag=number[i-1];
          count=count1;
      }
 
 
  }
      printf("%d %d\n",flag,count);
}
  else if(n==1)
     printf("%d %d\n",number[0],1);
 
   return 0;
}