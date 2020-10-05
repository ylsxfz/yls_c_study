//
// Created by Administrator on 2020/10/05.
//

/**
 * @Auther: yls
 * @Date: 2020/10/05 18:35
 * @Description: c typedef 关键字，可以使用它来为类型去一个新的名字。typedef unsigned char BYTE;
 *          1、typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
 *          2、typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。
 * @Version 1.0
 */

#include <stdio.h>
#include <string.h>

typedef struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main(){
    Book book;

    strcpy(book.title,"C 教程");
    strcpy(book.author,"Runoob");
    strcpy(book.subject,"编程语言");
    book.book_id = 123456;

    printf( "书标题 : %s\n", book.title);
    printf( "书作者 : %s\n", book.author);
    printf( "书类目 : %s\n", book.subject);
    printf( "书 ID : %d\n", book.book_id);
    return 0;
}
