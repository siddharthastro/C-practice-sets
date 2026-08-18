// Using while loop 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Using a counter mechanism 
    int score;
    int sum = 0;
    double average;
    // setting up the counter
    int counter = 0;
    while (counter < 4)
    {
     cout << "Please enter your score :"<< endl;
     cin >> score;
     sum = sum + score;
     counter++;
    }
    average = static_cast<double>(sum)/4;
    cout << fixed << setprecision(2) << showpoint;
    cout <<"The average of the scores provided is:"<< average << endl;
    return 0;
}
