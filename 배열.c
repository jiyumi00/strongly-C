#include<stdio.h>
//08-01 배열에서 최댓값 구하기
int main()
{
	int aList[5] = { 30,40,10,50,20 };
	int i = 0;
	//
	for (i = 0; i < 5; i++)
	{
		if (aList[0] < aList[i])
		{
			aList[0] = aList[i];
		}
	}



	//

	for (i = 0; i < 5; i++)
	{
		printf("%d\t", aList[i]); // 50, 40,10,50,20
	}
	putchar('\n');

	printf("MAX: %d\n", aList[0]); //50

	return 0;
}