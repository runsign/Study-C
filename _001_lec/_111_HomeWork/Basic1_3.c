#include "stdio.h"

void main()
{
	float a, b;
	char c;

	printf("�����ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &c); 
	// �� �� ������ ���� ��߸� �۵��� �ɱ��? ���ڸ� ���� �Է¹����� �۵��� ���� �ʽ��ϴ�. �����!!

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf_s("%f", &a);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf_s("%f", &b);

	switch (c)
	{
	case '+':
		printf("%f\n", a+b);
		break;
	case '-':
		printf("%f\n", a-b);
		break;
	case '*':
		printf("%f\n", a*b);
		break;
	case '/':
		printf("%f\n", a/b);
		break;
	default :
		printf("����ε� �����ڰ� �ƴմϴ�.\n");
		break;
	}
}