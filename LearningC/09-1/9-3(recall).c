#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total;  //변수 초기화 안함;;
	double avg;
	int *pa, *pb;
	int *pt = &total;  // 포인터 초기화 틀림; 일반변수(주소값)를 포인터 변수 *pt에 대입해야함.
	double *pg = &avg;

	pa = &a;
	pb = &b;

	total = *pa + *pb;
	avg = *pt / 2.0;  // 오른쪽 간접참조 연산자(*)를 사용해서 연산식 완성 | 나누기 할 때 2.0(double형)로 나누기

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", total);
	printf("두 정수의 평균 : %.1lf\n", avg); // .1 로 표기해야 소숫점 첫째자리까지 출력함.

	return 0;
}	