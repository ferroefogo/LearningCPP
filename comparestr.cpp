#include <iostream>
#include <string>
using namespace std;

int main() {
	string lang = "C++";
	string term = " Programming";
	string text = "C++ Programming";
	
	cout << "Concatenated: " << (lang + term) << endl;
	cout << "Original: " << lang << endl;

	cout << "Appended: " << lang.append(term) << endl;
	cout << "Original: " << lang << endl;

	cout << "Match: " << (lang == term) << endl;
	cout << "Differ: " << (lang == text) << endl;

	cout << "Match: " << lang.compare(text) << endl;
	cout << "Differ: " << lang.compare(term) << endl;
	cout << "Lower ASCII: " << lang.compare("zzzzz") << endl;
	return 0;
}
