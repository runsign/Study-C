#include "stdio.h"

void main()
{
	int jik;

	printf("������ ���� Ƚ���� �Է��ϼ��� : ");
	scanf_s("%d", &jik);

	while (-1 != jik)
	{
		printf("���ö� ����������� �������� �ƴ϶���.\n");
		printf("������ ���� Ƚ���� �Է��ϼ��� : ");
		scanf_s("%d", &jik);
	}
}