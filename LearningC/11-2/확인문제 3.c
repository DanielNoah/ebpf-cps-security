#include <stdio.h>

int main(void)
{
	int ch, cnt = 0;
	ch = getchar();

	while (ch != '\n')
	{
		if (ch <= 129 &&  ch >= 97) cnt++;
			ch = getchar();
	}

	printf("소문자의 개수 : %d", cnt);

	return 0;
}
