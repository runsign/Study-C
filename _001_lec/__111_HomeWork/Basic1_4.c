#include "stdio.h"

void main()
{
	int i;
	printf("���ڸ� �Է��ϼ��� :");
	scanf_s("%d", &i);

	if (i > 0)
	{
		printf("�Է��Ͻ� ������ ���밪�� %d �Դϴ�.\n", i);
	}
	else
	{
		printf("�Է��Ͻ� ������ ���밪�� %d �Դϴ�.\n", i*(-1));
	}
}