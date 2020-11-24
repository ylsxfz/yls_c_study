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

    printf("%d / %d = %d\n", dividend, divisor, quotient);
    printf("%d %% %d = %d\n", dividend, divisor, remainder);
}


void compare_two_number() {
    int a, b;
    a = 11;
    b = 99;

    if (a > b) {
        printf("a ���� b \n");
    } else {
        printf("a С�ڵ��� b \n");
    }
}

void compare_three_number() {
    int a, b, c;
    a = 11;
    b = 22;
    c = 33;

    if (a > b && a > c) {
        printf("%d ��� \n", a);
    } else if (b > a && b > c) {
        printf("%d ��� \n", b);
    } else if (c > a && c > b) {
        printf("%d ��� \n", c);
    } else {
        printf("��������ֵ����3����ֵ���\n");
    }
}

void sizeof_type() {
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof ����������ֽڴ�С
    printf("Size of int: %ld bytes \n", sizeof(integerType));
    printf("Size of float: %ld bytes \n", sizeof(floatType));
    printf("Size of double: %ld bytes \n", sizeof(doubleType));
    printf("Size of char: %ld bytes \n", sizeof(charType));


    printf("\n");

    int a;
    long b;
    long long c;
    double e;
    long double f;

    printf("Size of int = %ld bytes \n", sizeof(a));
    printf("Size of long = %ld bytes \n", sizeof(b));
    printf("Size of long long = %ld bytes \n", sizeof(c));

    printf("Size of double = %ld bytes \n", sizeof(e));
    printf("Size of long double = %ld bytes \n", sizeof(f));
}


void swap_number_temp() {
    printf("\n");
    double a, b, c;
    a = 1.13214;
    b = 2.431241;

    printf("\n����ǰ��a = %.2lf\n", a);
    printf("����ǰ��b = %.2lf\n", b);
    c = a;
    a = b;
    b = c;

    printf("������a = %.2lf\n", a);
    printf("������b = %.2lf\n", b);
}

void swap_number_not_temp() {
    printf("\n");
    int a, b;
    a = 11;
    b = 99;

    printf("����ǰ��a = %d, b = %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("������a = %d, b = %d \n", a, b);
}

void swap_number(int *a, int *b) {
    printf("\n");
    printf("����ǰ��a = %d, b = %d \n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;
    printf("������a = %d, b = %d \n", *a, *b);

}

void number_is_odd_or_even() {
    printf("\n");
    int number = 101231312;
//    if (number % 2 == 0){
    if (number & 1) {
        printf("%d ��������\n", number);
    } else {
        printf("%d ��ż����\n", number);
    }

    for (int i = 0; i < 10; i++) {
        i & 1 ? printf("������%d\n", i) : printf("ż����%d\n", i);
    }
}

void vowel_consonant_char() {
    printf("\n");
    char c = 'A';
    int isLowercaseVowel, isUppercaseVowel;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel){
        printf("%c ��Ԫ��!\n",c);
    } else{
        printf("%c �Ǹ���!\n",c);
    }
}

void three_max_number(){
    double a = 1231.123123,b=12.123123,c=123131.4141;
    double temp;

    temp = a;
    if (b > temp){
        temp = b;
    }

    if (c > temp){
        temp = c;
    }
    printf("%f,%f,%f���������ǣ�%.2f",a,b,c,temp);
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

    /**
     * ���� int��float��double��char ���ֽڴ�С
     */
    sizeof_type();

    /**
     * ����������
     */
    swap_number_temp();
    swap_number_not_temp();
    int a = 11, b = 99;
    swap_number(&a, &b);

    /**
     * �ж�����������ż��
     */
    number_is_odd_or_even();

    /**
     * �ж���Ԫ�����Ǹ���
     */
     vowel_consonant_char();

     /**
      * �ж��������е������
      */
     three_max_number();
}