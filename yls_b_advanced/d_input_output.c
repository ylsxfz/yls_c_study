//
// Created by Administrator on 2020/10/05.
//

/**
 * @Auther: yls
 * @Date: 2020/10/05 18:41
 * @Description:  �������
 *   a��int getchar(void) ��������Ļ��ȡ��һ�����õ��ַ�������������Ϊһ�����������������ͬһ��ʱ����ֻ���ȡһ����һ���ַ�����������ѭ����ʹ������������Ա����Ļ�϶�ȡ����ַ���
 *   b��int putchar(int c) �������ַ��������Ļ�ϣ���������ͬ���ַ������������ͬһ��ʱ����ֻ�����һ����һ���ַ�����������ѭ����ʹ������������Ա�����Ļ���������ַ�
 *
 *   1��char *gets(char *s) ������ stdin ��ȡһ�е� s ��ָ��Ļ�������ֱ��һ����ֹ���� EOF��
 *   2��int puts(const char *s) �������ַ��� s ��һ��β��Ļ��з�д�뵽 stdout��
 *
 *   a��int scanf(const char *format, ...) �����ӱ�׼������ stdin ��ȡ���룬�������ṩ�� format ��������롣
 *   b��int printf(const char *format, ...) ���������д�뵽��׼����� stdout ���������ṩ�ĸ�ʽ���������
 *   c��format ������һ���򵥵ĳ����ַ��������������Էֱ�ָ�� %s��%d��%c��%f ����������ȡ�ַ������������ַ��򸡵�������������������õĸ�ʽѡ����Ը�����Ҫʹ��
 *
 * @Version 1.0
 */

#include <stdio.h>

int main(){

//    int testInteger = 5;
//    // %d ��ʽ���������
//    printf("Number=%d\n",testInteger);
//
//    // %f ��ʽ���������������
//    float f;
//    printf("Enter a number��");
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