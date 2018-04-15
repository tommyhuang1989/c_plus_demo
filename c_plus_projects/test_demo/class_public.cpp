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

int main() {
	Person p;
	cout << "a of Person is : " << p.a << endl;
	cout << "b of Person is : " << p.b << endl;
	cout << "c of Person is : " << p.c << endl;
	
	return 0;
}
