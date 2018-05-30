#include <iostream>
#include <string>
using namespace std;

class person {
	private:
		int id;
		string name;

	public:
		int get_id() {
			return this->id;
		}	

		void set_id(int id) {
			this->id = id;
		}
		
		string get_name() {
			return this->name;
		}	

		void set_name(string name) {
			this->name = name;
		}

		person operator + (const person &p) {
			person p1;
			p1.id = this->id + p.id;
			p1.name = this->name + p.name;
			return p1;
		}

		void show() {
			cout << "id is : " << this->id << endl;
			cout << "name is : " << this->name << endl;
		}
};

int main() {
	person p1, p2;
	p1.set_id(11);
	p1.set_name("tommy");
	p2.set_id(22);
	p2.set_name("huang");
	p1.show();
	p2.show();

	person p3 = p1 + p2;
    p3.show();
	return 0;
}
