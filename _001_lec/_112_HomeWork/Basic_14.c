#include <stdio.h>

void main()
{
	int i = 1, want;

	printf("���Ͻô� ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &want);


		if (want < 0)
		{
			printf("������ �Է��ϼ̽��ϴ�.\n");
			main();
		}
		
		for (i; i <=want; i++)
		{
			printf("%d\n", 3 * i);
		}
}