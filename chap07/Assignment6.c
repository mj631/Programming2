/* ���ϸ�: assignment-06.c
 * ����: PA06. ũ�Ⱑ10�� �Ǽ��� �迭�� ���ؼ� �������� �������� ����� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.9.15
 * ����: v1.0
 */

#include <stdio.h>

int main(void) {
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    double tmp[10];
    int i;

    printf("���� :");
    for (i = 0; i < 10; i++) printf("%.1f ", arr[i]);
    printf("\n");

    
    for (i = 0; i < 10; i++) {
        tmp[i] = arr[9 - i];
    }
    
    for (i = 0; i < 10; i++) {
        arr[i] = tmp[i];
    }

    printf("���� :");
    for (i = 0; i < 10; i++) printf("%.1f ", arr[i]);
    printf("\n");

    return 0;
}