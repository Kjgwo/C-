#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;


int number_counter = 1;


class Employee {
public:
	int no;
	char* name;
	int gender;
	char* rank;

	Employee(char* name, int gender, char* rank) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->gender = gender;
		this->rank = new char[strlen(rank) + 1];
		strcpy(this->rank, rank);
		this->no = number_counter;
		number_counter++;
	}

	~Employee() {
		delete[] name;
		delete[] rank;
		cout << no << "의 사원번호를 가진사람이 삭제되었습니다" << endl;
	}

	void printInfo() {
		cout << "사원 번호: " << no << "  /  ";
		cout << "사원 이름: " << name << endl;
		if (gender == 1) {
			cout << "사원 성별: 남자" << "  /  ";
		}
		else {
			cout << "사원 성별: 여자" << "  /  ";
		}
		cout << "사원 직급: " << rank << endl;
	}
};

int getInt(const char* prompt);
char* getString(const char* prompt);

