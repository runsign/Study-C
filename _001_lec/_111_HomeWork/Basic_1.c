#include "stdio.h"

void main()
{
	int a, b, c, sum1 = 0, sum2 = 0;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);
	printf("����° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		printf("�Է��Ͻ� ���ڷ� �ﰢ���� ���� �� �ֽ��ϴ�.\n");
	}
	else
	{
		printf("�Է��Ͻ� ���ڷ� �ﰢ���� ���� �� �����ϴ�.\n");
	}
}