#include <stdio.h>

void main()
{
	int i = 1, want;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &want);

	for (i; i <= 9; i++)
	{
		printf("%d x %d = %d \n", want, i, i * want);
	}

}