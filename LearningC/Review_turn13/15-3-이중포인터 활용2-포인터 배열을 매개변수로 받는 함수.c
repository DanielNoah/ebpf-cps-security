#include <stdio.h>

void print_string(char **pps, int count);
/* 포인터 배열의 의미는 곧, 배열이 포인터와 마찬가지로 첫 번째 요소의 주소를 가리키는 변수라는 점. */
int main()
{
	char *poniter_array[] = {"eagle", "tiger", "lion", "squirrel"}; // *포인터 '배열' 선언과 초기화
	int count;														// 배열 요소 수를 저장할 변수

	count = sizeof(poniter_array) / sizeof(poniter_array[0]);		// 배열 요소 수 계산
	print_string(poniter_array, count);								// 배열명(포인터 배열의 이름->포인터의 주소)과 
}																	// 배열 요소 수를 인자로 주고(메시지 패싱) 호출

void print_string(char **pps, int cnt)								// 11행에서 포인터의 주소를 의미하는 배열명을 인자로
{																	// 받았기 때문에, 포인터주소를 담을 수 있는 이중포인터 매개변수 선언!
	int i;

	for (i = 0; i < cnt; i++)			// 배열 요소 수만큼 반복
		{
			printf("%s\n", pps[i]);	// &pps ( 캐릭터 이중포인터형 pps는 pointer_array 배열로 초기화 했으므로, 
									// pps[i]로 첫번째 배열요소부터 출력 가능 )	-> 이중포인터를 배열명처럼 사용
		}
}