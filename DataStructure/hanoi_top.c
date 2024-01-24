#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to);

int main()
{
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}
//form에 있는 원반 num개가 by를 통해 to로 이동한다.
void HanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1)
	{
		printf("원반1 %c->%c\n",from,to);
		return 0;
	}
	else
	{
		HanoiTowerMove(num - 1,from,to,by);
		printf("원반%d 가 %c -> %c\n",num,from,to);
		HanoiTowerMove(num - 1, by, from, to);
	}
}
