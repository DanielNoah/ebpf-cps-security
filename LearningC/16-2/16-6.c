#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i;

	while (*argv != NULL)		// argv가 가리키는 배열 요소의 값이 널 포인터가 아닌동안
	{
		printf("%s\n", *argv);	// 문자열을 출력
		argv++;					// 포인터 배열의 다음 요소로 이동
	}

	return 0;
}