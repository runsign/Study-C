#include <stdio.h>

void cls()
{
	system("cls");
}

int SelectNum()
{
	int num;
	printf("���Ͻô� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	return num;
}

int calcNum(int want)
{
	for (int i = 1; i <= want; i++)
	{
		printf("%d x %d = %d\n", want, i, want*i);
	}
}

void main()
{
	cls();
	int want = SelectNum();
	int Calc = calcNum(want);

	getch();
}