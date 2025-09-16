/* ���ϸ�: assignment-12.c
 * ����: PA012. ����ǥ ���� ���α׷��� �������Ϸ��� �Ѵ�. ������ ������ ���� �¼��� ��� 10�� ��� �ϰ�, ������ �¼����� �Է¹޾� �� �ڸ��� �Ҵ��Ѵ�. ������ ������ �� �¼��� ���¸� ����Ѵ�.
* �ۼ���: �����
* ��¥: 2025.9.15
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int seat[10] = { 0 };  
    int n, i, j;
    int reserved = 0;    

    while (1) {
        
        printf("���� �¼�: [ ");
        for (i = 0; i < 10; i++) {
            if (seat[i] == 0)
                printf("0");
            else
                printf("X");
        }
        printf(" ]\n");

       
        printf("������ �¼���? ");
        scanf("%d", &n);

        
        if (reserved + n > 10) {
            printf("�� �̻� ������ �� �����ϴ�.\n");
            break;
        }

        
        int count = 0;
        printf("%d", reserved + 1);
        for (i = 0; i < 10 && count < n; i++) {
            if (seat[i] == 0) {
                seat[i] = 1;
                reserved++;
                count++;
                if (count > 1) printf(" %d", reserved);
            }
        }
        printf(" �� �¼��� �����߽��ϴ�.\n");

        
        if (reserved == 10) {
            printf("��� �¼��� ����Ǿ����ϴ�.\n");
            break;
        }
    }

    return 0;
}