//
// Created by Administrator on 2020/10/02.
//

/**
 * @Auther: yls
 * @Date: 2020/10/02 08:56
 * @Description: 运算符
 * @Version 1.0
 */
#include <stdio.h>
int main(){
    printf("hello yls!");
    int a = 21;
    int b = 10;
    int c ;

    c = a + b;
    printf("Line 1 - c 的值是 %d\n", c );
    c = a - b;
    printf("Line 2 - c 的值是 %d\n", c );
    c = a * b;
    printf("Line 3 - c 的值是 %d\n", c );
    c = a / b;
    printf("Line 4 - c 的值是 %d\n", c );
    c = a % b;
    printf("Line 5 - c 的值是 %d\n", c );
    c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
    printf("Line 6 - c 的值是 %d\n", c );
    c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
    printf("Line 7 - c 的值是 %d\n", c );

    int e;
    int d = 10;
    e = d++;
    printf("先赋值后运算：\n");
    printf("Line 1 - e 的值是 %d\n", e );
    printf("Line 2 - d 的值是 %d\n", d );
    d = 10;
    e = d--;
    printf("Line 3 - e 的值是 %d\n", e );
    printf("Line 4 - d 的值是 %d\n", d );

    printf("先运算后赋值：\n");
    d = 10;
    e = ++d;
    printf("Line 5 - e 的值是 %d\n", e );
    printf("Line 6 - d 的值是 %d\n", d );
    a = 10;
    e = --d;
    printf("Line 7 - e 的值是 %d\n", e );
    printf("Line 8 - d 的值是 %d\n", d );


    if( a == b )
    {
        printf("Line 1 - a 等于 b\n" );
    }
    else
    {
        printf("Line 1 - a 不等于 b\n" );
    }
    if ( a < b )
    {
        printf("Line 2 - a 小于 b\n" );
    }
    else
    {
        printf("Line 2 - a 不小于 b\n" );
    }
    if ( a > b )
    {
        printf("Line 3 - a 大于 b\n" );
    }
    else
    {
        printf("Line 3 - a 不大于 b\n" );
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if ( a <= b )
    {
        printf("Line 4 - a 小于或等于 b\n" );
    }
    if ( b >= a )
    {
        printf("Line 5 - b 大于或等于 a\n" );
    }


    if ( a && b )
    {
        printf("Line 1 - 条件为真\n" );
    }
    if ( a || b )
    {
        printf("Line 2 - 条件为真\n" );
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if ( a && b )
    {
        printf("Line 3 - 条件为真\n" );
    }
    else
    {
        printf("Line 3 - 条件为假\n" );
    }
    if ( !(a && b) )
    {
        printf("Line 4 - 条件为真\n" );
    }


    unsigned int f = 60;    /* 60 = 0011 1100 */
    unsigned int g = 13;    /* 13 = 0000 1101 */
    int h = 0;

    h = f & g;       /* 12 = 0000 1100 */
    printf("Line 1 - h 的值是 %d\n", h );

    h = f | g;       /* 61 = 0011 1101 */
    printf("Line 2 - h 的值是 %d\n", h );

    h = f ^ g;       /* 49 = 0011 0001 */
    printf("Line 3 - h 的值是 %d\n", h );

    h = ~f;          /*-61 = 1100 0011 */
    printf("Line 4 - h 的值是 %d\n", h );

    h = f << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - h 的值是 %d\n", h );

    h = f >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - h 的值是 %d\n", h );

    a = 21;
    c =  a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );

    c +=  a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );

    c -=  a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );

    c *=  a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );

    c /=  a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );

    c  = 200;
    c %=  a;
    printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c );

    c <<=  2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );

    c >>=  2;
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );

    c &=  2;
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );

    c ^=  2;
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );

    c |=  2;
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );


    /* sizeof 运算符实例 */
    printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a) );
    printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b) );
    printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c) );

    /* & 和 * 运算符实例 */
    int* ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
    printf("a 的值是 %d\n", a);
    printf("*ptr 是 %d\n", *ptr);

    /* 三元运算符实例 */
    a = 10;
    b = (a == 1) ? 20: 30;
    printf( "b 的值是 %d\n", b );

    b = (a == 10) ? 20: 30;
    printf( "b 的值是 %d\n", b );



    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    printf("(a + b) * c / d 的值是 %d\n",  e );

    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    printf("((a + b) * c) / d 的值是 %d\n" ,  e );

    e = (a + b) * (c / d);   // (30) * (15/5)
    printf("(a + b) * (c / d) 的值是 %d\n",  e );

    e = a + (b * c) / d;     //  20 + (150/5)
    printf("a + (b * c) / d 的值是 %d\n" ,  e );

    return 0;
}