#include <cstdio>

int sum(int a, int b);
void getInt();
int number;

int main() {

	int value = -512;

	printf("%d�Դϴ�\n", value);

	printf("%d\n", sum(10, 20));

	getInt();
	printf("�Է°�: %d\n", number);
	return 0;
}

int sum(int a, int b) {
	return a + b;
}

void getInt() {

	fseek(stdin, 0, SEEK_END);
	printf("�Է�: ");
	scanf_s("%d", &number);
}