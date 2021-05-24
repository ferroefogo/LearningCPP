#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main() {
	string term = "100";
	int number = 100;

	int num;				// To store a converted string.
	string text;			// To store a converted integer
	stringstream stream;	// To perform conversions

	stream << term;			// Load the string into stringstream object
	stream >> num;			// Extract integer in stringstream object

	num /= 4;
	cout << "Integer value: " << num << endl;

	stream.str("");			// Empty the stringstream object contents
	stream.clear();			// Empty the bit flags.

	stream << number;		// Load the integer.
	stream >> text;			// Extract the string

	text += " Per Cent";
	cout << "String value: " << text << endl;
	return 0;
}