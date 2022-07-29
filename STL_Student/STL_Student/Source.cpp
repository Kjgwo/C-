#include "Header.h"


int main() {

	std::vector<Student> student;
	// 파일 생성후 사용
	/*FILE* infile = fopen("student.txt", "r");
	while (true) {
		if (feof(infile) == 1) break;
		char name[100];
		int korean;
		int math;
		int english;
		int result;
		result = fscanf(infile, "%s", name);
		if (result == 1) break;
		fgetc(infile);
		result = fscanf(infile, "%d, %d, %d\n", &korean, &math, &english);
		if (result == 1) break;
		fgetc(infile);

		Student s = Student(name, korean, math, english);
		student.push_back(s);
	}
	fclose(infile);*/

	while (true) {
		for (int i = 0; i < student.size(); i++) {
			student[i].printInfo();
		}
		std::string name = getString("이름: ");
		int korean = getInput("국어: ");
		int math = getInput("수학: ");
		int english = getInput("영어: ");

		Student s = Student(name, korean, math, english);
		student.push_back(s);
		
		FILE* outfile = fopen("student.txt", "w");
		for (int i = 0; i < student.size(); i++) {
			fprintf(outfile, "%s\n", student[i].name.c_str());
			fprintf(outfile, "%d, %d, %d\n", student[i].korean, student[i].math, student[i].english);
		}
		fclose(outfile);
	}

	return 0;
}

int getInput(const char* prompt) {
	int input;
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%d", &input);

	return input;
}

std::string getString(const char* prompt) {
	char name[10];
	printf(prompt);
	fseek(stdin, 0, SEEK_END);
	scanf("%9[^\n]s", name);

	return name;
}

Student::Student(std::string name, int korean, int math, int english) {
	this->name = name;
	this->korean = korean;
	this->math = math;
	this->english = english;
}

void Student::printInfo() {
	printf("이름: %s, 국어: %d, 수학: %d, 영어: %d\n", name.c_str(), korean, math, english);
}