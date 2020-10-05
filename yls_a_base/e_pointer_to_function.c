//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 21:06
 * @Description: 传递指针给函数
 * @Version 1.0
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * 声明函数
 * @param par 传递一个无符号的 long 型指针给函数
 */
void getSeconds(unsigned long *par);


/**
 * 声明一个函数
 * @param arr 数组
 * @param size 大小
 * @return  返回double型的平均值
 */
double getAverage(int *arr, int size);


/**
 * 能接受指针作为参数的函数，也能接受数组作为参数
 * @return
 */
int * getRandom();

/**
 * 主函数
 * @return
 */
int main() {

    unsigned long sec;

    getSeconds(&sec);

    printf("Number of seconds: %ld\n", sec);



    /**
     * 能接受指针作为参数的函数，也能接受数组作为参数
     */
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // 传递一个指向数组的指针作为参数
    avg = getAverage(balance, 5);

    printf("Average value is: %f\n", avg);



    /**
     * 从函数返回指针
     */
     int *p;
     int i;
     p = getRandom();
    for (i = 0; i < 10; i++) {
        printf("*(p+[%d]):%d\n",i,*(p+i));
    }

    return 0;

}

/**
 * 传递一个指针给函数
 * @param par
 */
void getSeconds(unsigned long *par) {
    //获取当前的秒数
    *par = time(NULL);
    return;
}


/**
 * 获取一个平均值
 * @return
 */
double getAverage(int *arr, int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    avg = (double) sum / size;
    return avg;
}


/**
 * 要生成和返回随机数的函数
 * @return
 */
int *getRandom() {
    static int r[10];
    int i;

    // 设置种子
    srand((unsigned) time(NULL));
    for ( i = 0; i < 10; ++i) {
        r[i] = rand();
        printf("%d\n",r[i]);
    }

    return r;
}