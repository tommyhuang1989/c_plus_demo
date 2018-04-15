#include <iostream>

using namespace std;

class person {
	private:
		int id;
		char name[];

	public:
		void print_info() {
			cout << "id is : \t" << this->id << endl;
			cout << "name is : \t" << this->name << endl;
			int c;
			cout << "id is : \t" << c << endl;
		}
};

int main() {
	person p;
	p.print_info();
	return 0;
}
