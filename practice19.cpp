//nested loop 
#include <iostream>
using namespace std;
int main()
{
int num1, num2 ;
// get input 
cout << "Enter two numbers " << endl;
cout << "Enter first number: " << endl;
cin >> num1 ;
cout << "Enter second number: " << endl;
cin >> num2 ;
// nested loop initiated 
if (num1 >= num2 )
{
    if (num1 > num2)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else
    {
        cout << num1 << " is equal to " << num2 << endl;
    }
}
else 
{
    cout << num1 << " is less than " << num2 << endl;
}
return 0;
}