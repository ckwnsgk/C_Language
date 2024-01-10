#include <stdio.h>

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sol[10] = { 0, };
	int i = 0;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 1)
		{
			sol[k] = arr[i];
			k++;
		}
	}
	for (int p = 0; p < 10; p++)
	{
		if (arr[p] % 2 == 0)
		{
			sol[k] = arr[p];
			k++;
		}
	}

	for (int o = 0; o < 10; o++)
	{
		printf("%d ",sol[o]);
	}
	return 0;
}