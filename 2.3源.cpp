#include<stdio.h>
#include<string.h>//strlen��ͷ�ļ�
#include<windows.h>//Sleep��ͷ�ļ�
#include<stdlib.h>//system
//��д���룺��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "welcome come to china";
//	char arr2[] = "#####################";
//		int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//ִ��ϵͳ�����һ��������cls�������Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Ρ���ֻ�����������������룬���������ȷ����ʾ��¼�ɹ���������ξ��������˳�����
//int main()
//{
//	int i = 1;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf_s("%s", password);
//		if (strcmp(password, "123456") == 0)//  ==  ���������Ƚ������ַ��Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����");
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = (left = right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//
//}