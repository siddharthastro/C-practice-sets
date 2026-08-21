// printing a calender using do and while loop with the help of for loop
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int start_day;
int daysInMonth;
int col = 1;
do
{
    cout << "Please enter the days in the month ( 28, 29, 30, 31):" << endl;
    cin >> daysInMonth ;
}while (daysInMonth < 28 || daysInMonth > 31);

do
{
    cout << "Please enter the initial day (0 to 6)";
    cin >> start_day;
}while (start_day > 6 || start_day < 0);
 cout << endl;
 cout << endl;
 cout << "Sun Mon Tue Wed Thu Fri Sat" <<endl;
 cout << "... ... ... ... ... ... ..." <<endl;
 for (int space = 0; space < start_day; space++)
 {
    cout << "    ";
    col++;
 }
 for (int day = 1;day <= daysInMonth; day++)
 {
    cout << setw(3) << day << " ";
    col++;
    if (col > 7)
    {
        cout << endl;
        col = 1;
    }
 }
 return 0;
}