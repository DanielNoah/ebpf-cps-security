#include <stdio.h>

int main(void)
{
	FILE *fp; 		// 파일 포인터
	int ch;

	fp = fopen("..\\eBPF-cps-Security\\ebpf\\test.txt", "r");	// a.txt 파일을 읽기 전용으로 개방
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");		// 안내메시지 출력
		return 1;							// 프로그램 종료
	}
	while (1)
	{
		ch = fgetc(fp); // 개방한 파일에서 문자 입력
		if (ch == EOF)	// 함수의 반환값이 EOF면 입력 종료
		{
			break;
		}
		putchar(ch);	// 입력한 문자를 화면에 출력
	}
	fclose(fp);			// 파일 닫음

	return 0;
}