#include <iostream>
using namespace std;

int main() {
	int a[5] = {11, 24, 33, 87, 66};
	int *b = a;

	for (int i = 0; i < 5; i++) {
		cout << "[" << i << "] value is : " << *b << endl;
		b++;
	}
}
