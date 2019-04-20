#include <iostream>
using namespace std;

int main() {
	int a = 99;
	int* b;
	int** c;
	int*** d;

	b = &a;
	c = &b;
	d = &c;

	cout << "a is : " << a << endl;
	cout << "a address is : " << &a << endl;
	cout << "b is : " << b << endl;
	cout << "*b is : " << *b << endl;
	cout << "c is : " << c << endl;
	cout << "*c is : " << *c << endl;
	cout << "**c is : " << **c << endl;
	cout << "d is : " << d << endl;
	cout << "*d value is : " << *d << endl;
	cout << "**d value is : " << **d << endl;
	cout << "***d value is : " << ***d << endl;
}
