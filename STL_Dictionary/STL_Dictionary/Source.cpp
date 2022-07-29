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
		printf("1. 사전에 단어와 뜻 등록\n");
		printf("2. 단어 검색기\n"); 
		printf("3. 프로그램 종료\n");
		int input = getInput("번호를 입력해주세요:");
		if (input == 1) {
			std::string word = getString("단어를 입력해주세요:");
			std::string mean = getString("뜻을 입력해주세요:");
			if (dictionary.count(word)) {
				printf("중복된 단어 등록입니다,\n");
			}
			else {
				dictionary[word] = mean;
				printf("단어 등록 완료\n");
			}
		}
		else if (input == 2) {
			std::string search = getString("단어를 입력해주세요:");
			if (dictionary.count(search)) {
				printf("%s\n", dictionary[search].c_str());
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