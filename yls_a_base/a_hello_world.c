//
// Created by Administrator on 2020/10/01.
//
#include <stdio.h>
#include <float.h>

/**
 * 常量
 *  1、使用 #define 预处理器。
 *  2、使用 const 关键字。
 */
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

//全局变量 - static 是默认的
static int count = 10;

/**
 * @Auther: yls
 * @Date: 2020/10/01 10:53
 * @Description: c语句的基础知识
 * @Version 1.0
 */
int main() {
    printf("hello world！");
    /**
     * 所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
     * printf() 用于格式化输出到屏幕。printf() 函数在 "stdio.h" 头文件中声明。
     * stdio.h 是一个头文件 (标准输入输出头文件) , #include 是一个预处理命令，用来引入头文件。
     * 当编译器遇到 printf() 函数时，如果没有找到 stdio.h 头文件，会发生编译错误。
     * return 0; 语句用于表示退出程序。
     */


    /**
     * 基础数据类型
     */
    printf("float 存储最大字节数 : %lu \n", sizeof(float));
    printf("float 最小值: %E\n", FLT_MIN );
    printf("float 最大值: %E\n", FLT_MAX );
    printf("精度值: %d\n", FLT_DIG );


    /**
     * 类型强转
     */
    float f,x=3.6,y=5.2;
    int i=4,a,b;
    a=x+y;
    b=(int)(x+y);
    f=10/i;
    printf("a=%d,b=%d,f=%f,x=%f\n",a,b,f,x);


    int area;
    area = LENGTH * WIDTH;
    printf("value of area:%d", area);
    printf("%c", NEWLINE);


    /**
     * 常量
     *  1、使用 #define 预处理器。
     *  2、使用 const 关键字。
     */
    const int LENGTH_ONE = 20;
    const int WIDTH_ONE = 5;
    const char NEW_LIVE = '\n';
    area = LENGTH_ONE * WIDTH_ONE;
    printf("value of area:%d", area);
    printf("%c", NEWLINE);

    return 0;
}