#include <iostream>
using namespace std;
bool accept()
{
    cout << "Do you want to continue? (y/n): ";
    char answer;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
        return true;
    else
        return false;
}
int main() 
{
    if (accept()) {
        cout << "Proceeding..." << endl;
    } else {
        cout << "Exiting..." << endl;
    }
    return 0;
}