#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;

	// Good way to get input, if its NOT gonna have spaces.
	cout << "Please enter your full name: " << endl;
	cin >> name;
	cout << "Welcome " << name << endl;
	
	// Good way to get input, if its gonna have spaces.
	cout << "Please re-enter your full name: " << endl;
	cin.ignore(256, '\n');
	getline(cin, name);
	cout << "Welcome " << name << endl;
	return 0;
}