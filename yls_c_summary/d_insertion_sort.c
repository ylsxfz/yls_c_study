/**
 * @Auther: yls
 * @Date: 2020/11/23 15:07
 * @Description: 插入排序
 * @Version 1.0
 */

#include <stdio.h>

/**
 * 插入排序
 * @param arr 数组
 * @param len 数组的长度
 */
void insertion_sort(int arr[],int len){
    int i,j,temp;
    for (i = 0; i < len; ++i) {
        temp = arr[i];
        for (j = i; j>0 && arr[j-1]>temp ; j--) {
            arr[j] = arr[j-1];
        }
        arr[j] = temp;
    }
}

int main(){
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int)sizeof(arr) / sizeof(*arr);
    printf("%d",sizeof(*arr));
    printf("\n%d",(int)sizeof(arr));
    printf("\n");
    insertion_sort(arr,len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}
