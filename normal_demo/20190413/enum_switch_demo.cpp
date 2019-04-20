#include <iostream>
using namespace std;

enum Week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saterday,
    Sunday
};

int check_num(int day_num) {
    if (day_num >=0 && day_num <=6) {
        return day_num;
    }
    else {
        cout << "the day your input is invalid, so show the default day, Monday" << endl;
        return 0;
    }
}

int main() {
    enum Week day;
    int day_num;
    cout << "please input the day : " << endl;
    cin >> day_num;

    day = (Week)check_num(day_num);    
    switch (day)
    {
        case Monday:
            cout << "today is monday" << endl;
            break;
            
        case Tuesday:
            cout << "today is tuesday" << endl;
            break;
            
        case Wednesday:
            cout << "today is wednesday" << endl;
            break;
            
        case Thursday:
            cout << "today is thursday" << endl;
            break;
            
        case Friday:
            cout << "today is monday" << endl;
            break;
            
        case Saterday:
            cout << "today is saterday" << endl;
            break;
            
        case Sunday:
            cout << "today is sunday" << endl;
            break;
        
        default:
            break;
    }
}