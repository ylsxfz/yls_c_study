//
// Created by Administrator on 2020/10/01.
//
#include <stdio.h>
#include <float.h>

/**
 * ����
 *  1��ʹ�� #define Ԥ��������
 *  2��ʹ�� const �ؼ��֡�
 */
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

//ȫ�ֱ��� - static ��Ĭ�ϵ�
static int count = 10;

/**
 * @Auther: yls
 * @Date: 2020/10/01 10:53
 * @Description: c���Ļ���֪ʶ
 * @Version 1.0
 */
int main() {
    printf("hello world��");
    /**
     * ���е� C ���Գ�����Ҫ���� main() ������ ����� main() ������ʼִ�С�
     * printf() ���ڸ�ʽ���������Ļ��printf() ������ "stdio.h" ͷ�ļ���������
     * stdio.h ��һ��ͷ�ļ� (��׼�������ͷ�ļ�) , #include ��һ��Ԥ���������������ͷ�ļ���
     * ������������ printf() ����ʱ�����û���ҵ� stdio.h ͷ�ļ����ᷢ���������
     * return 0; ������ڱ�ʾ�˳�����
     */


    /**
     * ������������
     */
    printf("float �洢����ֽ��� : %lu \n", sizeof(float));
    printf("float ��Сֵ: %E\n", FLT_MIN );
    printf("float ���ֵ: %E\n", FLT_MAX );
    printf("����ֵ: %d\n", FLT_DIG );


    /**
     * ����ǿת
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
     * ����
     *  1��ʹ�� #define Ԥ��������
     *  2��ʹ�� const �ؼ��֡�
     */
    const int LENGTH_ONE = 20;
    const int WIDTH_ONE = 5;
    const char NEW_LIVE = '\n';
    area = LENGTH_ONE * WIDTH_ONE;
    printf("value of area:%d", area);
    printf("%c", NEWLINE);

    return 0;
}