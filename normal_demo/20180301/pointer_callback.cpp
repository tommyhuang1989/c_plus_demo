#include <iostream>
#include <string>
using namespace std;

string set_msg(string name);
void print_info(string abc, string (*p)(string));

int main() {
	string (*welcome)(string name) = set_msg;
	string (*home)(string name) = & set_msg;

    print_info("tommy", welcome);
    print_info("ryan", home);
}

string set_msg(string name) {
	return "hello, welcome home : " + name; 
}

void print_info(string abc, string (*p)(string)) {
	string result = p(abc);
	cout << result << endl;
}

