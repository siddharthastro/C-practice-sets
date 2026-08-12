// using logical expressions for a car dealership 
#include <iostream>
using namespace std;
int main()
{
    int age;
    bool eligible;
    // getting the input 
    cout << "Please enter your age: " << endl;
    cin >> age;
    // setting up the boolean condition
    eligible = (age >= 25) && (age <= 100);
if (eligible)
{
    cout << "You are eligible for the car" << endl;
}
else
{
    cout << "You are not eligible for the car" << endl;
}
return 0;
}