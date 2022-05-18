#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Matrix3 {
public:
	float x11, x12, x13;
	float x21, x22, x23;
	float x31, x32, x33;

	Matrix3(float x11, float x12, float x13, float x21, float x22, float x23, float x31, float x32, float x33) {
		this->x11 = x11;
		this->x12 = x12;
		this->x13 = x13;
		this->x21 = x21;
		this->x22 = x22;
		this->x23 = x23;
		this->x31 = x31;
		this->x32 = x32;
		this->x33 = x33;
	}

	void printInfo() {
		cout.precision(2);
		cout << x11 << " "; cout << x12 << " "; cout << x13 << endl;
		cout << x21 << " "; cout << x22 << " "; cout << x23 << endl;
		cout << x31 << " "; cout << x32 << " "; cout << x33 << endl;
	}
};

Matrix3 operator+(Matrix3& v1, Matrix3& v2) {
	return Matrix3{
		v1.x11 + v2.x11, v1.x12 + v2.x12, v1.x13 + v2.x13,
		v1.x21 + v2.x21, v1.x22 + v2.x22, v1.x23 + v2.x23,
		v1.x31 + v2.x31, v1.x32 + v2.x32, v1.x33 + v2.x33
	};
}
