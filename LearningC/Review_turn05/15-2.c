#include <stdio.h>

void swap_ptr(char** ppa, char** ppb); // 프로토 타입 함수 선언 

int main(void)
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pb, &pa);
	printf("pa -> %s, pb -> %s\n", pa, pb);
	
	return 0;
}

void swap_ptr(char** ppa, char** ppb) // (char** ppa = &pa, char** ppb = &pb) 매개변수에 주소 값 대입하여 함수 초기화
{
	char* pt;
	pt = *ppa; // pt 일반 변수에 포인터 변수 ppa가 가리키는 값(&pa) 저장
	*ppa = *ppb; // 포인터 변수 ppa에 포인터 변수 ppb가 가리키는 값(&pb) 저장
	*ppb = pt; // 포인터 변수 ppb에 pt에 저장한 값(&pa) 저장
}