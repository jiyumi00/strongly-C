#include<stdio.h>

int main()
{
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, nTmp = 0;

	//
	for (i = 0; i < 5; i++)
	{
		if (aList[0] > aList[i])
		{
			nTmp = aList[0];
			aList[0] = aList[i];
			aList[i] = nTmp;
		}
	}
	//
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", aList[i]); //10 40 30 50 20
	}
	putchar('\n');

	printf("MIN : %d\n", aList[0]);
	return 0;

}