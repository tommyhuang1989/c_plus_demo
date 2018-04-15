#include <iostream>
using namespace std;

int main() {
	auto add = [](int a, int b) -> int {return a + b;};
	int result = add(11, 22);
	cout << "result is : " << result << endl;
	return 0;
}
