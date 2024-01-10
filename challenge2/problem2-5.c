#include <stdio.h>

void show(int []);
void Des_sort(int []);

int main()
{
	int arr[7] = { 26,25,23,17,28,11,40 };
	Des_sort(arr);
	show(arr);
	return 0;
}

void show(int arr[])
{
	for (int i = 0; i < 7; i++)
	{
		printf("%d ",arr[i]);
	}
}

void Des_sort(int arr[])
{
	int temp = 0;
	for (int k = 0; k < 7; k++)
	{
		for (int j = 0; j < 7-k; j++)
		{ 
			if (arr[j] < arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}