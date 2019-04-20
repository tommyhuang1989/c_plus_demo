#include "stdio.h"
//#include <cstring>

int main() {
	char str1[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	//char str2[] = str1;
	char str2[] = {};
//	strcpy(str2, str1);
	printf("str1 is : %s str2 is : %s\n", str1, str2);
	return 0;
}
