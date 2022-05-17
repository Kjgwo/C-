#include "Header.h"

int main() {

	Employee* employee[100];
	int count = 0;

	while (true) {
		cout << "����� �Է��ϼ���" << endl;
		cout << "1. ��� ����" << endl;
		cout << "2. ��� �߰�" << endl;
		cout << "3. ��� ����" << endl;
		cout << "4. ���α׷� ����" << endl;

		int input;
		cin >> input;

		if (input == 1) {
			for (int i = 0; i < count; i++) {
				employee[i]->printInfo();
			}
		}
		else if (input == 2) {
			char* name = getString("����� �Է����ּ���:");
			int gender = getInt("������ �Է��� �ּ���(1. ����, 2. ����):");
			char* rank = getString("������ �Է����ּ���:");

			Employee* e = new Employee(name, gender, rank);

			delete[] name;
			delete[] rank;

			employee[count] = e;
			count++;
		}
		else if (input == 3) {
			int number = getInt("�����ȣ�� �Է����ּ���");
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

			cout << "������ �Ϸ�Ǿ����ϴ�" << endl;
		}
		else if (input == 4) {
			cout << "���α׷��� �����մϴ�" << endl;
			break;
		}
		else {
			cout << "�ùٸ��� ���� �Է��Դϴ�" << endl;
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