#include <stdio.h>

cls()
{
	system("cls");
}

int over1000()
{
	int i, sum=0;
	for (i = 1; sum <= 1000; i++)
	{
		sum += i;
		if (sum > 1000)
			return sum;
	}
}

void main()
{
	cls();
	int sum = over1000();
	printf("1000�� �������� ������ %d�Դϴ�.", sum);
	getch();
}