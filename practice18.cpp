/* A timer which coverts seconds to seconds , minutes and hours */
#include <iostream>  
using namespace std;
int main()
{
    // Setting up the variables 
    long long int total_duration, seconds, minutes, hours;
    cout << "Enter the time in seconds;" << endl;
    cin >> total_duration;
    // converting total duration into all of the other time units
    hours = total_duration/3600L;
    minutes = (total_duration - hours*3600L)/60L;
    seconds = total_duration - (hours*3600L + minutes*60L);
    // Final results
    cout << "Time provided is: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    return 0;
}