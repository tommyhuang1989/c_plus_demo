#include <iostream>
#include <cstring>
using namespace std;

class Student {
	private:
		int id;
		string name;
		int sex;
		int age;
		
	public:
		string school_name;

		 void set_id(int id) {
			this->id = id;
		}

		void set_name(string name) {
			this->name = name;
		}

		void set_age(int age) {
			this->age = age;
		}

		void set_sex(int sex) {
			this->sex = sex;
		}
		
		int get_id() {
			return this->id;
		}

		string get_name() {
			return this->name;
		}

		int get_sex() {
			return this->sex;
		}

		int get_age() {
			return this->age;
		}



};

 void print_info(Student stu) {
	cout << "The Student info is : " << endl;
	cout << "id is : " << stu.get_id() << endl;
	cout << "name is : " << stu.get_name() << endl;
	cout << "sex is : " << stu.get_sex() << endl;
	cout << "age is : " << stu.get_age() << endl;
}

int main() {
	//Student stu1 = new Student();
	Student stu1;
	//stu1.id = 22;
	//stu1.school_name = "hallword";
    //cout << stu1.id << endl;
	//cout << stu1.school_name << endl;

	stu1.set_id(1001);
	stu1.set_name("tommy boy");
	stu1.set_sex(1);
	stu1.set_age(21);
	print_info(stu1);
	
	return 0;
}
