#include <stdio.h>
#define SIZE 10

int main() {

	for (int i = 0; i < SIZE; i++) {
		for (int j = SIZE - i; j >= 0; j--)
			printf(" ");
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}