//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 20:59
 * @Description: 指向指针的指针
 * @Version 1.0
 */

#include <stdio.h>


/**
 * 主函数
 * @return
 */
int main(){
    int var;
    int *ptr;
    int **pptr;

    var = 300;

    // 获取 var 的地址
    ptr = &var;

    // 使用运算符 & 获取 ptr 的地址
    pptr = &ptr;

    // 使用 pptr 获取值
    printf("value of var = %d\n",var);
    printf("value available at *ptr = %d\n",*ptr);
    printf("value available at **pptr = %d\n",**pptr);


}

