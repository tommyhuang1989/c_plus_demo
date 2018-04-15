#include <iostream>
using namespace std;

int main() {
	int array[6] = {22, 13, 34, 36, 77, 190};
	auto a = [&]{return array[0];};
	cout << "a is : " << a() << endl;	
	return 0;
}
