#ifndef _HEADER_H_
#define _HEADER_H_

#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <string>
#include <map>

class Dictionary {
private:
	std::map<std::string, std::string> dictionary;
public:
	void insert(const std::string& word, const std::string& mean);
	bool exist(const std::string& word);
	int getInput(const char* prompt);
	std::string getString(const char* prompt);
	std::string putString(const std::string& word);
};

#endif // !_HEADER_H_
