#include <iostream>
using namespace std;

class person {
	public:
		int a;
		int b;

	public:
		person() {

		}

		//person(const person &obj) {
		//	this->a = obj.a;
		//	this->b = obj.b;
		//}

		void show() {
			cout << "a is : " << this->a << endl;
			cout << "b is : " << this->b << endl;
		}
};

int main() {
	person p1, p2;
    p1.a = 22;
	p1.b = 23;
	p1.show();

	p2.show();
    p2 = p1;
	p2.show();

	return 0;
}
