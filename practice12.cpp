//Chapter 3  Expresssions and statements
// Practice on Behrouz's C++ Programming Language book

#include <iostream>
#include <string>
using namespace std;
int main() {
int x = 4;
int y = 6;
int f = 5;
int d = 0;
float e = 3.3;
double t = 4.43;
x = x + 3;
y = y*e;
e = e + 4332;
t = x + y + f + d + e + t;
f = f + 4;
cout << "The value of x is: " << x << endl;
cout << "The new yalue of y is :" << y << endl;
cout << "The new value of e is: " << e << endl;
cout << "The new value of t is: " << t << endl;
cout << "The new value of f is: " << f << endl;
cout << "The value of d is: " << d << endl;
return 0;
}