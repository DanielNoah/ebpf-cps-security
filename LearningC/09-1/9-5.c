#include <stdio.h>

int main(void)
{
	int a;
	int *pa, *pb;
	pa = pb = &a;
	
	printf("포인터 pa의 값 : %d\n", *pa);

	return 0;
}
