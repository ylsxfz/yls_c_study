//
// Created by Administrator on 2020/10/05.
//

/**
 * @Auther: yls
 * @Date: 2020/10/05 18:41
 * @Description:  输入输出
 *   a、int getchar(void) 函数从屏幕读取下一个可用的字符，并把它返回为一个整数。这个函数在同一个时间内只会读取一个单一的字符。您可以在循环内使用这个方法，以便从屏幕上读取多个字符。
 *   b、int putchar(int c) 函数把字符输出到屏幕上，并返回相同的字符。这个函数在同一个时间内只会输出一个单一的字符。您可以在循环内使用这个方法，以便在屏幕上输出多个字符
 *
 *   1、char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
 *   2、int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout。
 *
 *   a、int scanf(const char *format, ...) 函数从标准输入流 stdin 读取输入，并根据提供的 format 来浏览输入。
 *   b、int printf(const char *format, ...) 函数把输出写入到标准输出流 stdout ，并根据提供的格式产生输出。
 *   c、format 可以是一个简单的常量字符串，但是您可以分别指定 %s、%d、%c、%f 等来输出或读取字符串、整数、字符或浮点数。还有许多其他可用的格式选项，可以根据需要使用
 *
 * @Version 1.0
 */

#include <stdio.h>

int main(){

//    int testInteger = 5;
//    // %d 格式化输出整数
//    printf("Number=%d\n",testInteger);
//
//    // %f 格式化输出浮点型数据
//    float f;
//    printf("Enter a number：");
//    scanf("%f",&f);
//    printf("Value = %f",f);

//    int c;
//    printf("Enter a value : ");
//    c = getchar();
//
//    printf("\n you entered:");
//    putchar(c);
//    printf("\n");

//    char str[100];
//    printf("Enter a value: ");
//    gets(str);
//
//    printf("\nYou entered: ");
//    puts(str);


    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s %d",str,&i);

    printf("\nYou entered:%s %d ",str,i);
    printf("\n");

    return 0;
}