/*
求： 

输入格式:
输入角度x。变量数据类型为double。π为3.14159。

输出格式:
输出y的值，精确到小数点后2位。

输入样例:
12.3
输出样例:
1.69
*/
#include<stdio.h>
#include<math.h>
#define pi 3.141596

int main(){
    double x,y;
    scanf("%lf",&x);
    y = sqrt((sin(pi/3)+1)*(sin(pi/6)+1)/cos((x/180)*pi));
    printf("%.2lf",y);
    return 0;
}