#include "Header.h"

int main() {


	Matrix3 m1 = Matrix3(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matrix3 m2 = Matrix3(10, 11, 12, 13, 14, 15, 16, 17, 18);

	Matrix3 result = m1 + m2;

	result.printInfo();

	return 0;

}