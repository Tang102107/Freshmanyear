#include<stdio.h>
//int main()
//{
//	printf("hello world\n");
//	goto again;
//	printf("����");
//	again:
//	printf("���");
//	return 0;
//}

//�ػ�����
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };            //shutdown -s -t 60��ʾ60���ػ�
	system("shutdown -s -t 60");          //shutdown -a ��ʾȡ���ػ�
again:
	printf("��ע�⣬��ĵ��Խ���1�����ڹػ����������:��������ȡ���ػ�\n������:");
	scanf_s("%s", input);
	if (strcmp(input,"������") == 0)      //�Ƚ������ַ���-strcmp
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}