#include<stdio.h>
//�ж��Ƿ�Ϊ����
int main()
{
	int year = 0;
	for (year = 2000; year <= 2035; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%d������  ", year);
		}
	}
	return 0;
}
