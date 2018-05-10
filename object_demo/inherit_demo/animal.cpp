#include <iostream>
#include <cstring>
using namespace std;

class animal {
	private:
		char name[200];
		int age;
		
	public:
		char* get_name() {
			return this->name;
		}

		void set_name(char * name) {
			strcpy(this->name, name);
		}

		int get_age() {
			return this->age;
		}

		void set_age() {
			this->age = age;
		}

		void eat() {
			cout << this->name << " is eating food." << endl;
		}
};


