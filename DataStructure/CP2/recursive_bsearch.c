#include <stdio.h>

int Bsearch(int ar[], int first , int last , int target);

int main()
{
	int first = 0;
	int last = 4;
	int ar[5] = { 1,4,6,9,10 };
	if (Bsearch(ar,first,last,2) == -1)
	{
		printf("search error\n");
	}
	else
		printf("search sucess : %d --> %d ¹øÁö", ar[Bsearch(ar, first, last, 9)], Bsearch(ar, first, last, 9));
		return 0;
}

int Bsearch(int ar[], int first, int last, int target)
{
	if (first > last)
	{
		return -1;
	}
	int mid = (first + last) / 2;
	if (ar[mid]==target)
	{
		return mid;
	}
	else if (ar[mid] > target)
	{
		last = mid - 1;
	}
	else if (ar[mid] < target)
	{
		first = mid + 1;
	}
	return Bsearch(ar, first, last, target);


}