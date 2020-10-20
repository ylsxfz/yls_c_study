//
// Created by Administrator on 2020/10/20.
//

/**
 * @Auther: yls
 * @Date: 2020/10/20 21:44
 * @Description: 递归处理
 * @Version 1.0
 */
#include <stdio.h>

/**
 * 求阶乘
 * @param i 阶乘数
 * @return
 */
double factorial(unsigned int i){
    if (i <= 1){
        return 1;
    }
    return i * factorial(i-1);
}

/**
 * 斐波那契数列
 * @param i 数
 * @return
 */
int fibonaci(int i){
    if (i == 0){
        return 0;
    }
    if (i == 1){
        return 1;
    }
    return fibonaci(i-1) + fibonaci(i-2);
}

void main(){
    int i = 15;
    printf("%d 的阶乘为 %f\n",i,factorial(i));


    printf("斐波那契数列：");
    int j;
    for (j = 0; j < 10 ; j++) {
        printf("%d\t\n",fibonaci(j));
    }

}