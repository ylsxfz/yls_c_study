//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 20:51
 * @Description: 指针数组
 * @Version 1.0
 */

#include <stdio.h>

const int MAX = 3;

/**
 * 主函数
 * @return
 */
int main(){
    int var[] = {10,100,200};
    int i,*ptr[MAX];
    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }

    for (i = 0; i < MAX; i++) {
        printf("存储地址为：var[%d] = %x\n",i,ptr[i]);
        printf("value of var[%d] = %d\n",i,*ptr[i]);
    }

    /**
     * 也可以用一个指向字符的指针数组来存储一个字符串列表
     */
    const  char *names[] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali"
    };
    for (i = 0; i < MAX ; i++) {
        printf("value of names[%d] = %s\n",i,names[i]);
    }


    return 0;
}