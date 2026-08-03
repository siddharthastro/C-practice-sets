// static cast conversion
#include <iostream>
using namespace std;
int main() {
    int x = 10;
    double y = 232.21;
    cout << "without static_cast: " << x + y << endl;
    cout << "with static_cast: " << x + static_cast<int>(y) << endl;
    return 0;
}