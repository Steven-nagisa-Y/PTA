/*
本题要求编写程序，输出指定的由“*”组成的三角图案。

输入格式：
本题无输入

输出格式：
按照下列格式输出由“*”组成的三角图案。

****
***
**
*

*/
#include<stdio.h>

int main() {
    for (int i=4;i>0;i--){
        for (int j=0;j<i;j++){
            printf("*");
        }
    printf("\n");
    }
}