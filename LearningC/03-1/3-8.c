#include <stdio.h>

int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12; //const는 선언과 동시에 초기화 필수

// const(ant) 상수의 사용 목적 | 변수가 상수처럼 쓰이지만, 복잡한 값에 의미있는
//이름을 붙여 쓸 수 있고 값이 바꾸지 않음을 보장받을 수 있음.
/* 컴파일 에러 
	const double tax_rate;
	tax_rate = 0.12
*/
	income = 756;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}