#define _CRT _SECURE_NO_WARNINGS // strcpy 함수 사용한 코드가 컴파일 되지 않을 때

#include <stdio.h>
#include <string.h>

int  main(void)
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);


	return 0;
}