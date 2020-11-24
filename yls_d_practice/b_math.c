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

    printf("%d / %d = %d\n", dividend, divisor, quotient);
    printf("%d %% %d = %d\n", dividend, divisor, remainder);
}


void compare_two_number() {
    int a, b;
    a = 11;
    b = 99;

    if (a > b) {
        printf("a 大于 b \n");
    } else {
        printf("a 小于等于 b \n");
    }
}

void compare_three_number() {
    int a, b, c;
    a = 11;
    b = 22;
    c = 33;

    if (a > b && a > c) {
        printf("%d 最大 \n", a);
    } else if (b > a && b > c) {
        printf("%d 最大 \n", b);
    } else if (c > a && c > b) {
        printf("%d 最大 \n", c);
    } else {
        printf("有两个数值或者3个数值相等\n");
    }
}

void sizeof_type() {
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof 计算变量的字节大小
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

    printf("\n交换前：a = %.2lf\n", a);
    printf("交换前：b = %.2lf\n", b);
    c = a;
    a = b;
    b = c;

    printf("交换后：a = %.2lf\n", a);
    printf("交换后：b = %.2lf\n", b);
}

void swap_number_not_temp() {
    printf("\n");
    int a, b;
    a = 11;
    b = 99;

    printf("交换前：a = %d, b = %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("交换后：a = %d, b = %d \n", a, b);
}

void swap_number(int *a, int *b) {
    printf("\n");
    printf("交换前：a = %d, b = %d \n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;
    printf("交换后：a = %d, b = %d \n", *a, *b);

}

void number_is_odd_or_even() {
    printf("\n");
    int number = 101231312;
//    if (number % 2 == 0){
    if (number & 1) {
        printf("%d 是奇数。\n", number);
    } else {
        printf("%d 是偶数。\n", number);
    }

    for (int i = 0; i < 10; i++) {
        i & 1 ? printf("奇数：%d\n", i) : printf("偶数：%d\n", i);
    }
}

void vowel_consonant_char() {
    printf("\n");
    char c = 'A';
    int isLowercaseVowel, isUppercaseVowel;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (isLowercaseVowel || isUppercaseVowel){
        printf("%c 是元音!\n",c);
    } else{
        printf("%c 是辅音!\n",c);
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
    printf("%f,%f,%f中最大的数是：%.2f",a,b,c,temp);
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

    /**
     * 计算 int、float、double、char 的字节大小
     */
    sizeof_type();

    /**
     * 交换两个数
     */
    swap_number_temp();
    swap_number_not_temp();
    int a = 11, b = 99;
    swap_number(&a, &b);

    /**
     * 判断是奇数还是偶数
     */
    number_is_odd_or_even();

    /**
     * 判断是元音还是辅音
     */
     vowel_consonant_char();

     /**
      * 判断三个数中的最大数
      */
     three_max_number();
}