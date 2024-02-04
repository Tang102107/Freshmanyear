#include<stdio.h>
//从大到小输出三个值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;       
//		b = tmp;     
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;       
//		c = tmp;     
//	}
//	if (b < c)
//	{
//		int tmp = b;    
//		b = c;      
//		c = tmp;         
//	}printf("%d%d%d", a, b, c);
//	return 0;
//}

//求出1——100内3的所有倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%3==0)
//		printf("%3d", i);
//	}
//	return 0;
//}

//求两个数的最大公约数  （辗转相除法）
//int main()
//{
//	int m;
//	int n;
//	int r;
//	scanf_s("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//判断year是否为闰年
//int main()
//{
//	int year;
//	for (year = 1000; year < 2035; year++)
//	{
//		if (year % 5== 0)
//		{
//			printf("\n");
//		}
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%d是闰年 ",year);
//	}
//	return 0;
//}

