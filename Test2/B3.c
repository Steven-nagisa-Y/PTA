/*
运输公司对用户计算运费。路程(s)越远，每千米运费就越低。标准如下：

s＜250km ，没有折扣；
250km≤s＜500km， 2%的折扣；
500km≤s＜1000km， 5%的折扣；
1000km≤s＜2000km，8％的折扣；
2000km≤s＜3000km，10％的折扣；
3000km≤s，15％的折扣。
设每千米每吨货物的基本运费为p,货物重为 w,距离为s,折扣为d,则总运费f的计算公式为： f＝p×w×s×(１－d)

输入格式:
在一行中以小数形式输入基本运费、货重和距离，以空格作为分隔符。

输出格式:
在一行输出计算出来的运费，精确到小数点后２位的值。

输入样例:
在这里给出一组输入。例如：

100 20 300
输出样例:
在这里给出相应的输出。例如：

freight=588000.00
*/
#include <stdio.h>
#include <math.h>

int main() {
    float p, w, s, d, f;
    scanf("%f %f %f",&p,&w,&s);
    if (s < 250) {
        d = 1;
    } else if (s >= 250 && s < 500) {
        d = 0.98;
    } else if (s >= 500 && s < 1000) {
        d = 0.95;
    } else if (s >= 1000 && s < 2000) {
        d = 0.92;
    } else if (s >= 2000 && s < 3000) {
        d = 0.9;
    } else if (s >= 3000) {
        d = 0.85;
    }
    f = p * w * s * d;
    printf("freight=%.2f",f);
    return 0;
}