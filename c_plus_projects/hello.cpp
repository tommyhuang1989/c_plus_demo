#include<iostream>
using namespace std;

int main() {
    cout << "hello world! welcome to c++,  tommy" << endl;

    int a = 20;
    int* p = &a;

    cout << "p is : " << p << endl;
    cout << "* p is : " << * p << endl;
    cout << "a is" << a << endl;
    cout << "&a is" << &a << endl;
}