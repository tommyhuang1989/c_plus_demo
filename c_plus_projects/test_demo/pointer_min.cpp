#include <iostream>
using namespace std;
   
int main() {
    int a[5] = {11, 24, 33, 87, 66};
    int *b = &a[5-1];
 
    for (int i = 5; i > 0; i--) {
        cout << "[" << (i-1) << "] value is : " << *b << endl;
        b--;
    }
}
