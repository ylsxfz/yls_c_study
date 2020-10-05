//
// Created by Administrator on 2020/10/02.
//

/**
 * @Auther: yls
 * @Date: 2020/10/02 09:17
 * @Description: 判断和枚举
 * @Version 1.0
 */
#include <stdio.h>

enum DAY{
    MON=1,TUE,WED,THU,FRI,SAT,SUN
};

int main(){
    printf("hello yls!");

    int num;
    num = 77;
//    printf("请输入一个数字：");
//    scanf("%d",&num);
    (num % 2 == 0) ? printf("偶数") : printf("奇数");


    //枚举
    enum DAY day;
    day = WED;
    printf("\n%d",day);

    for (day=MON;day<=SUN;day++){
        printf("枚举元素：%d \n",day);
    }

    return 0;
}