#include <stdio.h>

int main(void)
{
	char *pary[5];
	int i;

	pary[0] = "s&p";
	pary[1] = "nasdaq";
	pary[2] = "dow";
	pary[3] = "kosdaq";
	pary[4] = "kospi";

	for (i=0; i<5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}
