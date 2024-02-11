#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
	/*** ArrayList�� ���� �� �ʱ�ȭ ***/
	List list;
	int data;
	ListInit(&list);

	/*** 9���� ������ ���� ***/
	LInsert(&list, 1);  LInsert(&list, 4);	LInsert(&list, 7);
	LInsert(&list, 2);  LInsert(&list, 5);	LInsert(&list, 8);
	LInsert(&list, 3);	LInsert(&list, 6);	LInsert(&list, 9);

	/*** ����� �������� ��ü ��� ***/
	//printf("���� �������� ��: %d \n", LCount(&list));
	int Data_total = 0;
	if(LFirst(&list, &data))    // ù ��° ������ ��ȸ
	{
		printf("%d ", data);
		Data_total += data;
		while (LNext(&list, &data))    // �� ��° ������ ������ ��ȸ
		{
			Data_total += data;
		}
	}
	printf("�������� �� !!! : %d\n", Data_total);
	printf("\n\n");

	/*** 2�ǹ���� 3�ǹ���� ������ ���� ***/
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

	/*** ���� �� ����� ������ ��ü ��� ***/
	printf("���� �������� ��: %d \n", LCount(&list));

	if(LFirst(&list, &data))
	{
		printf("%d ", data);
		
		while(LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}