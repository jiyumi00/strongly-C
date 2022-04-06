#include<stdio.h>
//test01
int main()
{
	int nList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 1, nFlag = 1;
	/* 1
	for (j = 0; j < 5; j++)
	{
		if (j % 2 == 0)
		{
			for (i = 0; i < 5; i++)
			{
				nList[i][j] = nCounter++;
			}
		}
		else
		{
			for (i = 4; i >= 0; i--)
			{
				nList[i][j] = nCounter++;
			}
		}
	}
	*/
	//2
	for (j = 0; j < 5; j++)
	{
		if (nFlag)
		{
			for (i = 0; i < 5; i++)
			{
				nList[i][j] = nCounter++;
			}
			nFlag = 0;
		}
		else
		{
			for (i = 4; i >= 0; i--)
			{
				nList[i][j] = nCounter++;
			}
			nFlag = 1;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", nList[i][j]);
		}
		putchar('\n');
	}

	return 0;
}