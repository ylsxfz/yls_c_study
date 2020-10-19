/**
 * @Auther: yls
 * @Date: 2020/10/19 13:11
 * @Description:  
 * @Version 1.0
 */

#include <stdio.h>


/**
 * 宏延续运算符（\）:
 * 一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）
 */
/**
 * 字符串常量化运算符（#）:
 * 在宏定义中，当需要把一个宏的参数转换为字符串常量时，
 * 则使用字符串常量化运算符（#）。在宏中使用的该运算符有一个特定的参数或参数列表
 */
#define message_for(a,b)\
    printf(#a " and " #b ": We love you!\n")

/**
 * 标记粘贴运算符（##）:
 * 宏定义内的标记粘贴运算符（##）会合并两个参数。它允许在宏定义中两个独立的标记被合并为一个标记。
 */
#define  tokenpaster(n) printf("token" #n " = %d",token##n)

/**
 * defined() 运算符:
 * 预处理器 defined 运算符是用在常量表达式中的，用来确定一个标识符是否已经使用 #define 定义过。
 * 如果指定的标识符已定义，则值为真（非零）。如果指定的标识符未定义，则值为假（零）。
 */
#if !defined(MESSAGE)
    #define MESSAGE "You wish!"
#endif

/**
 * 参数化的宏：
 * 在使用带有参数的宏之前，必须使用 #define 指令定义。
 * 参数列表是括在圆括号内，且必须紧跟在宏名称的后边。
 * 宏名称和左圆括号之间不允许有空格。
 */
#define MAX(x,y) ((x) > (y) ? (x) : (y))


void main(){
    printf("File :%s\n",__FILE__);
    printf("Date :%s\n",__DATE__);
    printf("Time :%s\n",__TIME__);
    printf("Line :%d\n",__LINE__);
    printf("ANSI :%d\n",__STDC__);

    message_for(Carole,Debra);

    int token34 = 40;

    tokenpaster(34);

    printf("\n");
    printf("Here is the message: %s\n",MESSAGE);

    printf("Max between 20 and 10 is %d\n",MAX(10,20));
}