#include <iostream>
#include <limits>
// Underflow and Overflow
using namespace std;
int int1 = numeric_limits<int>::max();
int int2 = numeric_limits<int>::min();
double double1 = numeric_limits<double>::max();
double double2 = numeric_limits<double>::min();
int main() {
    cout << "int1 no changes" << int1 << "\n";
    cout << "int2 no changes" << int2 << "\n";
    cout << "int1 after overflow" << int1 + 1 << "\n";
    cout << "int2 after underflow" << int2 - 1 << "\n";
    cout << "double1 no changes" << double1 << "\n";
    cout << "double2 no changes" << double2 << "\n";
    cout << "double1 after overflow" << double1 * 2 << "\n";
    cout << "double2 after underflow" << double2/2 << "\n";
    return 0;

}
