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

int ABSvalue(int first, int second)
{
	int ABS = first - second;
	if (first - second > 0)
		return ABS;

	else
		return -ABS;
}

void main()
{
	cls();
	int first = SelectNum();
	int second = SelectNum();
	int ABS = ABSvalue(first, second);

	printf("�� �� ������ ���밪�� %d�Դϴ�.", ABS);
}