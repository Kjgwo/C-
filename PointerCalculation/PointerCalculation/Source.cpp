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

	printf("�Է� 1: ");
	*num1 = getInput();
	printf("�Է� 2: ");
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
	printf("������ �Է�: ");
	scanf("%c", &op);

	return op;
}