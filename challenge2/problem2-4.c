#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = {0,};
	printf("enter : \n");
	scanf("%s",arr);
	int check = 0;
	int len = strlen(arr);
	for (int i = 0; i < len/2; i++)
	{
		if (arr[i] != arr[len-1-i])
		{
			printf("no palindrome");
			return 0;
		}
		i++;
	}
	printf("palinfrome");
	return 0;
}