/* ���ϸ�: assignment-08.c
 * ����: PA08. ��ǰ ������ ����� ������ �迭�� ���� ������(%)�� �Է¹޾� ���ε� ������ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* ��¥: 2025.9.15
 * ����: v1.0
 */
#include <stdio.h>

int main() {
    int price[5];        
    int discount_price[5]; 
    int i, discount;

    
    printf("��ǰ�� 5���� �Է��ϼ���: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &price[i]);
    }

   
    printf("������(%%)? ");
    scanf("%d", &discount);

    
    for (i = 0; i < 5; i++) {
        discount_price[i] = price[i] - (price[i] * discount / 100);
    }

    
    for (i = 0; i < 5; i++) {
        printf("����: %d  --> ���ΰ�: %d\n", price[i], discount_price[i]);
    }

    return 0;
}