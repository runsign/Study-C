#include <stdio.h>

void cls()
{
	system("cls");
}

int SelectNum()
{
	int num;
		printf("���Ͻô� ������ �Է��ϼ��� : ");
		scanf_s("%d", &num);
		return num;
}

int vsBig(int first, int second)
{
	if (first > second)
		return first;

	else
		return second;
}

int vsSml(int first, int second)
{
	if (first < second)
		return first;

	else
		return second;
}


void main()
{
	cls();
	int first = SelectNum();
	int second = SelectNum();

	int big = vsBig(first, second);
	int sml = vsSml(first, second);

	printf("�� ���� ū ���� %d�̰� �������� %d �Դϴ�.", big, sml);
}