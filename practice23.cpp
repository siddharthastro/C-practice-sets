// using switch method 
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Please enter a number between 1 and 7" << endl;
    cin >> number;
    switch (number)
                   {
                    case 1:cout << "Sunday" <<endl;
                    case 2:cout << "Monday" <<endl;
                    case 3:cout << "Tuesday" <<endl;
                    case 4:cout << "Wednesday" <<endl;
                    case 5:cout << "Thersday" <<endl;
                    case 6:cout << "Friday" <<endl;
                    case 7:cout << "Saturday" <<endl;
                   }

}