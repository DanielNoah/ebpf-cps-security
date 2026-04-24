#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str)); // 문자열을 저장할 배열명과 배열의 크기를 줌.
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char *str, int size)	// str은 char 배열, size는 배열의 크기
{
	int ch;							// getchar 함수 반환값을 저장할 변수(int형)
	int i = 0;			
	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';	// ** 아주 중요! 배열의 크기를 넘는 문자열을 입력한 경우도 배열의
					// 크기만큼만 입력하도록 작성해 할당되지 않은 메모리를 침범하지 않도록 작성함.

}