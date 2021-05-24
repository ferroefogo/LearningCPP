#include <iostream>
#include <string>
using namespace std;

void computeFeatures(string);

int main() {
	string text = "C++ Fun";
	text.clear();
	computeFeatures(text);

	return 0;
}

void computeFeatures(string text) {
	cout << endl << "String: " << text << endl;
	cout << "Size: " << text.size() << endl;
	cout << "Capacity: " << text.capacity() << endl;
	cout << "Empty?: " << text.empty() << endl;

}