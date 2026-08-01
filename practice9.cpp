#include <iostream>
using namespace std;
int main()
{
    int alpha = 0;
    int delta = 1;
    cout << "Please give the height of the triangle:" <<endl;
    cin >> alpha;
    while (alpha >= delta)
    {
    cout << string(delta, 'X') << endl;
    delta++;
    }
 return 0;

    

}