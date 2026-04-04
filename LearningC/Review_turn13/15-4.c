#include <stdio.h>
/* 주소로 쓰이는 배열명과 배열의 주소 비교 */
int main()
{
	int ary[5];

	printf(" ary의 값 : %p\t", ary);			// 주소로서의 배열명의 값 (첫 번째 배열 요소의 주소 값) -> 포인터형으로 출력 
	printf("ary의 주소 : %u\n", &ary);		// 전체 배열의 주소 -> 부호가 없는 값으로 출력
	printf(" ary + 1 : %p\t", ary + 1);		// 첫 번째 배열요소의 주소 값에 offset( + int 4byte )한 값 -> 포인터형으로 출력 
	printf("&ary + 1 : %u\n", &ary + 1);		// 전체 배열 주소에 1를 offset( + int 4byte X 5 )한 값 -> 부호가 없는 값으로 출력

	return 0;
}