#include "stdio.h"

void main()
{
	int a, b, big;

	printf("ù ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	big = a > b ? a : b;
	printf("ū���� %d �Դϴ�.", big);
}