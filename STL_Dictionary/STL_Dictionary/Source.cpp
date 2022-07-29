#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <string>
#include <algorithm>
#include <map>


int getInput(const char* prompt) {

	int input;
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}

std::string getString(const char* prompt) {
	printf(prompt);
	char str[100] = {0,};
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", str);
	
	return str;
}
int main() {

	std::map<std::string, std::string> dictionary;

	for (;;) {
		printf("1. ������ �ܾ�� �� ���\n");
		printf("2. �ܾ� �˻���\n"); 
		printf("3. ���α׷� ����\n");
		int input = getInput("��ȣ�� �Է����ּ���:");
		if (input == 1) {
			std::string word = getString("�ܾ �Է����ּ���:");
			std::string mean = getString("���� �Է����ּ���:");
			if (dictionary.count(word)) {
				printf("�ߺ��� �ܾ� ����Դϴ�,\n");
			}
			else {
				dictionary[word] = mean;
				printf("�ܾ� ��� �Ϸ�\n");
			}
		}
		else if (input == 2) {
			std::string search = getString("�ܾ �Է����ּ���:");
			if (dictionary.count(search)) {
				printf("%s\n", dictionary[search].c_str());
			}
			else {
				printf("�ش��ϴ� �ܾ �����ϴ�.\n");
			}
		}
		else if (input == 3) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else {
			printf("�߸��� �Է��Դϴ�.\n");
		}
	}

	return 0;
}