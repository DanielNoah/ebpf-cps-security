#include <stdio.h>

int main(void)
{
	FILE *fp; 		// 파일 포인터 선언
	char str[] = "banana";	// 출력할 문자열
	int i;					// 반복 제어 변수

	fp = fopen("b.txt", "w");	// a.txt 파일을 쓰기 전용으로 개방
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");		// 안내메시지 출력
		return 1;							// 프로그램 종료
	}

	i = 0;
	while (str[i] != '\0')	// 문자 배열의 첫 번째 문자부터 출력
	{						// 널문자가 아니면
		fputc(str[i], fp);	// 문자를 파일에 출력
		i++;				// 다음 문자로 이동
	}
	fputc('\n', fp);	
	fclose(fp);				// 파일 닫음**

	return 0;
}