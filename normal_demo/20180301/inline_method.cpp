#include <iostream>
using namespace std;

class Person {
	public:
		void print() ;		
		void print2() ;		
};

void Person::print() {
	cout << "the first method." << endl;
}

void Person::print2() {
	cout << "the second method." << endl;
}

int main() {
	Person p;
	p.print();
	p.print2();
}
