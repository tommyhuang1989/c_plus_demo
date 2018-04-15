#include <iostream>
using namespace std;

int max(int *a, int *b);
char* test(char*, char*);

int main() {
	int num1 = 188;
	int num2 = 77;
	int array1[] = {11, 22};
	int array2[] = {33, 234, 22};
	
	char* a = "hello";
	char* b = "test";
	char c[] = {'h', 'i', '\0'};
	//int result = max(num1, num2);
	//int result = max(&num1, &num2);
	int result = max(array1, array2);
	cout << "in (" << num1 << "," << num2 << ") max is :" << result << endl;
	char* result2 = test(a, c);
	cout << "in (" << a << "," << c << ") test is :" << result2 << endl;
	a++;// 正确，默认是指向 h，++ 后指向 e
	//c++;// 错误，使用中括号定义的数组名是常量指针，不能进行算术运算
	cout << "a++" << " is : " << *a << endl;
	cout << "c++" << " is : " << *c << endl;
}

int max(int *a, int *b) {
	if (*a > *b) {
		return *a;
	}
	else {
		return *b;
	}
}

char* test(char* a, char* b) {
	if (*a > *b) {
		return a;
	}
	else {
		return b;
	}
}
