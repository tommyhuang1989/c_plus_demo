#include <iostream>
using namespace std;

int main() {
	int a = 100;
	char b[] = "hello";
	double e = 99.99;
    
	int * c = &a;
    char * d = b;

	cout << "the address of c is : " << c << endl;
	cout << "the address of d is : " << d << endl;
	
	//c = &e;
	//cout << "the address of c is : " << c << endl;
	//cout << "the value of c is : " << &c << endl;
}
