#include <iostream>
using namespace std;

void func(void);

static int flag = 10;

int main() {
	while(flag--) {
		func();
	}
	return 0;
}

void func(void) {
	static int i = 5;
	i++;
	cout << "i is : " << i;
	cout << "flag is : " << flag << endl;
}
