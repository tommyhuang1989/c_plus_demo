#include <iostream>
using namespace std;

int b = 11;
void func();
void func2();
int main() {
	int a;
	cout << "a is : " << a << endl;
	func();
	func2();
}

void func() {
	int c;
	cout << "c is : " << c << endl;
}

void func2() {
	int c;
	cout << "c is : " << c << endl;
}
