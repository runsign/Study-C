#include "stdio.h"

void main()
{
	int a, b, c, big;
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &c);

	big = (a > b && a > c) ? a : b;
	big = (big > c) ? big : c;
	printf("ū ���ڴ� %d �Դϴ�.", big);
}