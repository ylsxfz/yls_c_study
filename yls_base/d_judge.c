//
// Created by Administrator on 2020/10/02.
//

/**
 * @Auther: yls
 * @Date: 2020/10/02 09:17
 * @Description: �жϺ�ö��
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
//    printf("������һ�����֣�");
//    scanf("%d",&num);
    (num % 2 == 0) ? printf("ż��") : printf("����");


    //ö��
    enum DAY day;
    day = WED;
    printf("\n%d",day);

    for (day=MON;day<=SUN;day++){
        printf("ö��Ԫ�أ�%d \n",day);
    }

    return 0;
}