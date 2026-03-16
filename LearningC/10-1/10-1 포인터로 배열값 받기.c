#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10; // ary[0] = 10 "대입연산자 왼편은 변수만 올 수 있고, 오른편은 상수만 올 수 있다."
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10 "마찬가지로, 왼편은 *(ary + 1)은 변수이고, 오른편은 기존 변숫값 *(ary + 0)에 상수 10을 더한 상수다!"

	printf("세 번째 배열 요소에 키보드 입력 : "); // 아래 ary + 2 라는 세 번째 배열 요소에 해당하는 '변수'에 '상수'값 입력받음.
	scanf("%d", ary + 2 ); //  ary + 2 변수(배열 주소)에 해당 상수값 대입함.(일반 변수는 scanf에서 &를 앞에 붙여야함.)

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i)); // ary + 0 변수의 값부터 ary + 2 변수의 값을 간접참조 연산함.

	}

	return 0;
}