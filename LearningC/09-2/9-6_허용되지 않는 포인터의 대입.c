#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p = &a;
	double *pd;

	pd = (double *)p; // 포인터 p의 값을 포인터 pd에 대입 (o) -> 문제는 포인터 p(int형)와 포인터 pd(double형)의 자료형이 다름. => 형변환(포인터 p를 double 형으로 변환) 을 사용한 포인터의 대입은 사용가능!
	printf("%lf\n", *pd); // 포인터 pd가 가리키는 값 출력 -> 알 수 없는 값 출력()

	return 0;
}
