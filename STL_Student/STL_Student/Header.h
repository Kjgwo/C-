#ifndef _HEADER_H_
#define _HEADER_H_
#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <string>
#include <vector>

int getInput(const char* prompt);
std::string getString(const char* prompt);

class Student {
public:
	std::string name;
	int korean;
	int math;
	int english;

	Student(std::string name, int korean, int math, int english);

	void printInfo();
};

#endif // !_HEADER_H_
