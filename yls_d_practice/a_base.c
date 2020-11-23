/**
 * @Auther: yls
 * @Date: 2020/11/23 15:43
 * @Description: C 语言实例
 * @Version 1.0
 */

#include <stdio.h>

void main() {

    /**
     * 输出字符串
     */
    // printf 输出字符串需要引号
    printf("Hello world!\n");


    /**
     * 输出整数
     */
    // printf() 输出字符串
    printf("输入一个整数：\n");

    int number;
    // scanf() 格式化输入
    // scanf("%d", &number);

    // printf() 显示格式化输入
    printf("你输入的整数是：%d\n", number);


    /**
     * 输出单个字符
     */
    char c; // 声明 char 变量
    c = 'A'; // 定义 char 变量
    printf("c 的值为 %c\n", c);


    /**
     * 输出浮点数
     */
    float f; // 声明浮点数变量
    f = 12.001234; // 定义浮点数变量
    printf("f 的值为 %f\n", f);


    /**
     * 输出双精度（double）数
     */
    double d; // 声明双精度变量
    d = 12.001234; // 定义双精度变量
    printf("d 的值为 %le\n", d);


}