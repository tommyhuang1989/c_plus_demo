#include <iostream>
#include <cstring>
using namespace std;

struct Student {
	int id;
	char name[200];
	int school_id;
};

typedef struct {
	int id;
	char name[200];
} School;

void print_student_info(Student stu) {
	cout << "id is : " << stu.id << endl;
	cout << "name is : " << stu.name << endl;
}

int main() {
	Student stu1;
	Student stu2;

	stu1.id = 1001;
	strcpy(stu1.name, "tommy");

	stu2.id = 1002;
	strcpy(stu2.name, "tommy2");

	print_student_info(stu1);
	print_student_info(stu2);
}
