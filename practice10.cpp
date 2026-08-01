#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstName;
    string lastName;
    string Initials;
    string space = " ";
    string dot = ".";
    string fullname;
    cout << "Please enter your first name: " << endl;
    cin >> firstName;
    cout << "Please enter your middle name: " << endl;
    cin >> Initials;
    cout << "Please enter your last name: " << endl;
    cin >> lastName;
    fullname = firstName + space + Initials + dot + space + lastName;
    cout << "Your full name is: " << fullname << endl;
    return 0;
}