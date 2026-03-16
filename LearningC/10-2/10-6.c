/* '크기가 다른 배열 2개를 출력하는 함수'
	
	배열의 요소 개수를 수동적(매개변수 인수)으로 전달해서 배열 요소를 전부 출력 소스 -> 매개변수 미리생성 후 전달 */

#include <stdio.h>

void print_ary(int *pa, int size); //함수 선언

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };
	int size1 = sizeof(ary1) / sizeof(ary1[0]);  // 배열요소의 개수 미리 구해서 매개변수(size1) 초기화
	int size2 = sizeof(ary2) / sizeof(ary2[0]);  // 배열요소의 개수 미리 구해서 매개변수(size2) 초기화

	print_ary(ary1, size1); // 배열함수 print_ary에 *pa = 배열명 ary1 -> 배열 포인터 초기화(출력) , size = 5 전달(호출)
	printf("\n");
	print_ary(ary2, size2); // 배열함수 print_ary에 *pa = 배열명 ary1 -> 배열 포인터 초기화(출력) , size = 7 전달(호출)

	return 0;
}

void print_ary(int *pa, int size)	// 배열명과 배열 요소의 개수를 받는 매개변수 선언
{
	int i;

	for (i = 0; i < size; i++)		// size의 값에 따라 반복 횟수 점검
	{
		printf("%d\t", pa[i]);
	}
}