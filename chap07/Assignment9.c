/* ���ϸ�: assignment-09.c
 * ����: PA09. 1~12���� �ڵ��� ����� �迭�� �����ϰ� ȭ�鿡 ���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: �����
* ��¥: 2025.9.15
 * ����: v1.0
 */
#include <stdio.h>

void printGraph(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d�� %5d: ", i + 1, arr[i]);
        int starCount = arr[i] / 2000;
        for (int j = 0; j < starCount; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int phone[12] = { 36000, 42000, 38000, 40000, 45000, 39000,
                     47000, 52000, 41000, 43000, 48000, 65000 };

    printGraph(phone, 12);

    return 0;
}