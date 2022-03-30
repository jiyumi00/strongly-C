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
	
	printf("한글 문자의 개수는 %d자 입니다", length/2); // korean 1-2byte
	return 0;
}