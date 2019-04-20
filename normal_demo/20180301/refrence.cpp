#include <iostream>
using namespace std;

int main() {
	int a = 100;
	int & b = a;
	cout << "a is :" << a << endl;
	cout << "a address is :" << &a << endl;
	cout << "b is :" << b << endl;
	cout << "b address is :" << &b << endl;
}
