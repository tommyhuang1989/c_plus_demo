#include <iostream>
using namespace std;

void print(char message[]);

void test(char message[], void (*p)(char message[]));

int main() {
	char msg[] = "hello guys";	
	void(*p)(char message[]) = &print;
	test(msg, p);
}

void print(char message[]) {
	cout << "msg is : " << message << endl;
}

void test(char message[], void (*p)(char message[])) {
	p(message);
}
