// a loop with variable limit 
#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cout << "Please enter the amount of the integers you want :"<< endl;
    cin >> n;
    count = 0;
    while (n > count)
    {
        cout << count << endl;
        count++;
    }
    return 0;
}