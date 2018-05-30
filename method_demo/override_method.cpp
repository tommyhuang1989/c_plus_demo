#include <iostream>
#include <string>
using namespace std;

void print(int a, int b) {
	cout << "a and b is : " << a << " " << b << endl;
}

void print(int a, int b, int c) {
	cout << "a and b and c is : " << a << " " << b << " " << c << endl;
}

void print(int a, string b) {
	cout << "a and b is : " << a << " " << b << endl;
}

void print(string a, int b) {
	cout << "a and b : " << a << " " << b << endl;
}

int main() {
	print(1, 2);
	print(22, 33, 44);

	print(55, "text");
	print("abc", 99);
	return 0;
}
