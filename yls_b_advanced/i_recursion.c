//
// Created by Administrator on 2020/10/20.
//

/**
 * @Auther: yls
 * @Date: 2020/10/20 21:44
 * @Description: �ݹ鴦��
 * @Version 1.0
 */
#include <stdio.h>

/**
 * ��׳�
 * @param i �׳���
 * @return
 */
double factorial(unsigned int i){
    if (i <= 1){
        return 1;
    }
    return i * factorial(i-1);
}

/**
 * 쳲���������
 * @param i ��
 * @return
 */
int fibonaci(int i){
    if (i == 0){
        return 0;
    }
    if (i == 1){
        return 1;
    }
    return fibonaci(i-1) + fibonaci(i-2);
}

void main(){
    int i = 15;
    printf("%d �Ľ׳�Ϊ %f\n",i,factorial(i));


    printf("쳲��������У�");
    int j;
    for (j = 0; j < 10 ; j++) {
        printf("%d\t\n",fibonaci(j));
    }

}