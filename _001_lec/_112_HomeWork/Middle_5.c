#include <stdio.h>

void cls()
{
	system("cls");
}

int selNum()
{
	int want, j=1;
	printf("���ϴ� ������ �Է��ϼ��� : ");
	scanf_s("%d", &want);
	
	for (want; want > 0; want--)
	{
		j *= want;
	}
	return j;
}

void main()
{
	cls();
	int want = selNum();
	
	printf("�Է��Ѽ��� ���丮�� ���� %d�Դϴ�.", want);
}