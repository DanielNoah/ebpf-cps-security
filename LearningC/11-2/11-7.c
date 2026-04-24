#include <stdio.h>

int main(void)
{
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);			// 학번 입력
	getchar();					// ** 버퍼에 있는 개행문자 제거
	printf("학접 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}