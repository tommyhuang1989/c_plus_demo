#include <iostream>
using namespace std;

enum days {
	day1,
	day2,
	day3
} ; // it is nessary

int main() {
	enum days d = day1; //此处的enum关键字可有可无，但建议有

	switch(d) {
		case day1: //后续要用的时候，直接写枚举中的值就可以了，不需要 类型名.枚举值
			cout << "today is monday" << endl;
			break;
		case day2:
			cout << "today is tuesday" << endl;
			break;
		case day3:
			cout << "today is wednesday" << endl;
			break;
	}
		
	return 0;
}
