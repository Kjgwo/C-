#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>


int getInput();
char getOperation();

int main() {

	int input1;
	int input2;
	char op;
	int result;

	int* num1 = &input1;
	int* num2 = &input2;

	printf("입력 1: ");
	*num1 = getInput();
	printf("입력 2: ");
	*num2 = getInput();

	op = getOperation();

	switch (op) {
	case '+':
		result = input1 + input2;
		printf("%d", result);
		break;
	case '-':
		result = input1 - input2;
		printf("%d", result);
		break;
	case '*':
		result = input1 * input2;
		printf("%d", result);
		break;
	case '/':
		result = input1 / input2;
		printf("%d", result);
		break;
	default:
		break;
	}

	return 0;
}

int getInput() {

	int input;

	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);
	
	return input;
}

char getOperation() {
	
	char op;

	fseek(stdin, 0, SEEK_END);
	printf("연산자 입력: ");
	scanf("%c", &op);

	return op;
}