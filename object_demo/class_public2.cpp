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

class tommy : worker {
	
};

class ryan : private worker {

};

int main() {
	//worker w;
	//char* name = "tommy";
	//worker w2(16000, 29, name);
	//w2.print_info();
	
	tommy t;
	//t.age = 29;
	//t.price = 16000;
	//strpy(t.name, "tommy");
	//t.print_info();

	ryan r;
	//r.age = 23;
	//r.price = 6000;
	//strpy(r.name, "ryan");
	r.print_info();
	return 0;
}


