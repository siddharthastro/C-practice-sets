#include <iostream>
using namespace std;
int main()
{
cout << "Please provide the weight"<<endl;
int x = 0;
cin >> x;
int alpha = x%2;
if (alpha == 0)
{
    cout << "YES"<<endl;
}
else
{
    cout << "NO"<< endl;
}
}