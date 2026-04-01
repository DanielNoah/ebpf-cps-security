#include <stdio.h>

void add_ten(int* pa);

int main()
{
	int a = 10;
//	int* resp;
	
	add_ten(&a);
//	resp = &a;
	printf("%d", a);

	return 0;
}

void add_ten(int* pa) // 다른 stack 영역 사용
{
	*pa = *pa + 10;

}