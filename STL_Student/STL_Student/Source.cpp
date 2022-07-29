#include "Header.h"


int main() {

	std::vector<Student> student;
	// ���� ������ ���
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
		std::string name = getString("�̸�: ");
		int korean = getInput("����: ");
		int math = getInput("����: ");
		int english = getInput("����: ");

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
	printf("�̸�: %s, ����: %d, ����: %d, ����: %d\n", name.c_str(), korean, math, english);
}