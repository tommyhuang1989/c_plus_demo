#include <iostream>
using namespace std;

//enum 类型的值，其实就是整型
enum color {
    Red,     // 0
    Yellow,  // 1
    Blue,    // 2
    Black,   // 3
};

int main() {
    enum color color1, color2;// 建议加上关键字 enum
    // 正确
    color1 = Red;
    color2 = Yellow;
    // 错误
    // color1 = color.Blue;// C++中可以直接将枚举值赋值给枚举变量，而不能通过“枚举类型.枚举值”来赋值，因为 C++ 中的枚举类型不是类，同时枚举值实际就是整型类型

    cout << "color1 is : " << color1 << endl;
    cout << "color2 is : " << color2 << endl;
}