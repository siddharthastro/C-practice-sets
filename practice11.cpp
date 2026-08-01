// Area and parameters of 2d shapes 
#include <iostream>
#include <string>
using namespace std;
const double pi = 3.14;
double side;
double length;
double breadth;
double radius;
double height;
double base;
int main()
{
string shape;
cout << "Please enter the shape you want to calculate area and perimeter for: " << endl;
cin >> shape;
if (shape == "rectangle")
{
    cout << "Please enter the length of the rectangle: " << endl;
    cin >> length;
    cout << "Please enter the breadth of the rectangle: " << endl;
    cin >> breadth;
    cout << "The area of the rectangle is: " << length * breadth << endl;
    cout << "The perimeter of the rectangle is: " << 2 * (length + breadth) << endl;
}
else if (shape == "square")
{
    cout << "Please enter the side of the square: " << endl;
    cin >> side;
    cout << "The area of the square is: " << side * side << endl;
    cout << "The perimeter of the square is: " << 4 * side << endl;
}
else if (shape == "circle")
{
    cout << "Please enter the radius of the circle: " << endl;
    cin >> radius;
    cout << "The area of the circle is: " << pi * radius * radius << endl;
    cout << "The perimeter of the circle is: " << 2 * pi * radius << endl;
}
else if (shape == "triangle")
{
    cout << "Please enter the base of the triangle: " << endl;
    cin >> base;
    cout << "Please enter the height of the triangle: " << endl;
    cin >> height;
    cout << "The area of the triangle is: " << 0.5 * base * height << endl;
}
else
{
    cout << "Invalid shape entered." << endl;
}
return 0;
}

