#include<stdio.h>

int main()
{
	char szData[100] = { 0, };
	int length = 0;

	gets_s(szData,sizeof(szData));
	//scanf_s("%s", &szData,sizeof(szData));
	while (szData[length] != '\0')
	{
		length++;
	}
	
	printf("�ѱ� ������ ������ %d�� �Դϴ�", length/2); // korean 1-2byte
	return 0;
}