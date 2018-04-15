#include <iostream>
using namespace std;
int a = 100;
int b = 99;
int c = 88;
int add1(int);
int add2(int&);
int &add3(int);

int main() {
	add1(a);
	cout << "a is : " << a << endl;
	
	add2(b);
	cout << "b is : " << b << endl;
	
	//add3(c);
	//cout << "c is : " << c << endl;
	
	cout << "c address is : " << &c << endl;
	int &f = add3(c);
	cout << "f address is : " << &f << endl;
	f = f + 77;
	cout << "c is : " << c << endl;
}

int add1(int x) {
	x = x + 22;
	return x;
}

int add2(int &x) {
	x = x + 33;
	return x;
}

int & add3(int x) {
	cout << "x address is : " << &x << endl;
	x = x + 44;
	cout << "x address is : " << &x << endl;
	int & y = x;
	cout << "y address is : " << &y << endl;
	return y;
}
