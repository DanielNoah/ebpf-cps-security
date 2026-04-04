#include <stdio.h>
/* 2차원 배열(주소 값)을 배열포인터에 대입(포인터 초기화)해서 사용하는 까닭?
   물리적으로나 논리적으로나 '1차원'인 2차원 배열을 실제 2차원의 논리적 구조로 사용하기 위함	
   배열은 주소(r-value)이기도 하나, 논리적으로 변수의 기능(l-value)도 하기 때문에,
   모두 같은 값을 가지는 주소라고 해도, 실제 크기가 다 다르다. */
void print_ary(int (*pa)[4]);

int main()
{
	int ary[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	printf("각 주소의 값 &ary  ary  &ary[0]  ary[1]  &ary[3][4] : %u %u %u %u %u\n", &ary, ary, &ary[0], ary[1], &ary[3][4]);
	printf("각 주소의 크기 ary  &ary[0]  ary[1]  &ary[3][4] : %u %u %u %u\n", sizeof(ary), sizeof(&ary[0]), sizeof(ary[1]), sizeof(&ary[3][4]));
	print_ary(ary);			// 배열명을 인수로 주고 함수 호출

	return 0;
}


void print_ary(int (*pa)[4]) // 매개변수는 배열 포인터
{
	int i, j;

	for (i = 0; i < 3; i++)
	{	
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);	// pa를 2차원 배열처럼 사용
		}
		printf("\n");
	}

	printf("각 주소의 값 &pa  pa  &pa[0]  pa[1]  &pa[3][4] : %u %u %u %u %u\n", &pa, pa, &pa[0], pa[1], &pa[3][4]);
	printf("각 주소의 크기 pa  &pa[0]  pa[1]  &pa[3][4] : %u %u %u %u\n", sizeof(pa), sizeof(&pa[0]), sizeof(pa[1]), sizeof(&pa[3][4]));
}