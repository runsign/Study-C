#include <stdio.h>

void main()
{
	int sum= 0, want;

	do
	{
		printf("���ϴ� ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &want);
		sum += want;	
	} while (want != 0 );
	printf("������ %d �Դϴ�", sum);
}