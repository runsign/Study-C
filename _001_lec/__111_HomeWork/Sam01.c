#include "stdio.h"

void main()
{
	int num;
	printf("홀수를 입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (i+j < num-1 || (num-1)*2-(num-1)/2 < i+j ||
				i - j > (num - 1) / 2 ||
				i - j < -(num - 1) / 2)
			{
				printf(" ");
			}
			esle
				printf ("*");
		}
		printf("\n");
	}
}

/*

00 10 20 30 40 50
01 11 21 31 41 51
02 12 22 32 42 52
03 13 23 33 43 53
04 14 24 34 44 54

*/