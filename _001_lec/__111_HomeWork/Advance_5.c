#include "stdio.h"

void main()
{
	int i, j;
	char c;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &i);



	for (i; i > 0; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("o");
		}
		printf("\n");
	}
}