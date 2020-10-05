//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 09:10
 * @Description: ָ��
 *      int    *ip;    // һ�����͵�ָ��
 *      double *dp;    // һ�� double �͵�ָ��
 *      float  *fp;    // һ�������͵�ָ��
 *      char   *ch;     // һ���ַ��͵�ָ��
 * @Version 1.0
 */

#include <stdio.h>

/**
 * ָ���������
 * @return
 */
void pointer_base();

/**
 * ָ���������
 * @return
 */
void pointer_add();

/**
 * ָ������ݼ�
 * @return
 */
void pointer_decline();

/**
 * ָ������Ƚ�
 * @return
 */
void pointer_compare();

/**
 * ָ������
 * @return
 */
void pointer_operation();

int main() {
    // ָ������
    pointer_operation();
    return 0;
}

/**
 * ָ��Ļ�������
 */
void pointer_base() {
    int var1;
    char var2[10];

    printf("var1 �ı�����ַ��%p\n", &var1);
    printf("var2 �ı�����ַ��%p\n", &var2);


    int var = 20;
    int *ip;

    ip = &var; /* ��ָ������д洢var�ĵ�ַ */
    printf("address of var variable��%p\n", &var);

    /* ��ָ������д洢�ĵ�ַ */
    printf("address stored in ip variable��%p\n", ip);

    /* ʹ��ָ�����ֵ */
    printf("value of *ip variable: %d\n", *ip);


    /**
     * c�е�NULLָ��
     */
    int *ptr = NULL;
    printf("ptr �ĵ�ַ�ǣ�%p\n", ptr);

    // if(ptr)     /* ��� p �ǿգ������ */
    // if(!ptr)    /* ��� p Ϊ�գ������ */
}

/**
 * ָ������
 */
void pointer_operation() {
    printf("\n***********************ָ�����֪ʶ*****************************\n");
    pointer_base();

    printf("\n***********************ָ�����*****************************\n");
    pointer_add();

    printf("\n***********************ָ��ݼ�*****************************\n");
    pointer_decline();

    printf("\n***********************ָ��Ƚ�*****************************\n");
    pointer_compare();

}


const int MAX = 3;

/**
 * ָ��Ƚ�
 */
void pointer_compare(){
    int var[] = {10, 100, 200};
    int i, *ptr;

    // ָ���е�һ��Ԫ�صĵ�ַ
    ptr = var;
    i = 0;
    while (ptr <= &var[MAX - 1]){
        printf("�洢��ַ�� var[%d] = %x\n",i,ptr);
        printf("�洢ֵ��var[%d] = %d\n",i,*ptr);

        ptr++;
        i++;
    }

}

/**
 * �ݼ�һ��ָ��
 */
void pointer_decline() {
    int var[] = {10, 100, 200};
    int i, *ptr;

    // ָ�������һ��Ԫ�صĵ�ַ
    ptr = &var[MAX - 1];
    for (i = MAX; i > 0; i--) {
        printf("�洢��ַ��var[%d] = %x\n", i - 1, ptr);
        printf("�洢ֵ��%var[%d] = %d\n",i - 1, *ptr);

        // ָ��ָ����һ��λ��
        ptr--;
    }
}


/**
 * ����һ��ָ��
 */
void pointer_add() {
    int var[] = {10, 100, 200};
    int i, *ptr;

    /* ָ���е������ַ */
    ptr = var;
    for (i = 0; i < MAX; i++) {
        printf("�洢��ַ��var[%d] = %x\n", i, ptr);
        printf("�洢��ֵ��var[%d] = %d\n", i, *ptr);

        // ָ��ָ����һ��λ��
        ptr++;
    }
}
