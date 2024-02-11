#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** ArrayList의 생성 및 초기화 ***/
	List list;
	int data;
	ListInit(&list);

	/*** 9개의 데이터 저장 ***/
	LInsert(&list, 1);  LInsert(&list, 4);	LInsert(&list, 7);
	LInsert(&list, 2);  LInsert(&list, 5);	LInsert(&list, 8);
	LInsert(&list, 3);	LInsert(&list, 6);	LInsert(&list, 9);

	/*** 저장된 데이터의 전체 출력 ***/
	//printf("현재 데이터의 수: %d \n", LCount(&list));
	int Data_total = 0;
	if(LFirst(&list, &data))    // 첫 번째 데이터 조회
	{
		printf("%d ", data);
		Data_total += data;
		while (LNext(&list, &data))    // 두 번째 이후의 데이터 조회
		{
			Data_total += data;
		}
	}
	printf("데이터의 합 !!! : %d\n", Data_total);
	printf("\n\n");

	/*** 2의배수와 3의배수의 데이터 삭제 ***/
	if(LFirst(&list, &data))
	{
		if(data % 2 == 0 || data % 3 == 0)
			LRemove(&list);
		
		while(LNext(&list, &data))
		{
			if(data % 2 == 0 || data % 3 == 0)
				LRemove(&list);
		}
	}

	/*** 삭제 후 저장된 데이터 전체 출력 ***/
	printf("현재 데이터의 수: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}