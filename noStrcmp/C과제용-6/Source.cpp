#include "Header.h"


int main() {

	char str1[100];
	char str2[100];

	fseek(stdin, 0, SEEK_END);
	printf("ù ��° ���ڿ�: ");
	scanf("%99[^\n]s", str1);

	fseek(stdin, 0, SEEK_END);
	printf("�� ��° ���ڿ�: ");
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
		printf("�� ���ڿ��� �����ϴ�");
	}
	else {
		printf("�� ���ڿ��� �ٸ��ϴ�.");
	}


	return  0;

}