#include <stdio.h>
#include <float.h>

int x;
int y;
int addtwonum(){
    /**
     * 变量的声明有两种情况：
     *   .1、一种是需要建立存储空间的。例如：int a 在声明的时候就已经建立了存储空间。
     *   .2、另一种是不需要建立存储空间的，通过使用extern关键字声明变量名而不定义它。 例如：extern int a 其中变量 a 可以在别的文件中定义的。
     *   .除非有extern关键字，否则都是变量的定义。
     */
    //函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;

    //给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}


/**
 * void 类型指定没有可用的值。
 */
void main() {
    /**
     * 这是我的第一个c程序
     */
    printf("Hello, World!\n");
    printf("Hello\tworld\n\n");

    // 整数类型
    printf("int 的存储大小：%lu \n", sizeof(int));

    //浮点类型
    printf("float 存储的最大字节数：%lu \n",sizeof(float));
    printf("float 最小值：%E\n",FLT_MAX);
    printf("float 的最大值：%E\n",FLT_MIN);
    printf("精确值：%d\n",FLT_DIG);
    printf("\n");


    /**
     * 函数调用
     */
    int result ;
    result = addtwonum();
    printf("result 为：%d \n",result);


}


