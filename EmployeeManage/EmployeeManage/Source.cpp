#include "Header.h"

int main() {

	Employee* employee[100];
	int count = 0;

	while (true) {
		cout << "명령을 입력하세요" << endl;
		cout << "1. 사원 보기" << endl;
		cout << "2. 사원 추가" << endl;
		cout << "3. 사원 삭제" << endl;
		cout << "4. 프로그램 종료" << endl;

		int input;
		cin >> input;

		if (input == 1) {
			for (int i = 0; i < count; i++) {
				employee[i]->printInfo();
			}
		}
		else if (input == 2) {
			char* name = getString("사원명 입력해주세요:");
			int gender = getInt("성별을 입력해 주세요(1. 남성, 2. 여성):");
			char* rank = getString("직급을 입력해주세요:");

			Employee* e = new Employee(name, gender, rank);

			delete[] name;
			delete[] rank;

			employee[count] = e;
			count++;
		}
		else if (input == 3) {
			int number = getInt("사원번호를 입력해주세요");
			int deleteIndex = -1;
			for (int i = 0; i < count; i++) {
				if (number == employee[i]->no) {
					delete employee[i];
					deleteIndex = i;
					break;
				}
			}
			if (deleteIndex >= 0) {
				for (int i = deleteIndex; i < count - 1; i++) {
					employee[i] = employee[i + 1];
				}
			}
			count--;

			cout << "삭제가 완료되었습니다" << endl;
		}
		else if (input == 4) {
			cout << "프로그램을 종료합니다" << endl;
			break;
		}
		else {
			cout << "올바르지 않은 입력입니다" << endl;
		}
	}
	return 0;
}

int getInt(const char* prompt) {
	int input;
	cout << prompt;
	cin >> input;

	return input;
}


char* getString(const char* prompt) {
	char* input = new char[100];
	cout << prompt;
	cin >> input;

	return input;
}