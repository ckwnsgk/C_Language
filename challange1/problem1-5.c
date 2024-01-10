#include <stdio.h>

int main()
{
	for (int num = 2; num < 100; num++)
	{
		int check = 0;
		if (num == 2)
		{
			printf("2\n");
			continue;
		}
		for (int i = 2; i <= num-1; i++)
		{
			if(num%i==0)
			{
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			printf("%d\n", num);
		}
	}
	return 0;
}