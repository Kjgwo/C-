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
		cout << no << "�� �����ȣ�� ��������� �����Ǿ����ϴ�" << endl;
	}

	void printInfo() {
		cout << "��� ��ȣ: " << no << "  /  ";
		cout << "��� �̸�: " << name << endl;
		if (gender == 1) {
			cout << "��� ����: ����" << "  /  ";
		}
		else {
			cout << "��� ����: ����" << "  /  ";
		}
		cout << "��� ����: " << rank << endl;
	}
};

int getInt(const char* prompt);
char* getString(const char* prompt);

