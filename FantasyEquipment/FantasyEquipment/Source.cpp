#include "Header.h"

int main() {

	srand(time(0));

	Weapon* weapon[10];


	for (int i = 0; i < 10; i++) {
		int n = rand() % 3;
		if (n == 0) {
			weapon[i] = new Shortsword();

		}
		else if (n == 1) {
			weapon[i] = new Longsword();
		}
		else if (n == 2) {
			weapon[i] = new Hammer();
		}
		else {
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		weapon[i]->printInfo();
	}


	return 0;
}