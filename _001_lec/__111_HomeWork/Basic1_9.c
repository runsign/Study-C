#include "stdio.h"

void main()
{
	int i,j;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &i);
	
	for (j=1 ; i > 0 ; j++)
	{
		printf("%d\n", j * 3);
		i--;
	}
}