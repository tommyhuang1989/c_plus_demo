#include <iostream>
using namespace std;

void print_array();

int main() {
	print_array();
}

void print_array() {
	int a[5] = {22, 11, 45, 38, 98};
	int *b[5];

	for (int i = 0; i < (sizeof(a)/sizeof(int)); i++) {
		b[i] = &a[i];
		cout << "b[" << i << "] address is : " << b[i] << endl;
		cout << "b[" << i << "] is : " << *b[i] << endl;
	}
}
