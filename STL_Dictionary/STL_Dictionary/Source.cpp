#include "Header.h"


int main() {

	
	Dictionary* dict = new Dictionary();

	for (;;) {
		printf("1. ������ �ܾ�� �� ���\n");
		printf("2. �ܾ� �˻���\n"); 
		printf("3. ���α׷� ����\n");
		int input = dict->getInput("��ȣ�� �Է����ּ���:");
		if (input == 1) {
			std::string word = dict->getString("�ܾ �Է����ּ���:");
			std::string mean = dict->getString("���� �Է����ּ���:");
			if (dict->exist(word)) {
				printf("�ߺ��� �ܾ� ����Դϴ�,\n");
			}
			else {
				dict->insert(word, mean);
				printf("�ܾ� ��� �Ϸ�\n");
			}
		}
		else if (input == 2) {
			std::string search = dict->getString("�ܾ �Է����ּ���:");
			if (dict->exist(search)) {
				printf("%s\n", dict->putString(search).c_str());
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

void Dictionary::insert(const std::string& word, const std::string& mean) {
	dictionary[word] = mean;
}

int Dictionary::getInput(const char* prompt) {

	int input;
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}

std::string Dictionary::getString(const char* prompt) {
	printf(prompt);
	char str[100] = { 0, };
	fseek(stdin, 0, SEEK_END);
	scanf("%99[^\n]s", str);

	return str;
}

bool Dictionary::exist(const std::string& word) {
	return dictionary.count(word) == 1;
}

std::string Dictionary::putString(const std::string& word) {
	return dictionary[word];
}