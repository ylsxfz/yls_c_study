/**
 * @Auther: yls
 * @Date: 2020/11/23 15:55
 * @Description: ��ѧ�������
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
    printf("%c �� ASCII Ϊ %d \n", a, a);
}


void number_divided() {
    int dividend, divisor, quotient, remainder;
    dividend = 5;
    divisor = 2;

    // ������
    quotient = dividend / divisor;

    // ��������
    remainder = dividend % divisor;

    printf("%d / %d = %d\n", dividend,divisor,quotient);
    printf("%d %% %d = %d\n", dividend,divisor,remainder);
}


void compare_two_number(){
    int a,b;
    a = 11;
    b = 99;

    if (a>b){
        printf("a ���� b \n");
    } else{
        printf("a С�ڵ��� b \n");
    }
}

void compare_three_number(){
    int a,b,c;
    a = 11;
    b = 22;
    c = 33;

    if (a>b && a>c){
        printf("%d ��� \n",a);
    } else if (b > a && b > c){
        printf("%d ��� \n",b);
    }else if (c > a && c > b){
        printf("%d ��� \n",c);
    } else{
        printf("��������ֵ����3����ֵ���\n");
    }
}

void main() {
    /**
     * �����������
     */
    int_number();

    /**
     * �������������
     */
    float_number();

    /**
     * �ַ�ת ASCII ��
     */
    char_to_nubmer();

    /**
     * ���������
     */
    number_divided();

    /**
     * �Ƚ�������
     */
     compare_two_number();

     /**
      * �Ƚ�������
      */
      compare_three_number();
}