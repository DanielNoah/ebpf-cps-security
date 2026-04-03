#include <stdio.h>
/* 이중 포인터를 활용 2. 포인터 배열을 매개변수로 받는 함수 */ 

void print_str(char** pps, int cnt);

int main()
{
	char* ptr_ary[] = {"ealge", "elephant", "lion", "monkey", "owl"};	// 'char* []형 포인터 배열 초기화
	int count;										// 배열 요소 수를 저장할 변수

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // 배열 요소의 수 계산
//	print_str(&ptr_ary, count); // 배열이기 때문에 주소연산자(&) 불필요
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt) // 매개변수로 이중포인터 사용
{
	int i;

	for (i = 0; i < cnt; i++)		// 배열 요소 수만큼 반복
	{
		printf("%s\n", pps[i]);		// 이중 포인터를 배열명처럼 사용
	}
}
