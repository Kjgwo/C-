#include "Header.h"


int main() {

	
	Dictionary* dict = new Dictionary();

	for (;;) {
		printf("1. 사전에 단어와 뜻 등록\n");
		printf("2. 단어 검색기\n"); 
		printf("3. 프로그램 종료\n");
		int input = dict->getInput("번호를 입력해주세요:");
		if (input == 1) {
			std::string word = dict->getString("단어를 입력해주세요:");
			std::string mean = dict->getString("뜻을 입력해주세요:");
			if (dict->exist(word)) {
				printf("중복된 단어 등록입니다,\n");
			}
			else {
				dict->insert(word, mean);
				printf("단어 등록 완료\n");
			}
		}
		else if (input == 2) {
			std::string search = dict->getString("단어를 입력해주세요:");
			if (dict->exist(search)) {
				printf("%s\n", dict->putString(search).c_str());
			}
			else {
				printf("해당하는 단어가 없습니다.\n");
			}
		}
		else if (input == 3) {
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("잘못된 입력입니다.\n");
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