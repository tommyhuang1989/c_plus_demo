#include <iostream>
using namespace std;

int add(int a, int = 100);

int main() {
	int result = add(22, 33);
	cout << "result is : " << result << endl;
	result = add(22);
	cout << "result is : " << result << endl;
}

int add(int a, int b) {
	return a + b;	
}
