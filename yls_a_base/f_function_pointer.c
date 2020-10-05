//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 09:51
 * @Description: ����ָ��:ָ������ָ�����
 *              ͨ������˵��ָ�������ָ��һ�����͡��ַ��ͻ�����ȱ�����������ָ����ָ������
 *              ����ָ�������һ�㺯��һ�������ڵ��ú��������ݲ�����
 * @Version 1.0
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * ��������
 * @param x
 * @param y
 * @return
 */
int max(int x, int y);

void populate_array(int *array, size_t arraySize, int (*getNetValue)(void));

int getNextRandomValue(void);

int max(int x, int y) {
    return x > y ? x : y;
}

int main(void) {

//    // ����ָ�룺p
//    int (*p)(int, int) = &max;
//
//    int a, b, c, d;
//
//    printf("�������������֣�");
//    scanf("%d %d %d", &a, &b, &c);
//
//    d = p(p(a, b), c);
//    printf("���������ǣ�%d\n", d);


    int myarray[10];
    // getNextRandomValue ���ܼ����ţ������޷����룬��Ϊ��������֮���൱�ڴ���˲���ʱ������ int , �����Ǻ���ָ��
    populate_array(myarray,10,getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d\t",myarray[i]);
    }
    printf("\n");

    return 0;

}


/**
 * �ص�����
 * @param array
 * @param arraySize
 * @param getNetValue
 */
void populate_array(int *array, size_t arraySize, int (*getNetValue)(void)) {
    for (size_t i = 0; i < arraySize; i++) {
        array[i] = getNetValue();
    }
}

/**
 * ��ȡ���ֵ
 * @return
 */
int getNextRandomValue(void) {
    return rand();
}