/* ���ϸ�: assignment-04.c
 * ����: PA04.�迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.9.15
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int main(void)
{
	int arr[] = { 55, 22, 77, 11, 15, 89, 32, 75, 12, 52 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int max = arr[0], min = arr[0];
	int maxindex = 0, minindex = 0;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i]; 
			maxindex = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			minindex = i;
		}
	}

	printf("�迭: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);

	}
	printf("\n");

	printf("�ִ�: �ε���=%d , ��=%d\n", maxindex, max);
	printf("�ּڰ�: �ε���=%d , ��=%d\n", minindex, min);	

	return 0;
}