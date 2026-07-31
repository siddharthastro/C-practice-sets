#include <iostream>
using namespace std;
namespace first {
int x = 250;
}
namespace second {
int x = 500;
}
int main(){
    int x = 3232;
cout << "Which namespace do you want to take the value from? (first/second): ";
    string choice;
    cin >> choice;
    if (choice == "first") {
        cout << "Value from first namespace: " << first::x << endl;
    } else if (choice == "second") {
        cout << "Value from second namespace: " << second::x << endl;
    } else {
        cout << "Invalid choice. Using local variable x: " << x << endl;
    }
    return 0;
}