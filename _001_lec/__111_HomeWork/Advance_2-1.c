#include "stdio.h"

void main()
{
	int won, i;
	printf("���ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &won);

	for (i = 1; i <= won; i++)
	{
		printf("*");
	}
}