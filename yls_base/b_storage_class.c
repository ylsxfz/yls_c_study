//
// Created by Administrator on 2020/10/01.
//

/**
 * @Auther: yls
 * @Date: 2020/10/01 10:52
 * @Description: 存储类
 * @Version 1.0
 */
#include <stdio.h>

/**
 * 函数声明
 */
void func(void);


//全局变量 - static 是默认的
static int count = 10;

/**
 * 函数主入口
 * @return
 */
int main(){
    while (count--){
        func();
    }
    return 0;
}

/**
 * 定义函数
 */
void func(void){
    /**
     * ‘thingy’ 是 ‘func’ 的局部变量 - 只初始化一次
     * 每次调用函数 ‘func’ 'thingy' 值不会被重置
     */
     static int thingy = 5;
     thingy ++;
     printf(" thingy 为 %d，count 为%d\n",thingy,count);
}