#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//д��һ�������ӡ1--100��3�ı���
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

//��������������С�������
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

//����һ���˵�����
//���<18�꣬��ӡ����
//�����18-44֮�䣬��ӡ����
//�����45-59֮�䣬��ӡ������
//�����60-89֮�䣬��ӡ����
//�����90�����ϣ���ӡ������
int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("����");
	else if (age < 44)
		printf("����");
	else if (age < 59)
		printf("������");
	else if (age < 89)
		printf("����");
	else
		printf("������");
	return 0;
}