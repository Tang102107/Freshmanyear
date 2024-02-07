#include<stdio.h>
//打印乘法口诀表
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j;
		for (j = 1; j <= i; j++)
		{
			 printf("%d*%d=%-5d", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

//猜数字游戏
//void menuu()
//{
//	printf("*******************************\n");
//	printf("***  1. play      0.exit   ****\n");
//	printf("*******************************\n");
//}
//do
//{
//	menu()
//
//}