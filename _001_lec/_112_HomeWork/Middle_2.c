#include <stdio.h>

void main()
{
	int i, sum = 0;

	for (i = 1; sum <= 1000; i++)
	{
		sum += i;
		if (sum > 1000)
			break;
	}
	printf("�� ���� %d �Դϴ�.", sum);
	
	for (i; i >= 0; i--)
	{
		printf("���� ���� %d �Դϴ�.\n", i);
	}
}