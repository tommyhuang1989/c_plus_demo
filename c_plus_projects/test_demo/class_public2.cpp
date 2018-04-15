#include <iostream>
using namespace std;

class Person {
	private:
		int a;

	protected:
		int b;

	public:
		int c;
};

class Student : Person {
	public:
		//cause a is private from Parent, so it can not be accessed.
		void print_a() {
		//	cout << "a is : " << this->a;
		}
		
		//child can access parent's protected fields.
		void print_b() {
			cout << "b is : " << this->b;
		}

		void print_c() {
			cout << "c is : " << this->c;
		}
};

int main() {
	Student s;
	//s.print_a();
	s.print_b();
	s.print_c();	
	return 0;
}
