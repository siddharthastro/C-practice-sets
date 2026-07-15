#include <iostream>
#include <string>
using namespace std;
int main()
{
    short short_int;
    int int_var;
    long long long_int;

    cout << "Please type the data type you want to know the length about (short_int, int_var, long_int): ";
    string data_type;
    cin >> data_type;

    if (data_type == "short_int") {
        cout << "The length of short int is: " << sizeof(short_int) << " bytes" << endl;
    } else if (data_type == "int_var") {
        cout << "The length of int is: " << sizeof(int_var) << " bytes" << endl;
    } else if (data_type == "long_int") {
        cout << "The length of long long int is: " << sizeof(long_int) << " bytes" << endl;
    } else {
        cout << "Invalid data type entered." << endl;
    }

    return 0;
}
