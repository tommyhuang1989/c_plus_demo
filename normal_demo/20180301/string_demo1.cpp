#include <iostream>

using namespace std;

int main() {
	char str1[] = {'t', 'e', 's', 't'};
	for (int i = 0; i < (sizeof(str1) / sizeof(char)); i++) {
		cout << "str[" << i << "] is : " << str1[i] << endl;
	}
	cout << "the string is : " << str1 << endl;
	cout << "size of str1 : " << sizeof(str1) / sizeof(char) << endl;
	return 0;
}
