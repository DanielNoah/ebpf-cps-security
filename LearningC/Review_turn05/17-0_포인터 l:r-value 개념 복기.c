#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p;
	int** pa;

	p = &a;
	pa = &p;
	
/*	printf("%p\n", sizeof(p));
	pa = p + 2;

	printf("%p\n", sizeof(pa)); 8/



	return 0;
}