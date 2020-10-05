//
// Created by Administrator on 2020/10/05.
//

/**
 * @Auther: yls
 * @Date: 2020/10/05 18:16
 * @Description: 位域：
 * @Version 1.0
 */

#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct {
    unsigned int widthValidated:1;
    unsigned int heightValidated:1;
} status2;


struct {
    unsigned int age:3;
} Age;

int main(){
    printf("Memory size occupied by status1 : %d\n",sizeof(status1));
    printf("Memory size occupied by status2 : %d\n",sizeof(status2));


    Age.age = 4;
    printf("sizeof(Age): %d\n",sizeof(Age));
    printf("Age.age: %d\n",Age.age);

    Age.age = 7;
    printf("Age.age: %d\n",Age.age);

    // 二进制表示为 1000 有四位，超出
    Age.age = 8;
    printf("Age.age: %d\n",Age.age);
    return 0;
}
