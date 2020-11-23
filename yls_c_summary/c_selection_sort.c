/**
 * @Auther: yls
 * @Date: 2020/11/23 14:46
 * @Description: 选择排序
 * @Version 1.0
 */

#include <stdio.h>

/**
 * 交换两个元素
 * @param a 元素a
 * @param b 元素b
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/**
 * 排序的主要方法
 * @param arr 待排序的数组
 * @param len 长度
 */
void selection_sort(int arr[], int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        int min = i;
        for (j = i + 1; j < len; j++) { // 遍历未排序的元素
            if (arr[j] < arr[min]) { // 找出当前的最小值
                min = j;  // 记录当前的最小值
            }
        }
        swap(&arr[min], &arr[i]);// 做交换
    }
}

int main() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int) sizeof(arr) / sizeof(*arr);
    selection_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}
