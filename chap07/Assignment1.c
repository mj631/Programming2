/* ���ϸ�: assignment-01.c
 * ����: PA01. ù ��° ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.9.15
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a[10];

	int t, n;

	printf("ù ��° ��? ");
	scanf("%d", &t);

	printf("����? ");
	scanf("%d", &n);

	a[0] = t;

	printf("�������� : %d ", a[0]);

	int i;

	for (i = 1; i < 10; i++) {
		a[i] = a[i - 1] + n;
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}