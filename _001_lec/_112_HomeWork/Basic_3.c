#include <stdio.h>

void main()
{
	int sum=0, i=1, j;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &j);

	do
	{
		sum += i;
		i++;
	} while (i <= j);

	printf("1���� %d������ ���� %d �Դϴ�", j, sum);
}