#include <stdio.h>

void main()
{
	int a, b, baesu, yaksu;

	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	// �ִ����� ����

	for (int i = 1; i <= a && i<= b; i++)
	{
		if (a % i == 0 && b % i == 0)
			yaksu = i;
	}

	// �ּҰ���� ���� 

	printf("%d�� %d�� �ּҰ������ %d �Դϴ�. ", a, b, (a*b/yaksu));
}