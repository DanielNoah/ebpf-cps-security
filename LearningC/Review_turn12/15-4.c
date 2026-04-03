#include <stdio.h>
/* 주소로 쓰이는 배열명과 배열의 주소 비교 */ 

int main()
{
	int ary[5];

	printf(" ary의 값 : %p\t", ary);		// 주소로서의 배열명의 값
	printf(" ary의 주소 : %p\n", &ary);	// 배열의 주소
	printf(" ary + 1 : %p\t", ary + 1);		// 주소로서의 배열명의 값
	printf(" &ary + 1 : %p\n", &ary + 1);


	return 0;
}	