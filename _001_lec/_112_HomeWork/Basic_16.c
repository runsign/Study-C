// �����!!!

#include <stdio.h>

void main()
{
	int sum = 0, want=0;

	for (want; want ==0; want+0)
	{
		printf("���ϴ� ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &want);
		sum += want;

		if (want == 0)
			break;
	}
}