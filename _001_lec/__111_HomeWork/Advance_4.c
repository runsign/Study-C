#include "stdio.h"

void main()
{
	float Won;
	int Nyun;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%f", &Won);
	printf("���� �⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &Nyun);

	Nyun = Nyun - 2010;

	for (Nyun; Nyun > 0; Nyun--)
	{
		Won = Won + (Won * 0.08);
	}

	printf("���� ������ %f �Դϴ�.", Won);
}