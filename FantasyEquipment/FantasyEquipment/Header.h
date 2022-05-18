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
		cout << "무기 이름: " << name << endl;
		cout << "무기 공격력: " << atk << endl;
		cout << "무기 사거리: " << range << endl;
		cout << "무기 가격: " << price << endl;
		cout << endl;
	}
};

class Shortsword : public Weapon {
public:
	Shortsword() : Weapon("숏 소드", 10, 5, 500) {}
};


class Longsword : public Weapon {
public:
	Longsword() : Weapon("롱 소드", 20, 10, 2000) {}

};

class Hammer : public Weapon {
public:
	Hammer() : Weapon("해머", 30, 7, 3000) {}
};