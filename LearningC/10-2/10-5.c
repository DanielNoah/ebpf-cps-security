#include <stdio.h>

void print_ary(int *pa); //함수 선언

int main(void)
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary);	// 배열명을 주고 함수 호출

	return 0;
}

void print_ary(int *pa) // 매개 변수로 int형을 가리키는 포인터 pa 선언
{
	int i;

	for ( i = 0; i < 5; i++ )
	{
		printf("%d ", pa[i]); // pa로 배열 요소 표현식 사용 
							  // -> ary[i], main 함수 블럭 내에서는 사용 가능하나, 이 함수 내에서는 '직접'' 사용 불가능
	} 
}
