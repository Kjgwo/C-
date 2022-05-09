#include <cstdio>

int main() {

	int n1[5][5];
	int n2[5][5];
	int n3[5][5];

	int count = 1;
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			n1[i][k] = count;
			printf("%d ", n1[i][k]);
			count++;
		}
	}
	count = 1;
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			n2[i][k] = count * 2;
			printf("%d ", n2[i][k]);
			count++;
		}
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			n3[i][k] = n1[i][k] + n2[i][k];
			printf("%d ", n3[i][k]);
		}
	}
	return 0;
}