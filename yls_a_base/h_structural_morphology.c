//
// Created by Administrator on 2020/10/04.
//

/**
 * @Auther: yls
 * @Date: 2020/10/04 09:43
 * @Description: 结构体
 * @Version 1.0
 */

#include <stdio.h>
#include <string.h>


struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book01 = {"C 语言", "RUNOOB", "编程语言", 123456};


struct packed_struct {
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int f4:1;
    unsigned int type:4;
    unsigned int my_int:9;
} pack;

void printBook(struct Books book);

void printBookByPointer(struct Books *book);

int main() {
    printf("title:%s\nauthor:%s\nsubject:%s\nbook_id:%d\n", book01.title, book01.author, book01.subject,
           book01.book_id);

    struct Books Book1;
    struct Books Book2;

    // Book1 详述
    strcpy(Book1.title, "C programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C programming Tutorial");
    Book1.book_id = 634763473;

    // Book1 详述
    strcpy(Book2.title, "C2 programming");
    strcpy(Book2.author, "Nuha2 Ali");
    strcpy(Book2.subject, "C2 programming Tutorial");
    Book2.book_id = 2412351;
    /* 输出 Book1 信息 */
    printf("Book 1 title : %s\n", Book1.title);
    printf("Book 1 author : %s\n", Book1.author);
    printf("Book 1 subject : %s\n", Book1.subject);
    printf("Book 1 book_id : %d\n", Book1.book_id);

    /* 输出 Book2 信息 */
    printf("Book 2 title : %s\n", Book2.title);
    printf("Book 2 author : %s\n", Book2.author);
    printf("Book 2 subject : %s\n", Book2.subject);
    printf("Book 2 book_id : %d\n", Book2.book_id);


    /* 输出 Book1 信息 */
    printBook(Book1);

    /* 输出 Book2 信息 */
    printBook(Book2);

    /* 输出 Book1 信息 */
    printBookByPointer(&Book1);

    /* 输出 Book2 信息 */
    printBookByPointer(&Book2);


    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit,*pbit;
    bit.a=1;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b=7;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c=15;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* 以整型量格式输出三个域的内容 */
    pbit=&bit;    /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a=0;    /* 用指针方式给位域 a 重新赋值，赋为 0 */
    pbit->b&=3;    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->c|=1;    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* 用指针方式输出了这三个域的值 */
}

void printBook(struct Books book) {
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
}

void printBookByPointer(struct Books *book) {
    printf("-------------------------------------------------------------------------\n");
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book subject : %s\n", book->subject);
    printf("Book book_id : %d\n", book->book_id);
}