#include "stdio.h"

void main()
{
	int a, b, c;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("����° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &c);

	if (a>b>c && a>c>b)
	{
		printf("%d�� ū �����Դϴ�.", a);
	}
	else if (b>a>c && b>c>a)
		printf("%d�� ū �����Դϴ�.", b);
	else
		printf("%d�� ū �����Դϴ�.", c);
}