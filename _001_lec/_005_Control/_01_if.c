#include "stdio.h"

void main()
{
	int num = 0;

	printf("���� �Է� >> ");
	scanf_s("%d", &num);

	if (num > 10)
	{
		printf("num�� 10���� Ů�ϴ�\n");
	}
	else if (num == 10)
	{
		printf("num�� 10�Դϴ�\n");
	}
	else
	{
		printf("num�� 10���� �۽��ϴ�\n");
	}
}