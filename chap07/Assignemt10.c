/* ���ϸ�: assignment-10.c
 * ����: PA10. 3 x 3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.
* �ۼ���: �����
* ��¥: 2025.9.15
 * ����: v1.0
 */
#include <stdio.h>

int main() {
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3];

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = x[i][j] + y[i][j];
        }
    }

   
    printf("x ���:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }

    printf("\ny ���:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", y[i][j]);
        }
        printf("\n");
    }

    printf("\nx + y ���:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}