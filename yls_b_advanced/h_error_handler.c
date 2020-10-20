//
// Created by Administrator on 2020/10/20.
//

/**
 * @Auther: yls
 * @Date: 2020/10/20 21:18
 * @Description: c ������
 * @Version 1.0
 */
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno ;

/**
 * �ļ�����
 */
void file_error();

/**
 * ��0���Ĵ���
 */
void zero_error();

/**
 * �����˳���״̬
 */
void system_exit();
int main(){
    //file_error();
//    zero_error();

    system_exit();
    return 0;
}

void zero_error(){
    int dividend = 20;
    int divisor = 0;
    int quotient = 0;

    if (divisor == 0){
        fprintf(stderr,"����Ϊ0�˳�����...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"qutotient������ֵΪ��%d\n",quotient);
}

void system_exit(){
    int dividend = 20;
    int divisor = 5;
    int quotient = 0;

    if (divisor == 0){
        fprintf(stderr,"����Ϊ0�˳�����...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"qutotient������ֵΪ��%d\n",quotient);
    exit(EXIT_SUCCESS);
}


void file_error(){
    FILE * pf;
    int errnum;
    pf = fopen("unexist.txt","rb");
    if (pf == NULL){
        errnum = errno;
        fprintf(stderr,"����ţ�%d\n",errno);
        perror("ͨ��perror�������");
        fprintf(stderr,"���ļ�����%s\n",strerror(errnum));
    } else{
        fclose(pf);
    }
}