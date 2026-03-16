#include <stdio.h>
#include <string.h> // gets(), puts() 함수 사용 라이브러리
#include <ctype.h> // isupper(), tolower() 함수 사용 라이브러리
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[100];
	int i = 0; // for 반복문 제어 변수
	int cnt = 0; // 카운터(횟수) 집계 변수

	printf("문장 입력 : "); // <- printf("문장 입력 : %s\n", str);
	gets(str); // <- scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) // 배열의 널문자까지만 반복순회-> get(), put() 함수는 중간에 널문자(\0)에서 끊기지 않고, 끝까지 순회 가능!
	{
		if (isupper(str[i])) // 대문자 여부 확인 함수 사용(isUpper) 
		{
			str[i] = tolower(str[i]); // 소문자 변형 함수 사용 tolower
			cnt ++;		
		}
	}
	printf("바뀐 문장 : ");
	puts(str); // <- printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", cnt);

	return 0;

}