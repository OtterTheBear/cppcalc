#include <iostream>
#include <cmath>
using namespace std;

int main() {
	string hyper;
	cout << "Welcome to cppcalc\n";
	cout << "We have many calcs for you";
	cout << "Hyperoperation or no? (y/n)\n";
	cin >> hyper;
	if (hyper == "y") {
		int pos;
		cout << "Positive or negative? (p/n)\n";
		cin >> pos;
		if (pos == "p") {
			cout << "Pick a degree";
		}
	}
}
