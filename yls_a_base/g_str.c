//
// Created by Administrator on 2020/10/04.
//

/**
 * @Auther: yls
 * @Date: 2020/10/04 09:32
 * @Description: 字符串
 * @Version 1.0
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char greeting[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("Greeting message : %s\n", greeting);


    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len;

    // 复制 str1 到 str3
    strcpy(str3, str1);
    printf("strcpy(str3,str1):%s\n", str3);


    // 连接 str2 到 str1 的末尾
    strcat(str1, str2);
    printf("strcat(str1,str2):%s\n", str1);

    //连接后，str1 的总长度
    len = strlen(str1);
    printf("strlen(str1):%d\n", len);

    return 0;
}