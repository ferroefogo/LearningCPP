#include <iostream>
#include <string>
using namespace std;


int main() {
	string front;
	string back;
	string text =
		"Always laugh when you can. It\'s cheap medicine.";

	front.assign(text);
	cout << endl << "Front: " << front << endl;

	front.assign(text, 0, 27);	// Assign characters 0 throught to 27 to be stored in variable 'front'.
	cout << endl << "Front: " << front << endl;

	back.assign(text, 27, text.size());
	cout << endl << "Back: " << back << endl;

	back.swap(front);
	cout << endl << "Front" << front << endl;
	cout << endl << "Back: " << back << endl;

	return 0;
}