#include <stdio.h>

void main()
{
	int i, want;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &want);

	for (i=9; i > 0; i--)
	{
		printf("%d x %d = %d \n", want, i, i * want);
	}

}