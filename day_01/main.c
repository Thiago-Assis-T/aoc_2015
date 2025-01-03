#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	printf("%s", argv[1]);

	char *token = strtok(argv[1], "");

	printf("%s", token);

	return 0;
}
