#include <stdio.h>

/* 문자열은 주소이기 때문에 문자열도 char 포인터에 대입해 사용 가능(야매) */
int main(void)
{
	char* dessert = "apple"; 				// 포인터에 문자열 초기화
	printf("집에 있는 과일 : %s\n", dessert);	// 문자열 출력

	dessert = "banana";						// 새로운 문자열 대입
	printf("집에 없는 과일 : %s\n", dessert);	// 새로운 문자열 출력

	return 0;
}