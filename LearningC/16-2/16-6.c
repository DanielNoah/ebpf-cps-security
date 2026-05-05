#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i;

	while (*argv != NULL)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return 0;
}