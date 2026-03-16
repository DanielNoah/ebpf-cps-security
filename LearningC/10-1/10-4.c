#include <stdio.h>

int main(void)
{
	int ary[] = {10, 20, 30, 40, 50};
	int *pa = ary;
	int *pb = ary + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa); // 두 포인터의 뺄셈 -> 포인터 배열의 각 배열요소의 주소를 가리키므로 주소값의 차이(간격)가 출력될 것으로 예상

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa); // pa가 배열의 앞에 있으면 *pa 출력
	else printf("%d\n", *pb);		 // pb가 배열의 앞에 있으면 *pb 출력 
return 0;
}


