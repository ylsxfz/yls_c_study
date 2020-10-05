//
// Created by Administrator on 2020/10/03.
//

/**
 * @Auther: yls
 * @Date: 2020/10/03 09:51
 * @Description: 函数指针:指向函数的指针变量
 *              通常我们说的指针变量是指向一个整型、字符型或数组等变量，而函数指针是指向函数。
 *              函数指针可以像一般函数一样，用于调用函数、传递参数。
 * @Version 1.0
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * 函数声明
 * @param x
 * @param y
 * @return
 */
int max(int x, int y);

void populate_array(int *array, size_t arraySize, int (*getNetValue)(void));

int getNextRandomValue(void);

int max(int x, int y) {
    return x > y ? x : y;
}

int main(void) {

//    // 函数指针：p
//    int (*p)(int, int) = &max;
//
//    int a, b, c, d;
//
//    printf("请输入三个数字：");
//    scanf("%d %d %d", &a, &b, &c);
//
//    d = p(p(a, b), c);
//    printf("最大的数字是：%d\n", d);


    int myarray[10];
    // getNextRandomValue 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针
    populate_array(myarray,10,getNextRandomValue);
    for (int i = 0; i < 10; i++) {
        printf("%d\t",myarray[i]);
    }
    printf("\n");

    return 0;

}


/**
 * 回调函数
 * @param array
 * @param arraySize
 * @param getNetValue
 */
void populate_array(int *array, size_t arraySize, int (*getNetValue)(void)) {
    for (size_t i = 0; i < arraySize; i++) {
        array[i] = getNetValue();
    }
}

/**
 * 获取随机值
 * @return
 */
int getNextRandomValue(void) {
    return rand();
}