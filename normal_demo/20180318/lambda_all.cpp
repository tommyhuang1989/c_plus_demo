#include <iostream>
using namespace std;

int main() {
	int a = 10;
	//int b = 22;
	cout << "a is : " << a << endl;
	auto test = [&] {
		a ++;
		return a;
	};
	cout << "test is : " << test() << endl;
	cout << "a is : " << a << endl;
	return 0;
}
