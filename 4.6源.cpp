#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写出一个代码打印1--100中3的倍数
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d   ", a);
//	}
//	return 0;
//}

//给定三个数，从小到大输出
//int main()
//{
//	int a=0 ;
//	int b =0;
//	int c =0;
//	int num = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		num = a;
//		a = b;
//		b = num;
//	}
//	if (a < c)
//	{
//		num = c;
//		c = a;
//		a = num;
//	}
//	if (b < c)
//	{
//		num = c;
//		c = b;
//		b = num;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//输入一个人的年龄
//如果<18岁，打印少年
//如果在18-44之间，打印青年
//如果在45-59之间，打印中老年
//如果在60-89之间，打印老年
//如果在90岁以上，打印老寿星
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("少年");
	else if (age < 44)
		printf("青年");
	else if (age < 59)
		printf("中老年");
	else if (age < 89)
		printf("老年");
	else
		printf("老寿星");
	return 0;
}