#include "stdio.h"

void main()
{
	int i, j, won;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &won);

	i = won;

	for (i ; i >0 ; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}