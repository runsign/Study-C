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

int Baesu(int first, int second)
{
	int i, yaksu, MinBaesu;
	for (i = 1; i <= first && i <= second; i++)
	{
		if (first % i == 0 && second % i == 0)
			yaksu = i;
		MinBaesu = (first * second) / yaksu;
	}
	return MinBaesu;
}

void main()
{
	cls();
	int first = SelectNum();
	int second = SelectNum();

	int MinBaesu = Baesu(first, second);
	printf("�Է��Ͻ� �� ���� �ּҰ������ %d�Դϴ�.", MinBaesu);
	getch();
}