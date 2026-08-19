// using an EOF file to stop a loop
// we are going to make a program which will use EOF and a flag to find data from a file and give us the first number surpassing 50000

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    int num;
    bool condition;

    infile.open("practice_data_bases/database1.dat");
    condition = false;
    while(infile >> num && !condition)
        {
        if (num >= 50000)
            {
                cout << "The number is: " << num << endl;
                condition = true;
            }
        }
    if (!condition)
        {
            cout << "The number was not found " << endl;
        }
    infile.close();
    return 0;
}
