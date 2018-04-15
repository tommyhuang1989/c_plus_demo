#include <iostream>
using namespace std;

int max(int, int);

int main() {
	int num1 = 10;
	int num2 = 222;
	int max_num;

	max_num = max(num1, num2);
	cout << "max is : " << max_num << endl;

	return 0;
}

int max(int a, int b) {
	if (a > b) {
		return a;
	} 
	else {
		return b;
	}
}
