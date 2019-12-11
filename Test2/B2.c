/*
本题目要求计算下列分段函数f(x)的值：

f2-11

注：可在头文件中包含math.h，并调用sqrt函数求平方根，调用pow函数求幂。

输入格式:
输入在一行中给出实数x。

输出格式:
在一行中按“f(x) = result”的格式输出，其中x与result都保留两位小数。

输入样例1:
10
输出样例1:
f(10.00) = 3.16
输入样例2:
-0.5
输出样例2:
f(-0.50) = -2.75
*/
#include <stdio.h>
#include <math.h>

int main() {
    double x,y;
    scanf("%lf",&x);
    if (x >= 0) {
        y = sqrt(x);
    } else {
        y = (x + 1) * (x + 1) + 2 * x + 1.0 / x;
    }
    printf("f(%.2f) = %.2f",x,y);
    return 0;
}