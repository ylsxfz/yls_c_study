#include <stdio.h>
#include <float.h>

int x;
int y;
int addtwonum(){
    /**
     * ���������������������
     *   .1��һ������Ҫ�����洢�ռ�ġ����磺int a ��������ʱ����Ѿ������˴洢�ռ䡣
     *   .2����һ���ǲ���Ҫ�����洢�ռ�ģ�ͨ��ʹ��extern�ؼ������������������������� ���磺extern int a ���б��� a �����ڱ���ļ��ж���ġ�
     *   .������extern�ؼ��֣������Ǳ����Ķ��塣
     */
    //�������������� x �� y Ϊ�ⲿ����
    extern int x;
    extern int y;

    //���ⲿ������ȫ�ֱ�����x �� y ��ֵ
    x = 1;
    y = 2;
    return x+y;
}


/**
 * void ����ָ��û�п��õ�ֵ��
 */
void main() {
    /**
     * �����ҵĵ�һ��c����
     */
    printf("Hello, World!\n");
    printf("Hello\tworld\n\n");

    // ��������
    printf("int �Ĵ洢��С��%lu \n", sizeof(int));

    //��������
    printf("float �洢������ֽ�����%lu \n",sizeof(float));
    printf("float ��Сֵ��%E\n",FLT_MAX);
    printf("float �����ֵ��%E\n",FLT_MIN);
    printf("��ȷֵ��%d\n",FLT_DIG);
    printf("\n");


    /**
     * ��������
     */
    int result ;
    result = addtwonum();
    printf("result Ϊ��%d \n",result);


}


