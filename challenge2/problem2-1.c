#include <stdio.h>

void printeven(int*);
void printodd(int*);

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printeven(arr);
	printodd(arr);
	return 0;
}

void printeven(int* ar)
{
	printf("even numbers : ");
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] % 2 == 0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
}

void printodd(int* ar)
{
	printf("odd numbers : ");
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] % 2 == 1)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
}