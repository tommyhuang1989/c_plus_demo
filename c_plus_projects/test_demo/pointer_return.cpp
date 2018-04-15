#include <iostream>
#include <cstring>
using namespace std;

char * msg = "welcome home ";
char* welcome_home(char* name);

int main() {
	char *name = "tommy";//NULL;
	//cout << "please input your name: " << endl;
	//cin >> name;
	char* message = welcome_home(name);
	cout << message << endl;
}

char* welcome_home(char* your_name) {
	cout << "your name is : " << your_name << endl;
	char * wel = "welcome home ";
	char * result = strcat(wel, your_name);
	cout << "result is : " << result << endl;
	return result;
}
