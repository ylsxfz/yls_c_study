//
// Created by Administrator on 2020/10/01.
//

/**
 * @Auther: yls
 * @Date: 2020/10/01 10:52
 * @Description: �洢��
 * @Version 1.0
 */
#include <stdio.h>

/**
 * ��������
 */
void func(void);


//ȫ�ֱ��� - static ��Ĭ�ϵ�
static int count = 10;

/**
 * ���������
 * @return
 */
int main(){
    while (count--){
        func();
    }
    return 0;
}

/**
 * ���庯��
 */
void func(void){
    /**
     * ��thingy�� �� ��func�� �ľֲ����� - ֻ��ʼ��һ��
     * ÿ�ε��ú��� ��func�� 'thingy' ֵ���ᱻ����
     */
     static int thingy = 5;
     thingy ++;
     printf(" thingy Ϊ %d��count Ϊ%d\n",thingy,count);
}