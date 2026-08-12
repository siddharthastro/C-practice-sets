// using or as a logical expressions 
#include <iostream>
using namespace std;
int main()
{
    // Variable declaration 
    int temperature;
    bool hot;
    bool cold;
    // Input temperature 
    cout << "Enter the temperature" << endl;
    cin >> temperature;
    // Set two conditions 
    hot = temperature >= 75;
    cold = temperature <= 65;
    // Make the decision 
    if ( hot||cold )
    {
        cout << "The air condition is working " << endl;
        if (hot)
        {
            cout << "The heater is working "<< endl;
        }
        else
        {
            cout << "The cooler is working "<< endl;
        }
    }
    else 
    {
        cout << "The air condition system is turned off!" << endl;
    }
    return 0;
}