#include <stdio.h>

void main()
{
	int i = 1, want;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &want);

	do
	{
		if (want < 0)
		{
			printf("������ �Է��ϼ̽��ϴ�.\n");
			main();
		}
		else
		{
			printf("�����մϴ�.\n");
			i++;
		}
		
	} while (i <= want);
}