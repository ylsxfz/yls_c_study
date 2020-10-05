//
// Created by Administrator on 2020/10/05.
//

/**
 * @Auther: yls
 * @Date: 2020/10/05 18:08
 * @Description: c共用体：允许您在相同的内存位置存储不同的数据类型。您可以定义一个带有多个成员的共用体，
 *                      但是在任何时候只能有一个成员带有值，共用体提供了一种使用相同的内存位置的有效方式。
 * @Version 1.0
 */

#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[20];
};

int main(){
    union Data data;
    // 内存大小
    printf("Memory size occupied by data:%d\n",sizeof(data));

    // 访问成员值
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str,"C programing");

    printf("data.i: %d\n",data.i);
    printf("data.f: %f\n",data.f);
    printf("data.str: %s\n",data.str);


    data.i = 10;
    printf("data.i: %d\n",data.i);

    data.f = 220.5;
    printf("data.f: %f\n",data.f);

    strcpy(data.str,"C programing");
    printf("data.str: %s\n",data.str);

    return 0;
}
