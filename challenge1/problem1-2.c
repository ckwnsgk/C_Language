#include <stdio.h>

void multiple(int, int);

int main()
{
	int num1 = 0, num2 = 0;
	printf("enter the two integer :  ");
	scanf_s("%d %d",&num1,&num2);
	multiple(num1,num2);
	return 0;
}
void multiple(int n1, int n2)
{
	int temp;
	if (n1 < n2)
	{
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	else if (n1 == n2)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d x %d = %d\n",n1,i,n1*i);
		}
		printf("--------------------\n");
		return 0;
	}
	for (int start = n2; start <= n1; start++)
	{
		for (int k = 1; k <= 9; k++)
		{
			printf("%d x %d = %d\n", start, k, start * k);
		}
		printf("--------------------\n");
	}
	return 0;
}
