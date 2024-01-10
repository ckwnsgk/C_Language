#include <stdio.h>

int main()
{
	int arr[4][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int result[4][4] = { {0,},{0,},{0,},{0,} };

	for (int i = 0; i < 4; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			result[i][k] = arr[k][3-i];
		}
	}

	for (int p = 0; p < 4; p++)
	{
		for (int m = 0; m < 4; m++)
		{
			printf("%d ",result[p][m]);
		}
		printf("\n");
	}
	
	return 0;
}