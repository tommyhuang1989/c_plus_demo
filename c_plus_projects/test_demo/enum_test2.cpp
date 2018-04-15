#include<iostream>
#include<file_type.cpp>
using namespace std;

int main() {
	enum file_type type = http;

	switch(type) {
		case http:
			cout << "it is http file" << endl;
			break;
		case ftp:
			cout << "it is ftp file" << endl;
			break;
	}
}
