#include <stdio.h>

int main(void)
{
	int ary[3];		// 배열 선언
	int i;

	*(ary + 0) = 10;	// ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10;	// ary[1] = ary[0] + 10

	printf("\n배열의 전체 크기 : %lu byte\n\n", sizeof(ary));

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);		// &ary[2] -> ary[2]가 세 번째 배열 요소이므로 &(주소 연산자 | 배열이 할당된 메모리의 위치를 확인)를 사용해 입력 
								// 배열의 대괄호([])는 포인터 연산의 '간접 참조, 괄호, 더하기' 연산 기능을 가짐.
	
	for (i=0; i < 3; i++)		// 모든 배열 요소 출력
	{
		printf("%5d", *(ary + i));	// ary[i]
	}

	return 0;

}