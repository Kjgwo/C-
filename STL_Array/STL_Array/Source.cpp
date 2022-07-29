#include <cstdio>
#include <string>
#include <array>

template <typename T>
class MyArray {
private:
	int count = 0;
public:
	T* myArray;

	MyArray() {
		this->myArray = new T[8];
	}

	virtual ~MyArray() {
		delete[] myArray;
	}

	void putValue(T value) {
		myArray[count] = value;
		count++;
	}

	int getCount() {
		return count;
	}

	T getValue(int index) {
		return myArray[index];
	}
	bool contains(T value) {
		for (int i = 0; i < count; i++) {
			if (myArray[i] == value)return true;
		}
		return false;
	}

	void replace(int index, T value) {
		if (index < count) {
			myArray[index] = value;
		}
	}

	void erase(int index) {
		for (int i = index; i< count-1; i++) {
			myArray[i] = myArray[i + 1];
		}
		count--;
	}


};
int main() {

	MyArray<int> m = MyArray<int>();

	m.putValue(10);
	m.putValue(20);

	if (m.contains(11)) {
		printf("true");
	}
	else {
		printf("false");
	}
	for (int i = 0; i < m.getCount(); i++) {
		printf("%d\n", m.getValue(i));
	}

	return 0;
}