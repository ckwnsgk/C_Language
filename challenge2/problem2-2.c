#include <stdio.h>

int change(int);

int main()
{
	int num = 12;
	change(num);
	return 0;
}

int change(int n1)
{
	int arr[20] = { 0 };
	int i = 0;
	for (i = 0; i < 30; i++)
	{
		if (n1 == 1)
		{
			arr[i] = 1;
			break;
		}
		arr[i] = n1 % 2;
		n1 /= 2;
	}
	for (i; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
}