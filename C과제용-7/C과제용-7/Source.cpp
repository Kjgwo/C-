#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>



int main() {

	char str1[100];
	
	printf("문자열 입력(영문자): ");
	fseek(stdin, 0, SEEK_END);
	scanf("%s", str1);
	
	int count = 0;
	for (int i = 0; ; i++) {
		if (str1[i] == '\0') break;
		count++;
	}

	for (int i = count; i >= 0; i--) {
		printf("%c", str1[i]);
	}
	printf("\n");

	return 0;
}

