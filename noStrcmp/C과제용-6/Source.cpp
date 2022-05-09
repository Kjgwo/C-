#include "Header.h"


int main() {

	char str1[100];
	char str2[100];

	fseek(stdin, 0, SEEK_END);
	printf("첫 번째 문자열: ");
	scanf("%99[^\n]s", str1);

	fseek(stdin, 0, SEEK_END);
	printf("두 번째 문자열: ");
	scanf("%99[^\n]s", str2);

	bool same = true;

	for (int i = 0; ; i++) {

		if (str1[i] == '\0') {
			if (str2[i] == '\0') {
				break;
			}
			else {
				same = false;
			}
		}
		if (str1[i] != str2[i]) {
			same = false;
		}
	}
	if (same == true) {
		printf("두 문자열은 같습니다");
	}
	else {
		printf("두 문자열은 다릅니다.");
	}


	return  0;

}