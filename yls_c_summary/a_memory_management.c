/**
 * @Auther: yls
 * @Date: 2020/11/4 13:41
 * @Description: 内存管理
 * @Version 1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void malloc_practice();

void malloc_practice_realloc();

void main() {
//    malloc_practice();
    malloc_practice_realloc();

}

/**
 * 动态分配内存
 * 但是，如果您预先不知道需要存储的文本长度，例如您想存储有关一个主题的详细描述。
 * 在这里，我们需要定义一个指针，该指针指向未定义所需内存大小的字符，后续再根据需求来分配内存，如下所示：
 *当动态分配内存时，您有完全控制权，可以传递任何大小的值。而那些预先定义了大小的数组，一旦定义则无法改变大小。
 * 下面的程序也可以使用 calloc() 来编写，只需要把 malloc 替换为 calloc 即可，如下所示：
 *      calloc(200, sizeof(char));
 */
void malloc_practice() {
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = (char *) malloc(200 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
}


/**
 * 重新调整内存的大小和释放内存
当程序退出时，操作系统会自动释放所有分配给程序的内存，但是，建议您在不需要内存时，都应该调用函数 free() 来释放内存。

或者，您可以通过调用函数 realloc() 来增加或减少已分配的内存块的大小。让我们使用 realloc() 和 free() 函数，再次查看上面的实例
 */
void malloc_practice_realloc() {
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = (char *) malloc(30 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    /* 假设你想要存储更大的描述信息 */
    description = (char *) realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, "She is in class 10th");
    }

    printf("Name = %s\n", name);
    printf("Description: %s\n", description);

    /* 使用free()函数释放内存 */
    free(description);

}