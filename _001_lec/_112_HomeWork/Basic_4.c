#include <stdio.h>

void main()
{
	int i = 1, want;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &want);

	do
	{
		if (i % 2 == 0)
		{
			printf("%d\n", i);
		}
		i++;
	} while (i <= want
		);
}