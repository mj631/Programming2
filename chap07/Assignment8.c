/* ���ϸ�: assignment-08.c
 * ����: PA08. ��ǰ ������ ����� ������ �迭�� ���Ͽ� ������(%)�� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.9.15
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int price[5];      
    int salePrice[5];  
    int i, rate;

    printf("��ǰ�� 5���� �Է��ϼ���: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &price[i]);
    }

    printf("������(%%)? ");
    scanf("%d", &rate);

    // ���� ���� ���
    for (i = 0; i < 5; i++) {
        salePrice[i] = price[i] * (100 - rate) / 100;
    }

    // ��� ���
    for (i = 0; i < 5; i++) {
        printf("����: %d --> ���ΰ�: %d\n", price[i], salePrice[i]);
    }

    return 0;
}