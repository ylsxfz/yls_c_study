//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 20:51
 * @Description: ָ������
 * @Version 1.0
 */

#include <stdio.h>

const int MAX = 3;

/**
 * ������
 * @return
 */
int main(){
    int var[] = {10,100,200};
    int i,*ptr[MAX];
    for (i = 0; i < MAX; i++) {
        ptr[i] = &var[i];
    }

    for (i = 0; i < MAX; i++) {
        printf("�洢��ַΪ��var[%d] = %x\n",i,ptr[i]);
        printf("value of var[%d] = %d\n",i,*ptr[i]);
    }

    /**
     * Ҳ������һ��ָ���ַ���ָ���������洢һ���ַ����б�
     */
    const  char *names[] = {
            "Zara Ali",
            "Hina Ali",
            "Nuha Ali",
            "Sara Ali"
    };
    for (i = 0; i < MAX ; i++) {
        printf("value of names[%d] = %s\n",i,names[i]);
    }


    return 0;
}