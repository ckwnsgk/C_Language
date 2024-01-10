#include <stdio.h>

int recursive(int);

int main()
{
	int num = 8;

	printf("result : %d", recursive(num));
	return 0;
}

int recursive(int num)
{
	if (num == 0)
	{
		return 1;
	}
	num--;
	return recursive(num) * 2;
}