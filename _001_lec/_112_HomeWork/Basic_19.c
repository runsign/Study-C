#include <stdio.h>

void main()
{
	int ARR[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("���ϴ� %d��° ���� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &ARR[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (ARR[i] % 2 == 0 && ARR[i] % 3 == 0 && ARR[i] != 0)
		{
			printf("%d��° �迭�� 2�� 3 ����� ��� : %d\n", i + 1, ARR[i]);
		}
		else if (ARR[i] % 2 == 0 && ARR[i] != 0)
		{
			printf("%d��° �迭�� 2�� ��� : %d\n", i + 1, ARR[i]);
		}
		else if (ARR[i] % 3 == 0 && ARR[i] != 0)
		{
			printf("%d��° �迭�� 3�� ��� : %d\n", i + 1, ARR[i]);
		}
		else
			printf("%d��° �迭�� %d�ν�, 2�� 3�� ����� �ƴմϴ�.\n", i + 1, ARR[i]);;
	}
}