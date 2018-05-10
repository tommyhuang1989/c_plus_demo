#include <iostream>
#include <cstring>
using namespace std;

class worker {
	private:
		int price;
		
	protected:
		int age;

	public:
		char* name;
		void print_info() {
			cout << "name is : " << this->name << endl;
			cout << "age is : " << this->age << endl;
			cout << "price is : " << this->price << endl;
		}

		worker() {

		}

		worker(int p, int a, char* n) : price(p), age(a), name(n) {
			print_info();
		}
};

int main() {
	worker w;
	char* name = "tommy";
	worker w2(16000, 29, name);
	//w2.print_info();
	return 0;
}


