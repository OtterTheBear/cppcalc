#include <iostream>
#include <cmath>
#include "hyperops.cpp"
using namespace std;

int main() {
    long long int xlong;
    long double xdouble;
    long long int ylong;
    long double ydouble;
    string hyper;
    cout << "Welcome to cppcalc\n";
    cout << "We have many calcs for you\n";
    cout << "Hyperoperation or no? (y/n)\n";
    cin >> hyper;
    if (hyper == "y") {
        string pos;
        cout << "Positive or negative? (p/n)\n";
        cin >> pos;
        if (pos == "p") {
            cout << "Pick a degree\n";
            int deg;
            cin >> deg;
            if (deg == 0) {
                cout << "Give me a value\n";
                cin >> xlong;
                cout << "The result is " << succeed(xlong) << "\n";
            } else if (deg == 1) {
                cout << "Give me a value\n";
                cin >> xlong;
                cout << "Give me another value\n";
                cin >> ylong;
                cout << "The result is " << xlong + ylong << "\n";
            } else if (deg == 2) {
                cout << "Indentation is working!!";
            }
        }
    }
}
