#include <stdio.h>

void main()
{
	int ARR[10];
	int i, sum=0;

	for (i = 0; i < 10; i++)
	{
		printf("���ϴ� %d��° ���� �Է��ϼ��� : ", i+1);
		scanf_s("%d", &ARR[i]);
		sum += ARR[i];
	}

		printf("�迭�� �� ���� %d�Դϴ�.\n", sum);
}