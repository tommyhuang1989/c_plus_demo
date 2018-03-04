#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[50];
    int sex;
    int age;
} ;

void print_info(Student stu) {
    cout << "==============" << endl;
    cout << "id is\t" << stu.id << endl;
    cout << "name is\t" << stu.name << endl;

    if (stu.sex == 0) {
        cout << "sex is\t" << "girl" << endl;
    } else {
        cout << "sex is\t" << "boy" << endl;
    }
    cout << "age is\t" << stu.age << endl;
}

void print_message(Student *stu) {
    cout << "==============" << endl;
    cout << "id is\t" << stu->id << endl;
    cout << "name is\t" << stu->name << endl;

    if (stu->sex == 0) {
        cout << "sex is\t" << "girl" << endl;
    } else {
        cout << "sex is\t" << "boy" << endl;
    }
    cout << "age is\t" << stu->age << endl;
}

int main() {
    Student stu1;
    Student stu2;

    stu1.id = 10001;
    strcpy(stu1.name, "tommy");
    stu1.sex = 1;
    stu1.age = 28;

    stu2.id = 10002;
    strcpy(stu2.name, "baby");
    stu2.sex = 0;
    stu2.age = 22;

    //print_info(stu1);
    //print_info(stu2);
    
    print_message(&stu1);
    print_message(&stu2);
}