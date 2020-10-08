//
// Created by Administrator on 2020/10/08.
//

/**
 * @Auther: yls
 * @Date: 2020/10/08 13:59
 * @Description: 文件读写
 * @Version 1.0
 */

#include <stdio.h>


int writeFile();

int readFile();

int main() {
//    writeFile();

    readFile();
    return 0;
}

int writeFile(){
    FILE *fp = NULL;

    fp = fopen("../remarks/test/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf001...\n");
    fputs("This is testing for fprintf...\n", fp);
    int i = fclose(fp);
    printf("测试结果：%d\n",i);
}


int readFile(){
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("../remarks/test/test.txt","r");
    fscanf(fp,"%s",buff);
    printf("1:%s\n",buff);

    fgets(buff,255,(FILE*)fp);
    printf("2:%s\n",buff);


    fgets(buff,255,(FILE*)fp);
    printf("3:%s\n",buff);
    fclose(fp);
}