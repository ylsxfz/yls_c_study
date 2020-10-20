//
// Created by Administrator on 2020/10/20.
//

/**
 * @Auther: yls
 * @Date: 2020/10/20 21:54
 * @Description: 可变参数
 * @Version 1.0
 */
#include <stdio.h>
#include <stdarg.h>

double average(int num,...)
{
    va_list vaList;
    double sum = 0.0;
    int i;

    /**
     * 为 num 个参数初始化 valist
     */
     va_start(vaList,num);
     
     /**
      * 访问所有赋给 valist 的参数
      */
    for (i = 0; i < num; i++) {
        sum += va_arg(vaList, int);
    }

    va_end(vaList);

    return sum/num;
}

int main(){
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}
