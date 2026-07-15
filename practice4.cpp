// just an oridinary set value to penny calculator 
#include <iostream>
using namespace std;
int main()
{
    // constants 
    const int pennyvalue = 1;
    const int nicklevalue = 5;
    const int dimevalue = 10;
    const int quartervalue = 25;
    const int dollarvalue = 100;
    // variables
    int penny, nickle, dime, quarter, dollar;
    long totalvalue;
    // user input
    cout << "Please enter the number of pennies: ";
    cin >> penny;
    cout << "Please enter the number of nickles: ";
    cin >> nickle;
    cout << "Please enter the number of dimes: ";
    cin >> dime;
    cout << "Please enter the number of quarters: ";
    cin >> quarter;
    cout << "Please enter the number of dollars: ";
    cin >> dollar;
    // totalvalue 
    totalvalue = penny*pennyvalue + nickle*nicklevalue + dime*dimevalue + quarter*quartervalue + dollar*dollarvalue;
    // output 
    cout << "The total value of the coins is: " << totalvalue << " pennies";
    return 0;
}
