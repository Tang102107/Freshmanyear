#include<stdio.h>
#include<string.h>//strlen的头文件
#include<windows.h>//Sleep的头文件
#include<stdlib.h>//system
//编写代码：演示多个字符从两端移动，向中间汇聚
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
//		Sleep(1000);//休息一秒
//		system("cls");//执行系统命令的一个函数—cls—清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登陆三次。（只允许需输入三次密码，如果密码正确则提示登录成功，如果三次均错误，则退出程序）
//int main()
//{
//	int i = 1;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf_s("%s", password);
//		if (strcmp(password, "123456") == 0)//  ==  不能用来比较两个字符是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序");
//	return 0;
//}

//在一组有序数组中查找具体的某个数字n。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//
//}