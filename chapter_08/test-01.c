#include<stdio.h>

int main()
{
	// max , min
	int aList[5] = { 1,5,2,4,3 };
	int i = 0, min = 100, max = 0;

	for (i = 0; i < 5; i++)
	{
		if (min > aList[i])
		{
			min = aList[i];
		}
		if (max < aList[i])
		{
			max = aList[i];
		}
	}
	printf("MIN : %d, MAX : %d",min,max);
	return 0;
}