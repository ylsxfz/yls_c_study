/**
 * @Auther: yls
 * @Date: 2020/11/23 15:43
 * @Description: C ����ʵ��
 * @Version 1.0
 */

#include <stdio.h>

void main() {

    /**
     * ����ַ���
     */
    // printf ����ַ�����Ҫ����
    printf("Hello world!\n");


    /**
     * �������
     */
    // printf() ����ַ���
    printf("����һ��������\n");

    int number;
    // scanf() ��ʽ������
    // scanf("%d", &number);

    // printf() ��ʾ��ʽ������
    printf("������������ǣ�%d\n", number);


    /**
     * ��������ַ�
     */
    char c; // ���� char ����
    c = 'A'; // ���� char ����
    printf("c ��ֵΪ %c\n", c);


    /**
     * ���������
     */
    float f; // ��������������
    f = 12.001234; // ���帡��������
    printf("f ��ֵΪ %f\n", f);


    /**
     * ���˫���ȣ�double����
     */
    double d; // ����˫���ȱ���
    d = 12.001234; // ����˫���ȱ���
    printf("d ��ֵΪ %le\n", d);


}