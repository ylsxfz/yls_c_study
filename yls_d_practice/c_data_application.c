/**
 * @Auther: yls
 * @Date: 2020/11/25 9:11
 * @Description: 数据的一些简单应用
 * @Version 1.0
 */

#include <stdio.h>
#include <math.h>

void univariate_linear_equation() {
    float a, b, c, x1, x2, d;
    a = 1;
    b = 2;
    c = 1;
    if (a != 0) {
        d = sqrt(b * b - 4 * a * c);
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        if (x1 < x2) {
            printf("%0.2f %0.2f", x2, x1);
        } else {
            printf("%0.2f %0.2f", x1, x2);
        }
    }
}


void year_is_leap() {
    printf("\n\n");
    int year = 2000;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d 是世纪闰年", year);
            } else {
                printf("%d 不是闰年", year);
            }
        } else {
            printf("%d 是普通闰年", year);
        }
    } else {
        printf("%d 不是闰年", year);
    }
}

void positive_and_negative_numbers() {
    printf("\n\n");
    double number = -1.231;
    if (number < 0.0) {
        printf("该数是负数：%f", number);
    } else if (number > 0.0) {
        printf("该数是正数：%f", number);
    } else {
        printf("该数是0。");
    };
}

void judging_letters() {
    printf("\n\n");
    char c = 'a';

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c 是字母", c);
    } else {
        printf("%c 不是字母。", c);
    }
}

void natural_number_sum() {
    printf("\n\n");
    int n = 10, sum = 0, i, j = 0;

    for (i = 0; i <= n; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);


    sum = 0, i = 0;
    while (i <= n) {
        sum += i;
        i += 1;
    }
    printf("sum = %d\n", sum);
}


int natural_number_sum_recursion(int n) {
    if (n != 0) {
        return n + natural_number_sum_recursion(n - 1);
    }
    return n;
}


void multiplication_table() {
    printf("\n\n九九乘法表：\n");
    // 控制外层循环
    int i;
    // 控制内层循环
    int j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d * %d = %d  ", j, i, i * j);
        }
        printf("\n");
    }
}

void greatest_common_divisor() {
    printf("\n\n最大公约数：\n");
    int i, n1 = 81, n2 = 153, gcd;
    for (i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    printf("%d 和 %d 的最大公约数是：%d", n1, n2, gcd);
    printf("\n%d 和 %d 的最小公倍数是：%d", n1, n2, (n1 * n2) / gcd);

}

void fibonard_sequence() {
    printf("\n输出指定个数（10个）的斐波那数列：\n");
    int i, t1 = 0, t2 = 1, nextTerm;

    for (i = 0; i < 10; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        printf("%d\t", t1);
        t2 = nextTerm;
    }

    printf("\n输出指定数字前（100）的斐波那数列：\n");
    int k1 = 0, k2 = 1, nextAdd = 0;
    while (nextAdd <= 100) {
        nextAdd = k1 + k2;
        k1 = k2;
        printf("%d\t", k1);
        k2 = nextAdd;
    }
}

void factorial_number() {
    printf("\n\n求阶乘：\n");
    int n = 10, i;
    unsigned long long factorial = 1;

    if (n < 0) {
        printf("Error：负数没有阶乘！！！");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
    }
    printf("%d 的阶乘为%llu", n, factorial);
}

long int factorial_recursion(int n) {
    if (n >= 1) {
        return n * factorial_recursion(n - 1);
    }
    return 1;
}

void many_letters() {
    printf("\n\n打印26个字母：\n");
    char c;
    for (c = 'A'; c <= 'Z'; c++) {
        printf("%c  ", c);
    }
    printf("\n");
    for (c = 'a'; c <= 'z'; c++) {
        printf("%c  ", c);
    }

    printf("\n");
    int A = 65;
    int i;
    for (i = 0; i <26 ; i++) {
       printf("%c  ",A);
       A ++ ;
    }

    printf("\n");
    A = 97;
    for (i = 0; i <26 ; i++) {
        printf("%c  ",A);
        A ++ ;
    }
}

void how_many_dighits(){
    printf("\n\n判断数字是几位数：\n");
    long long number =1014141414,count = 0;
    long long temp = number;
    while (temp!=0){
        temp /= 10;
        count++;
    }
    printf("数字 %d 是 %d 位数！",number,count);
}

void base_power(){
    printf("\n\n计算一个数的n次方：\n");
    long long result =1;
    int base = 2 ,exponent = 3;
    int temp = exponent;
    while (temp != 0){
        result *= base;
        -- temp;
    }
    printf("%d ^ %d = %d\n",base,exponent,result);

    double base2 = 2;
    double exponent2 = 3;
    double result2 = pow(base2,exponent2);
    printf("%.1lf ^ %.1lf = %.2lf\n",base2,exponent2,result2);
}

void palindrome_number(){
    printf("\n\n判断一个数是否为回文数：\n");
    int n=1234321,reversedInteger = 0,remainder,originalInteger;

    originalInteger = n;

    while (n!=0){
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    if (originalInteger == reversedInteger){
        printf("%d 是回文数。",originalInteger);
    } else{
        printf("%d 不是回文数。",reversedInteger);
    }
}


void main() {
    /**
     * 一元二次方程
     */
    univariate_linear_equation();

    /**
     * 判断年是否是闰年
     */
    year_is_leap();

    /**
     * 判断数是正数还是负数
     */
    positive_and_negative_numbers();

    /**
     * 判断是否为字母
     */
    judging_letters();

    /**
     * 计算自然数的和
     */
    natural_number_sum();
    int sum = natural_number_sum_recursion(10);
    printf("sum = %d", sum);


    /**
     * 九九乘法表
     */
    multiplication_table();


    /**
     * 打印斐波那数列
     */
    fibonard_sequence();

    /**
     * 最大公约数
     */
    greatest_common_divisor();

    /**
     * 阶乘
     */
    factorial_number();
    printf("\n递归求阶乘：\n");
    long int a = factorial_recursion(10);
    printf("10的阶乘为：%llu", a);

    /**
     * 循环打印26个字母
     */
    many_letters();

    /**
     * 判断数字是几位数
     */
    how_many_dighits();

    /**
     * 计算一个数的n次方
     */
    base_power();

    /**
     * 判断一个数是否为回文数
     */
     palindrome_number();
}