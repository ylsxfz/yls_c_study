/**
 * @Auther: yls
 * @Date: 2020/11/23 15:55
 * @Description: 数学运算相关
 * @Version 1.0
 */

#include <stdio.h>

void int_number() {
    int firstNumber, secondNumber, sumOfTwoNumber;
    firstNumber = 12412412;
    secondNumber = 12412412;
    sumOfTwoNumber = firstNumber + secondNumber;
    printf("%d + %d = %d \n", firstNumber, secondNumber, sumOfTwoNumber);

}

void float_number() {
    float firstNumber, secondNumber, sumOfTwoNumber;
    firstNumber = 1.123;
    secondNumber = 2.13141;
    sumOfTwoNumber = firstNumber * secondNumber;
    printf("%f * %f = %.2lf \n", firstNumber, secondNumber, sumOfTwoNumber);

}

void char_to_nubmer() {
    char a;
    a = 'a';
    printf("%c 的 ASCII 为 %d \n", a, a);
}


void number_divided() {
    int dividend, divisor, quotient, remainder;
    dividend = 5;
    divisor = 2;

    // 计算商
    quotient = dividend / divisor;

    // 计算余数
    remainder = dividend % divisor;

    printf("%d / %d = %d\n", dividend,divisor,quotient);
    printf("%d %% %d = %d\n", dividend,divisor,remainder);
}


void compare_two_number(){
    int a,b;
    a = 11;
    b = 99;

    if (a>b){
        printf("a 大于 b \n");
    } else{
        printf("a 小于等于 b \n");
    }
}

void compare_three_number(){
    int a,b,c;
    a = 11;
    b = 22;
    c = 33;

    if (a>b && a>c){
        printf("%d 最大 \n",a);
    } else if (b > a && b > c){
        printf("%d 最大 \n",b);
    }else if (c > a && c > b){
        printf("%d 最大 \n",c);
    } else{
        printf("有两个数值或者3个数值相等\n");
    }
}

void main() {
    /**
     * 两个整数相加
     */
    int_number();

    /**
     * 两个浮点数相乘
     */
    float_number();

    /**
     * 字符转 ASCII 码
     */
    char_to_nubmer();

    /**
     * 两个数相除
     */
    number_divided();

    /**
     * 比较两个数
     */
     compare_two_number();

     /**
      * 比较三个数
      */
      compare_three_number();
}