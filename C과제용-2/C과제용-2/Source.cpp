#include <cstdio>
#include <cmath>

int getInput();
int getOperation();


int main() {

	printf("Input1값 입력: ");
	int input1 = getInput();
	printf("Input2값 입력: ");
	int input2 = getInput();
	printf("Operation값 입력: ");
	int operation = getOperation();

	if (operation == 0) {
		printf("%d", input1 + input2);
	}
	else if (operation == 1) {
		printf("%d", input1 - input2);
	}
	else if (operation == 2) {
		int result = pow(input1, input2);
		printf("%d", result);
	}
	else {
		printf("잘못 입력");
	}

	return 0;
}

int getInput() {

	int input;
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &input);

	return input;
}

int getOperation() {

	int op;
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &op);

	return op;
}