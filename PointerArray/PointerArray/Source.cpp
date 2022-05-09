#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstdlib>

int getInt();

int main() {

	int input = getInt();

	int* array = (int*)malloc(sizeof(int) * input);

	int count = 1;

	for (int i = 0; i < input; i++) {
		array[i] = count * 2;
		printf("array[%d]: %d\n", i, array[i]);
		count++;
	}

	return 0;
}


int getInt() {

	int input;

	printf("숫자 입력: ");
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}