#include <iostream>
#include <cstring>
using namespace std;

class Student {
	private:
		int id;
		string name;
		int set;
		int age;
		
	public:
		string school_name;
};

int main() {
	//Student stu1 = new Student();
	Student stu1;
	//stu1.id = 22;
	stu1.school_name = "hallword";
    //cout << stu1.id << endl;
	cout << stu1.school_name << endl;

	return 0;
}
