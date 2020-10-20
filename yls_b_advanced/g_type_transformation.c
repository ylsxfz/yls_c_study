//
// Created by Administrator on 2020/10/20.
//

/**
 * @Auther: yls
 * @Date: 2020/10/20 21:07
 * @Description: 强制类型转换
 * @Version 1.0
 */
#include <stdio.h>

int main() {

    int sum = 17, count = 5;
    double mean;

    mean = (double) sum / count;
    printf("value of mean : %f\n", mean);


    int i = 17;
    // ascii值是99
    char c = 'c';
    int tempSum;
    tempSum = i + c;
    printf("value of mean : %d\n", tempSum);

    float floatSum;
    floatSum = i + c;
    printf("value of mean : %f\n",floatSum);
    return 0;
}