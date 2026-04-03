#include <stdio.h>
/* 임베디드 프로그램의 제어흐름을 알려면 다양한 형태의 변수와 배열을 포인터로 다루는 능력이 필요 */ 
int main()
{
	int a = 10;
	int* p = &a;
	int** pp = &p;

	printf("변수		변숫값			&연산				*연산				**연산\n");
	printf("a\t\t%d\t\t\t\t%u\n",a, &a);
	printf("p\t\t%d\t\t%u\t\t%d\n",p, &p, *p);
	printf("pp\t\t%d\t\t%u\t\t%u\t\t%u",pp, &pp, *pp, **pp);

	return 0;
}