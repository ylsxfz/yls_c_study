//
// Created by Administrator on 2020/10/02.
//

/**
 * @Auther: yls
 * @Date: 2020/10/02 08:56
 * @Description: �����
 * @Version 1.0
 */
#include <stdio.h>
int main(){
    printf("hello yls!");
    int a = 21;
    int b = 10;
    int c ;

    c = a + b;
    printf("Line 1 - c ��ֵ�� %d\n", c );
    c = a - b;
    printf("Line 2 - c ��ֵ�� %d\n", c );
    c = a * b;
    printf("Line 3 - c ��ֵ�� %d\n", c );
    c = a / b;
    printf("Line 4 - c ��ֵ�� %d\n", c );
    c = a % b;
    printf("Line 5 - c ��ֵ�� %d\n", c );
    c = a++;  // ��ֵ���ټ� 1 ��c Ϊ 21��a Ϊ 22
    printf("Line 6 - c ��ֵ�� %d\n", c );
    c = a--;  // ��ֵ���ټ� 1 ��c Ϊ 22 ��a Ϊ 21
    printf("Line 7 - c ��ֵ�� %d\n", c );

    int e;
    int d = 10;
    e = d++;
    printf("�ȸ�ֵ�����㣺\n");
    printf("Line 1 - e ��ֵ�� %d\n", e );
    printf("Line 2 - d ��ֵ�� %d\n", d );
    d = 10;
    e = d--;
    printf("Line 3 - e ��ֵ�� %d\n", e );
    printf("Line 4 - d ��ֵ�� %d\n", d );

    printf("�������ֵ��\n");
    d = 10;
    e = ++d;
    printf("Line 5 - e ��ֵ�� %d\n", e );
    printf("Line 6 - d ��ֵ�� %d\n", d );
    a = 10;
    e = --d;
    printf("Line 7 - e ��ֵ�� %d\n", e );
    printf("Line 8 - d ��ֵ�� %d\n", d );


    if( a == b )
    {
        printf("Line 1 - a ���� b\n" );
    }
    else
    {
        printf("Line 1 - a ������ b\n" );
    }
    if ( a < b )
    {
        printf("Line 2 - a С�� b\n" );
    }
    else
    {
        printf("Line 2 - a ��С�� b\n" );
    }
    if ( a > b )
    {
        printf("Line 3 - a ���� b\n" );
    }
    else
    {
        printf("Line 3 - a ������ b\n" );
    }
    /* �ı� a �� b ��ֵ */
    a = 5;
    b = 20;
    if ( a <= b )
    {
        printf("Line 4 - a С�ڻ���� b\n" );
    }
    if ( b >= a )
    {
        printf("Line 5 - b ���ڻ���� a\n" );
    }


    if ( a && b )
    {
        printf("Line 1 - ����Ϊ��\n" );
    }
    if ( a || b )
    {
        printf("Line 2 - ����Ϊ��\n" );
    }
    /* �ı� a �� b ��ֵ */
    a = 0;
    b = 10;
    if ( a && b )
    {
        printf("Line 3 - ����Ϊ��\n" );
    }
    else
    {
        printf("Line 3 - ����Ϊ��\n" );
    }
    if ( !(a && b) )
    {
        printf("Line 4 - ����Ϊ��\n" );
    }


    unsigned int f = 60;    /* 60 = 0011 1100 */
    unsigned int g = 13;    /* 13 = 0000 1101 */
    int h = 0;

    h = f & g;       /* 12 = 0000 1100 */
    printf("Line 1 - h ��ֵ�� %d\n", h );

    h = f | g;       /* 61 = 0011 1101 */
    printf("Line 2 - h ��ֵ�� %d\n", h );

    h = f ^ g;       /* 49 = 0011 0001 */
    printf("Line 3 - h ��ֵ�� %d\n", h );

    h = ~f;          /*-61 = 1100 0011 */
    printf("Line 4 - h ��ֵ�� %d\n", h );

    h = f << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - h ��ֵ�� %d\n", h );

    h = f >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - h ��ֵ�� %d\n", h );

    a = 21;
    c =  a;
    printf("Line 1 - =  �����ʵ����c ��ֵ = %d\n", c );

    c +=  a;
    printf("Line 2 - += �����ʵ����c ��ֵ = %d\n", c );

    c -=  a;
    printf("Line 3 - -= �����ʵ����c ��ֵ = %d\n", c );

    c *=  a;
    printf("Line 4 - *= �����ʵ����c ��ֵ = %d\n", c );

    c /=  a;
    printf("Line 5 - /= �����ʵ����c ��ֵ = %d\n", c );

    c  = 200;
    c %=  a;
    printf("Line 6 - %%= �����ʵ����c ��ֵ = %d\n", c );

    c <<=  2;
    printf("Line 7 - <<= �����ʵ����c ��ֵ = %d\n", c );

    c >>=  2;
    printf("Line 8 - >>= �����ʵ����c ��ֵ = %d\n", c );

    c &=  2;
    printf("Line 9 - &= �����ʵ����c ��ֵ = %d\n", c );

    c ^=  2;
    printf("Line 10 - ^= �����ʵ����c ��ֵ = %d\n", c );

    c |=  2;
    printf("Line 11 - |= �����ʵ����c ��ֵ = %d\n", c );


    /* sizeof �����ʵ�� */
    printf("Line 1 - ���� a �Ĵ�С = %lu\n", sizeof(a) );
    printf("Line 2 - ���� b �Ĵ�С = %lu\n", sizeof(b) );
    printf("Line 3 - ���� c �Ĵ�С = %lu\n", sizeof(c) );

    /* & �� * �����ʵ�� */
    int* ptr = &a;    /* 'ptr' ���ڰ��� 'a' �ĵ�ַ */
    printf("a ��ֵ�� %d\n", a);
    printf("*ptr �� %d\n", *ptr);

    /* ��Ԫ�����ʵ�� */
    a = 10;
    b = (a == 1) ? 20: 30;
    printf( "b ��ֵ�� %d\n", b );

    b = (a == 10) ? 20: 30;
    printf( "b ��ֵ�� %d\n", b );



    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    printf("(a + b) * c / d ��ֵ�� %d\n",  e );

    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    printf("((a + b) * c) / d ��ֵ�� %d\n" ,  e );

    e = (a + b) * (c / d);   // (30) * (15/5)
    printf("(a + b) * (c / d) ��ֵ�� %d\n",  e );

    e = a + (b * c) / d;     //  20 + (150/5)
    printf("a + (b * c) / d ��ֵ�� %d\n" ,  e );

    return 0;
}