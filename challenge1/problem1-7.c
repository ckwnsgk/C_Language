#include <stdio.h>

int main()
{
	int num = 32;
	int result = 1;
	int i = 0;
	while (1)
	{
		result *= 2;
		if (result > num)
		{
			break;
		}
		i++;
	}
	printf("%d", i);
	return 0;
}