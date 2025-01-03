#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int close = 0;
	int open = 0;
	int len = strlen(argv[1]);
	char *input = argv[1];
	int i;
	int enterBasement = 0;
	int firstBasement = 0;
	for (i = 0; i != len; ++i) {
		int currentFloor = open - close;
		//printf("%c \n", input[i]);
		if (input[i] == '(') {
			open++;
		} else if (input[i] == ')') {
			close++;
		};
		if (currentFloor < 0 && enterBasement == 0) {
			enterBasement = 1;
			firstBasement = i;
		};
	};

	int finalFloor = open - close;

	printf("Final floor: %d \n", finalFloor);
	if (enterBasement != 0) {
		printf("First Basement: %d \n", firstBasement);
	};

	return 0;
}
