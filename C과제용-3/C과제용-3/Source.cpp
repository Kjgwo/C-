#include <cstdio>


int getInput();

int main() {

	int input = getInput();

	for (int i = 0; i < input; i++) {
		for (int k = 0; k < input - i - 1; k++) {
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int getInput() {

	int input;

	printf("ют╥б: ");
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	return input;
}