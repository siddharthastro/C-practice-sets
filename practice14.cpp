#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    bool b = true;
    char y = 'A';
    short z = 10;
    float f = 3.14;
    double d = 3.14159;
    cout << "Type of b" << " is " << typeid(b).name() << endl;
    cout << "Type of y" << " is " << typeid(y).name() << endl;
    cout << "Type of z" << " is " << typeid(z).name() << endl;
    cout << "Type of f" << " is " << typeid(f).name() << endl;
    cout << "Type of d" << " is " << typeid(d).name() << endl;
    return 0;
}
