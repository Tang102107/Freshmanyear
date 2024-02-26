#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	goto again;
//	printf("加油");
//	again:
//	printf("你好");
//	return 0;
//}

//关机代码
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };            //shutdown -s -t 60表示60秒后关机
	system("shutdown -s -t 60");          //shutdown -a 表示取消关机
again:
	printf("请注意，你的电脑将在1分钟内关机。如果输入:我是猪，就取消关机\n请输入:");
	scanf_s("%s", input);
	if (strcmp(input,"我是猪") == 0)      //比较两个字符串-strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}