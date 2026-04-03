#include <stdio.h>
/* 2차원 배열을 출력하는 함수 */ 

void print_ary(int (*pa)[4]); // int형 변수 4개의 1차원 배열(int [4])을 가리키는 배열 포인터를 매개변수로 받는 함수 선언

int main()
{	
	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	
	print_ary(ary);

	return 0;
}

void print_ary(int (*pa)[4]) 
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]); // pa를 ary처럼 사용 (이 차이는 배열 ary가 물리적으로나 논리적으로나 1차원이 아니라,)
		}							// 배열을 가리키는 포인터로 2차원 배열의 이름을 저장할 수 있음.
		printf("\n");
	}
}