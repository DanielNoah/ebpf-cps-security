#include <stdio.h>
/* 주소로 쓰이는 배열명(규칙 1.)과 배열의 주소(규칙 2.) 비교 */
int main(void)
{
	int ary[5];

	printf("   ary의 값 : %u\t", ary); // 주소로써의 배열명의 값
	printf("  ary의 주소 : %u\n", &ary); // 배열의 주소 (두 번째 기능, 배열 전체를 하나의 변수)
	printf("   ary + 1 : %u\t", ary + 1); // int형 배열의 요소이므로 4byte 증가
	printf("  &ary + 1 : %u\n", &ary + 1); // 배열의 크기 20byte 증가

	return 0;
}