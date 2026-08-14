// using break and defautl on switch loop in advance methods 
#include <iostream>
using namespace std;
int main()
{
    char grade;
    cout << "Enter a grade (A,B,C,D,F)" << endl;
    cin >> grade;
    // using switch statement 
    switch(grade)
    {
        case 'A':
        case 'B':
        case 'C':cout <<"You pass"<< endl;
        break;
        case 'D':
        case 'F':cout <<"You failed"<< endl;
        break;
        default:cout <<"ERROR"<< endl;
    }
    return 0;
}