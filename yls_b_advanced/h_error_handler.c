//
// Created by Administrator on 2020/10/20.
//

/**
 * @Auther: yls
 * @Date: 2020/10/20 21:18
 * @Description: c 错误处理
 * @Version 1.0
 */
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno ;

/**
 * 文件错误
 */
void file_error();

/**
 * 被0除的错误
 */
void zero_error();

/**
 * 程序退出的状态
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
        fprintf(stderr,"除数为0退出运行...\n");
        exit(-1);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"qutotient变量的值为：%d\n",quotient);
}

void system_exit(){
    int dividend = 20;
    int divisor = 5;
    int quotient = 0;

    if (divisor == 0){
        fprintf(stderr,"除数为0退出运行...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr,"qutotient变量的值为：%d\n",quotient);
    exit(EXIT_SUCCESS);
}


void file_error(){
    FILE * pf;
    int errnum;
    pf = fopen("unexist.txt","rb");
    if (pf == NULL){
        errnum = errno;
        fprintf(stderr,"错误号：%d\n",errno);
        perror("通过perror输出错误。");
        fprintf(stderr,"打开文件错误：%s\n",strerror(errnum));
    } else{
        fclose(pf);
    }
}