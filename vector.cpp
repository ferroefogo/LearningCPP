#include <iostream>
#include <vector>
using namespace std;

int pain() {
	vector <int> vec(3, 100);

	cout << "Vector Size: " << vec.size() << endl;
	cout << "Is empty?: " << vec.empty() << endl;

	vec.pop_back();	//Remove final element
	cout << "Final vector element value: " << vec.back() << endl;

	vec.clear();
	cout << "Vector Size: " << vec.size() << endl;
	cout << "Is Empty?: " << vec.empty() << endl;

	vec.push_back(60);
	cout << "Vector Size: " << vec.size() << endl;
	cout << "Vector First element: " << vec.front() << endl;
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
