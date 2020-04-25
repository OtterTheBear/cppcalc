#include <iostream>
#include <sstream>
#include <cmath>
#include "hyperops.hpp"

using namespace std;

int main(int argc, char *argv[]) {
    long int xlong;
    long double xdouble;
    long int ylong;
    long double ydouble;
    cpp_int xhigh;
    cpp_int yhigh;
    bool loop = true;
    string contin;
    string hyper;
    string cppInt;
    string rootorlog;
    int deg;

    if (argc == 4) {
        istringstream(argv[2]) >> xhigh;
        istringstream(argv[3]) >> yhigh;
        if (strcmp(argv[1], "add") == 0) {
            cout << "The result is " << (xhigh + yhigh) << endl;
            return 0;
        } else if (strcmp(argv[1], "mul") == 0) {
            cout << "The result is " << (xhigh * yhigh) << endl;
            return 0;
        } else if (strcmp(argv[1], "pow") == 0) {
            cout << "The result is " << mpow(xhigh, yhigh) << endl;
            return 0;
        } else if (strcmp(argv[1], "trt") == 0) {
            cout << "The result is " << ttrt(xhigh, yhigh) << endl;
            return 0;
        } else {
            cout << "Error: unsupported operation." << endl;
            return 0;
        }
    }

    cout << "Welcome to cppcalc\n";
    cout << "We have many calcs for you\n";
    cout << "See the README.txt file for more information" << endl;
    while (loop) {
        cout << "Hyperoperation or no? (y/n)\n";
        cin >> hyper;
        if (hyper == "y") {
            string pos;
            cout << "Positive or negative? (p/n)\n";
            cin >> pos;
            if (pos == "p") {
                cout << "Pick a degree\n";
                cin >> deg;
                if (deg == 0) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "The result is " << succeed(xdouble) << endl;
                } else if (deg == 1) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "Give me another value\n";
                    cin >> ydouble;
                    cout << "The result is " << xdouble + ydouble << endl;
                } else if (deg == 2) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "Give me another one\n";
                    cin >> ydouble;
                    cout << "The result is " << xdouble * ydouble << endl;
                } else if (deg == 3) {
                    cout << "Integer or real exponentiation? (i/r)" << endl;
                    cin >> cppInt;
                    if (cppInt == "r") {
                        cout << "Give me a value\n";
                        cin >> xdouble;
                        cout << "Give me another value\n";
                        cin >> ydouble;
                        cout << "The result is " << pow(xdouble, ydouble) << endl;
                    } else if (cppInt == "i") {
                        cout << "Give me a value" << endl;
                        cin >> xhigh;
                        cout << "Give me another value" << endl;
                        cin >> yhigh;
                        cout << "The result is " << mpow(xhigh, yhigh) << endl;
                    }
                } else if (deg == 4) {
                    cout << "Give me a value\n";
                    cin >> xlong;
                    cout << "Give me another one\n";
                    cin >> ylong;
                    cout << "The result is " << ttrt(xlong, ylong) << endl;
                }
            } else if (pos == "n") {
                cout << "Pick a degree";
                cin >> deg;
                if (deg == 0) {
                    cout << "Give me a value\n";
                    cin >> xlong;
                    cout << "The result is " << preceed(xlong) << endl;
                } else if (deg == 1) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "Give me another value\n";
                    cin >> ydouble;
                    cout << "The result is " << xdouble - ydouble << endl;
                } else if (deg == 2) {
                    cout << "Give me a value\n";
                    cin >> xdouble;
                    cout << "Give me another one\n";
                    cin >> ydouble;
                    cout << "The result is " << xdouble / ydouble << endl;
                } else if (deg >= 3) {
                    cout << "Root-type or Log-type?(r/l)" << endl;
                    cin >> rootorlog;
                    if (rootorlog == "r") {
                        cout << "Currently only inverse powering and exponentiating is possible..." << endl;
                        cout << "So give me a value (under the radical sign)" << endl;
                        cin >> xdouble;
                        cout << "Give me another value" << endl;
                        cin >> ydouble;
                        cout << "The answer is " << nthroot(xdouble, ydouble) << endl;
                    }
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
