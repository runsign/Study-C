#include "stdio.h"

void main()
{
	int jik, kung, num;

	printf("������ ���� Ƚ���� �Է��ϼ��� : ");
	scanf_s("%d", &jik);
	printf("������� �������� �Է��ϼ��� : ");
	scanf_s("%d", &kung);

	num = kung;

	while (jik > 0)
	{
		if (num > 0)
		{
			printf("��\n");
			num--;
		}
		else
		{
			printf("��\n");
			num = kung;
		}
		jik--;
	}
}