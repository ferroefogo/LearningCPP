#include <iostream>
using namespace std;

int main() {
	int a = 1, b = 0;

	cout << "AND logic:" << endl;
	cout << "(a && b) " << (a && b) << "(true)";

	cout << "OR logic:" << endl;
	cout << "(a || b)" << (a || b) << "(true)";

	cout << "NOT logic:" << endl;
	cout << "a= " << a << " !a = " << !a << "  ";


	return 0;
}