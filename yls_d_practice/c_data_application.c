/**
 * @Auther: yls
 * @Date: 2020/11/25 9:11
 * @Description: ���ݵ�һЩ��Ӧ��
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
                printf("%d ����������", year);
            } else {
                printf("%d ��������", year);
            }
        } else {
            printf("%d ����ͨ����", year);
        }
    } else {
        printf("%d ��������", year);
    }
}

void positive_and_negative_numbers() {
    printf("\n\n");
    double number = -1.231;
    if (number < 0.0) {
        printf("�����Ǹ�����%f", number);
    } else if (number > 0.0) {
        printf("������������%f", number);
    } else {
        printf("������0��");
    };
}

void judging_letters() {
    printf("\n\n");
    char c = 'a';

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c ����ĸ", c);
    } else {
        printf("%c ������ĸ��", c);
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
    printf("\n\n�žų˷���\n");
    // �������ѭ��
    int i;
    // �����ڲ�ѭ��
    int j;

    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d * %d = %d  ", j, i, i * j);
        }
        printf("\n");
    }
}

void greatest_common_divisor() {
    printf("\n\n���Լ����\n");
    int i, n1 = 81, n2 = 153, gcd;
    for (i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    printf("%d �� %d �����Լ���ǣ�%d", n1, n2, gcd);
    printf("\n%d �� %d ����С�������ǣ�%d", n1, n2, (n1 * n2) / gcd);

}

void fibonard_sequence() {
    printf("\n���ָ��������10������쳲������У�\n");
    int i, t1 = 0, t2 = 1, nextTerm;

    for (i = 0; i < 10; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        printf("%d\t", t1);
        t2 = nextTerm;
    }

    printf("\n���ָ������ǰ��100����쳲������У�\n");
    int k1 = 0, k2 = 1, nextAdd = 0;
    while (nextAdd <= 100) {
        nextAdd = k1 + k2;
        k1 = k2;
        printf("%d\t", k1);
        k2 = nextAdd;
    }
}

void factorial_number() {
    printf("\n\n��׳ˣ�\n");
    int n = 10, i;
    unsigned long long factorial = 1;

    if (n < 0) {
        printf("Error������û�н׳ˣ�����");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
    }
    printf("%d �Ľ׳�Ϊ%llu", n, factorial);
}

long int factorial_recursion(int n) {
    if (n >= 1) {
        return n * factorial_recursion(n - 1);
    }
    return 1;
}

void many_letters() {
    printf("\n\n��ӡ26����ĸ��\n");
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
    printf("\n\n�ж������Ǽ�λ����\n");
    long long number =1014141414,count = 0;
    long long temp = number;
    while (temp!=0){
        temp /= 10;
        count++;
    }
    printf("���� %d �� %d λ����",number,count);
}

void base_power(){
    printf("\n\n����һ������n�η���\n");
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
    printf("\n\n�ж�һ�����Ƿ�Ϊ��������\n");
    int n=1234321,reversedInteger = 0,remainder,originalInteger;

    originalInteger = n;

    while (n!=0){
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    if (originalInteger == reversedInteger){
        printf("%d �ǻ�������",originalInteger);
    } else{
        printf("%d ���ǻ�������",reversedInteger);
    }
}


void main() {
    /**
     * һԪ���η���
     */
    univariate_linear_equation();

    /**
     * �ж����Ƿ�������
     */
    year_is_leap();

    /**
     * �ж������������Ǹ���
     */
    positive_and_negative_numbers();

    /**
     * �ж��Ƿ�Ϊ��ĸ
     */
    judging_letters();

    /**
     * ������Ȼ���ĺ�
     */
    natural_number_sum();
    int sum = natural_number_sum_recursion(10);
    printf("sum = %d", sum);


    /**
     * �žų˷���
     */
    multiplication_table();


    /**
     * ��ӡ쳲�������
     */
    fibonard_sequence();

    /**
     * ���Լ��
     */
    greatest_common_divisor();

    /**
     * �׳�
     */
    factorial_number();
    printf("\n�ݹ���׳ˣ�\n");
    long int a = factorial_recursion(10);
    printf("10�Ľ׳�Ϊ��%llu", a);

    /**
     * ѭ����ӡ26����ĸ
     */
    many_letters();

    /**
     * �ж������Ǽ�λ��
     */
    how_many_dighits();

    /**
     * ����һ������n�η�
     */
    base_power();

    /**
     * �ж�һ�����Ƿ�Ϊ������
     */
     palindrome_number();
}