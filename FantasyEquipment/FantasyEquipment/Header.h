#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

class Weapon {
public:

	int atk;
	int range;
	int price;

	char* name;

	Weapon(const char* name, int atk, int range, int price) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->atk = atk;
		this->range = range;
		this->price = price;
	}

	void printInfo() {
		cout << "���� �̸�: " << name << endl;
		cout << "���� ���ݷ�: " << atk << endl;
		cout << "���� ��Ÿ�: " << range << endl;
		cout << "���� ����: " << price << endl;
		cout << endl;
	}
};

class Shortsword : public Weapon {
public:
	Shortsword() : Weapon("�� �ҵ�", 10, 5, 500) {}
};


class Longsword : public Weapon {
public:
	Longsword() : Weapon("�� �ҵ�", 20, 10, 2000) {}

};

class Hammer : public Weapon {
public:
	Hammer() : Weapon("�ظ�", 30, 7, 3000) {}
};