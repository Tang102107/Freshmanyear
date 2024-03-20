#include<stdio.h>
//判断是否为闰年
int main()
{
	int year = 0;
	for (year = 2000; year <= 2035; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%d是闰年  ", year);
		}
	}
	return 0;
}
