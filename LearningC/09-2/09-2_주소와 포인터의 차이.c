#include <stdio.h>

int main(void)
{
	int a, b;
	int *pa, *pb;
	pa = pb = &a;

	*pa = 10;

	printf("%d", *pb);

	&a = &b; // a의 주소를 b의 주소로 바꾸는 건 불가능
	return 0;
}
