#include <stdio.h>

int main(void)
{
	int A[3] = { 1, 2, 3 }; // A[0] = 1, A[1] = 2, A[2] = 3
	int B[10]; // B[0~9] 총 10개의 배열 요소 가짐
	int i;

	for (i=0; i < 10; i++)
	{
		B[i] = A[i % 3]; // {A[0 % 3], A[1 % 3], A[2 % 3], A[3 % 3], A[4 % 3] ... } -> {1, 2, 3, 1, 2, 3, ...}
	}

	for (i=0; i < 10; i++)
	{
		printf("%5d\t", B[i]);	
	}
	return 0;
}