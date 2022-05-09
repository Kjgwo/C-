#include "Header.h"

int getInput();
char getOperation();

int main() {

	printf("Input1 입력: ");
	int input1 = getInput();
	printf("Input2 입력: ");
	int input2 = getInput();
	printf("Operation 입력: ");
	int operation = getOperation();
	int random = 0;

	switch (operation) {
	case '+':
		printf("%d", input1 + input2);
		break;
	case '-':
		printf("%d", input1 - input2);
		break;
	case '*':
		printf("%d", input1 * input2);
		break;
	case '/':
		printf("%d", input1 / input2);
		break;
	case '%':
		printf("%d", input1 % input2);
		break;
	case 'p':
		printf("%d", pow(input1, input2));
		break;
	case 'x':
		exit(0);
		break;
	case 'r':
		srand(time(NULL));
		random = rand() % 6;
		if (random == 0) {
			printf("%d", input1 + input2);
		}
		else if (random == 1) {
			printf("%d", input1 - input2);
		}
		else if (random == 2) {
			printf("%d", input1 * input2);
		}
		else if (random == 3) {
			printf("%d", input1 / input2);
		}
		else if (random == 4) {
			printf("%d", input1 % input2);
		}
		else if (random == 5) {
			printf("%d", pow(input1, input2));
		}
		break;
	default:
		printf("잘못 입력");
		break;

	}


	return 0;
}

int getInput() {

	int input;

	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	return input;
}

char getOperation() {

	char operation;

	fseek(stdin, 0, SEEK_END);
	scanf_s("%c", &operation);

	return operation;
}