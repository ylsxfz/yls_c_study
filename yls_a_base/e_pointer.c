//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 09:10
 * @Description: 指针
 *      int    *ip;    // 一个整型的指针
 *      double *dp;    // 一个 double 型的指针
 *      float  *fp;    // 一个浮点型的指针
 *      char   *ch;     // 一个字符型的指针
 * @Version 1.0
 */

#include <stdio.h>

/**
 * 指针基本运算
 * @return
 */
void pointer_base();

/**
 * 指针基本递增
 * @return
 */
void pointer_add();

/**
 * 指针基本递减
 * @return
 */
void pointer_decline();

/**
 * 指针基本比较
 * @return
 */
void pointer_compare();

/**
 * 指针运算
 * @return
 */
void pointer_operation();

int main() {
    // 指针运算
    pointer_operation();
    return 0;
}

/**
 * 指针的基本运算
 */
void pointer_base() {
    int var1;
    char var2[10];

    printf("var1 的变量地址：%p\n", &var1);
    printf("var2 的变量地址：%p\n", &var2);


    int var = 20;
    int *ip;

    ip = &var; /* 在指针变量中存储var的地址 */
    printf("address of var variable：%p\n", &var);

    /* 在指针变量中存储的地址 */
    printf("address stored in ip variable：%p\n", ip);

    /* 使用指针访问值 */
    printf("value of *ip variable: %d\n", *ip);


    /**
     * c中的NULL指针
     */
    int *ptr = NULL;
    printf("ptr 的地址是：%p\n", ptr);

    // if(ptr)     /* 如果 p 非空，则完成 */
    // if(!ptr)    /* 如果 p 为空，则完成 */
}

/**
 * 指针运算
 */
void pointer_operation() {
    printf("\n***********************指针基本知识*****************************\n");
    pointer_base();

    printf("\n***********************指针递增*****************************\n");
    pointer_add();

    printf("\n***********************指针递减*****************************\n");
    pointer_decline();

    printf("\n***********************指针比较*****************************\n");
    pointer_compare();

}


const int MAX = 3;

/**
 * 指针比较
 */
void pointer_compare(){
    int var[] = {10, 100, 200};
    int i, *ptr;

    // 指针中第一个元素的地址
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1]){
        printf("存储地址： var[%d] = %x\n",i,ptr);
        printf("存储值：var[%d] = %d\n",i,*ptr);

        ptr++;
        i++;
    }

}

/**
 * 递减一个指针
 */
void pointer_decline() {
    int var[] = {10, 100, 200};
    int i, *ptr;

    // 指针中最后一个元素的地址
    ptr = &var[MAX - 1];
    for (i = MAX; i > 0; i--) {
        printf("存储地址：var[%d] = %x\n", i - 1, ptr);
        printf("存储值：%var[%d] = %d\n",i - 1, *ptr);

        // 指针指向下一个位置
        ptr--;
    }
}


/**
 * 递增一个指针
 */
void pointer_add() {
    int var[] = {10, 100, 200};
    int i, *ptr;

    /* 指针中的数组地址 */
    ptr = var;
    for (i = 0; i < MAX; i++) {
        printf("存储地址：var[%d] = %x\n", i, ptr);
        printf("存储的值：var[%d] = %d\n", i, *ptr);

        // 指针指向下一个位置
        ptr++;
    }
}
