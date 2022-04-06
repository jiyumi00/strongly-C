#include<stdio.h>
//snail array
int main()
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 1,nFlag=1;

	//
	for (i = 0; i < 5; i++)
	{
		if (i == 0)//
		{
			for (j = 0; j < 4; j++)
			{
				aList[0][j] = nCounter++;
			}
			
		}
		aList[i][4] = nCounter++;
		
		if (i == 4)
		{
			for (j =3;j>0; j--)
			{
				aList[4][j] = nCounter++;
			}
			
		}
		aList[4-i][0] = nCounter++;
	}

	//
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", aList[i][j]);
		}
		putchar('\n');
	}
	return 0;
}