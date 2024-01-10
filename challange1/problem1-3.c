#include <stdio.h>

int make_gcd(int*, int*,int);
void temp(int*,int*);

int main()
{
	int gcd = 1;
	int n1 = 0, n2 = 0;
	int* np1 = &n1, * np2 = &n2;
	printf("enter the two integers : ");
	scanf_s("%d,%d",&n1,&n2);
	if (n1>n2)
	{
		temp(&n1, &n2);
	}
	else if (n1 == n2)
	{
		printf("error : same integers!");
		return 0;
	}
	
	printf("GCD : %d", make_gcd(n1,n2,gcd));
	return 0;
}

int make_gcd(int n1, int n2 , int gcd)
{
	int k = 1;
	for (k = 1; k <= n1; k++)
	{
		if ( n1%k==0 && n2%k==0 )
		{
			n1 = n1 / k;
			n2 = n2 / k;
			gcd = gcd * k;
			k = 1;
		}
	}
	return gcd;
}

void temp(int* n1, int* n2)
{
	int temp = n1;
	n1 = n2;
	n2 = n1;
}