//
// Created by Administrator on 2020/10/04.
//

/**
 * @Auther: yls
 * @Date: 2020/10/04 09:43
 * @Description: �ṹ��
 * @Version 1.0
 */

#include <stdio.h>
#include <string.h>


struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book01 = {"C ����", "RUNOOB", "�������", 123456};


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

    // Book1 ����
    strcpy(Book1.title, "C programming");
    strcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C programming Tutorial");
    Book1.book_id = 634763473;

    // Book1 ����
    strcpy(Book2.title, "C2 programming");
    strcpy(Book2.author, "Nuha2 Ali");
    strcpy(Book2.subject, "C2 programming Tutorial");
    Book2.book_id = 2412351;
    /* ��� Book1 ��Ϣ */
    printf("Book 1 title : %s\n", Book1.title);
    printf("Book 1 author : %s\n", Book1.author);
    printf("Book 1 subject : %s\n", Book1.subject);
    printf("Book 1 book_id : %d\n", Book1.book_id);

    /* ��� Book2 ��Ϣ */
    printf("Book 2 title : %s\n", Book2.title);
    printf("Book 2 author : %s\n", Book2.author);
    printf("Book 2 subject : %s\n", Book2.subject);
    printf("Book 2 book_id : %d\n", Book2.book_id);


    /* ��� Book1 ��Ϣ */
    printBook(Book1);

    /* ��� Book2 ��Ϣ */
    printBook(Book2);

    /* ��� Book1 ��Ϣ */
    printBookByPointer(&Book1);

    /* ��� Book2 ��Ϣ */
    printBookByPointer(&Book2);


    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit,*pbit;
    bit.a=1;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    bit.b=7;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    bit.c=15;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* ����������ʽ�������������� */
    pbit=&bit;    /* ��λ����� bit �ĵ�ַ�͸�ָ����� pbit */
    pbit->a=0;    /* ��ָ�뷽ʽ��λ�� a ���¸�ֵ����Ϊ 0 */
    pbit->b&=3;    /* ʹ���˸��ϵ�λ����� "&="���൱�ڣ�pbit->b=pbit->b&3��λ�� b ��ԭ��ֵΪ 7���� 3 ����λ������Ľ��Ϊ 3��111&011=011��ʮ����ֵΪ 3�� */
    pbit->c|=1;    /* ʹ���˸���λ�����"|="���൱�ڣ�pbit->c=pbit->c|1������Ϊ 15 */
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* ��ָ�뷽ʽ��������������ֵ */
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