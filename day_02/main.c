#include <stdio.h>

int main(int argc, char *argv[])
{
	char **input = argv;
	int inputSize = argc;

	printf("%s", input[1]);
	// input[1] = 29x13x26
	// input[2] = 11x11x14
	return 0;
}
