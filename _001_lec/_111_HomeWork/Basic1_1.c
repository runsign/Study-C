#include "stdio.h"

void main()
{
	int a, b;

	printf("ù��° ���ڸ� �Է��ϼ��� :");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��ϼ��� :");
	scanf_s("%d", &b);

	if (a > b)
	{
		printf("%d�� ū �����Դϴ�.", a);
	}
	else
		printf("%d�� ū �����Դϴ�.", b);
}