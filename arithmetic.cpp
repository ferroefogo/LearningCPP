#include <iostream>
using namespace std;

int main() {
	int a = 8, b = 4;
	
	cout << "Postfix Increment: " << a++ << endl;
	cout << "Postfix Result: " << a << endl;
	cout << "Prefix Increment: " << ++b << endl;
	cout << "Prefix Result: " << b << endl;

	return 0;
}