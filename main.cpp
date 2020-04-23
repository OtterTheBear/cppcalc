#include <iostream>
#include <cmath>
#include "hyperops.hpp"

using namespace std;

int main() {
    long int xlong;
    long double xdouble;
    long int ylong;
    long double ydouble;
    bool loop = true;
    string contin;
    string hyper;
    cout << "Welcome to cppcalc\n";
    cout << "We have many calcs for you\n";
    while (loop) {
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
                    cin >> xdouble;
                    cout << "The result is " << succeed(xdouble) << "\n";
                } else if (deg == 1) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "Give me another value\n";
                    cin >> ydouble;
                    cout << "The result is " << xdouble + ydouble << "\n";
                } else if (deg == 2) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "Give me another one\n";
                    cin >> ydouble;
                    cout << "The result is " << xdouble * ydouble << "\n";
                } else if (deg == 3) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "Give me another value\n";
                    cin >> ydouble;
                    cout << "The result is " << pow(xdouble, ydouble) << "\n";
                } else if (deg == 4) {
                    cout << "Give me a value\n";
                    cin >> xlong;
                    cout << "Give me another one\n";
                    cin >> ylong;
                    cout << "The result is " << ttrt(xlong, ylong) << "\n";
                }
            }
        }
    
        cout << "Continue?(y/n)\n";
        cin >> contin;
        if (contin == "n") {
            break;
        }
    }
}
