#include <stdio.h>

int main(void)
{
	int a = 10, b = 25;
	const int *pa = &a;

	printf("변수 a값 : %d\n", *pa);
	pa = &b;
	printf("변수 b값 : %d\n", *pa);
	pa = &a;
	a = 20;
	*pa = 20;
	printf("변수 a값 : %d\n", *pa);

	return 0;
}
