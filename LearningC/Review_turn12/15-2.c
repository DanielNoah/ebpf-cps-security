#include <stdio.h>
/* 이중 포인터를 활용 1. 포인터 값을 바꾸는 함수의 매개변수 */ 

void swap_ptr(char** ppa, char** ppb);		

int main()
{
	char* pa = "failure";
	char* pb = "success";

	printf("pa -> %s <-> pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);						// pa, pb의 주소를 인자로 주고 호출
	printf("pa -> %s <-> pb -> %s\n", pa, pb);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)		// 매개변수로 이중 포인터 사용
{
	char* pt;
	pt = *ppa;								// ppa가 가리키는 값(failure)을 pt에 저장
	*ppa = *ppb;							// ppb가 가리키는 값(success)을 ppa가 가리키는 pa에 저장 
	*ppb = pt;								// pt(failure)의 값을 ppb가 가리키는 pb에 저장

	
}