/*
The statements in the following program are in incorrect order. Rearrange the statements so that they prompt the user to input the shape type (rectangle, circle, or cylinder) and the appropriate dimension of the shape. The program then outputs the following information about the shape: For a rectangle, it outputs the area and perimeter; for a circle, it outputs the area and circumference; and for a cylinder, it outputs the volume and surface area. After rearranging the statements, your program should be properly indented.
using namespace std; #include <iostream>
int main() {
string shape; double height;
#include <string>
cout << "Enter the shape type: (rectangle, circle, cylinder) "; cin >> shape;
cout << endl;
if (shape == "rectangle") {
        cout << "Area of the circle = "
             << PI * pow(radius, 2.0) << endl;
cout << "Circumference of the circle: " << 2 * PI * radius << endl;
cout << "Enter the height of the cylinder: "; cin >> height;
cout << endl;
cout << "Enter the width of the rectangle: "; cin >> width;
cout << endl;
        cout << "Perimeter of the rectangle = "
             << 2 * (length + width) << endl;
double width; }
cout << "Surface area of the cylinder: "
<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << end1;
}
else if (shape == "circle") {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;

cout << "Volume of the cylinder = "
     << PI * pow(radius, 2.0)* height << endl;
double length; }
return 0;
else if (shape == "cylinder") {
double radius;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << endl;
#include <iomanip>
    cout << "Enter the radius of the base of the cylinder: ";
    cin >> radius;
    cout << endl;
const double PI = 3.1416;
cout << "Area of the rectangle = "
                << length * width << endl;
else
cout << "The program does not handle " << shape << endl; cout << fixed << showpoint << setprecision(2);
#include <cmath> }

*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string shape;
    double height;
    double radius;
    double length;
    double width;
    const double PI = 3.1416;
    cout << "Enter the shape type: (rectangle, circle, cylinder) ";
    cin >> shape;
    cout << endl;
    if (shape == "rectangle")
    {
        cout << "Enter the length of the rectangle : ";
        cout << endl;
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        cout << endl;
        cout
            << "Area of the rectangle = "
            << length * width
            << endl;
        cout << "Perimeter of the rectangle = "
             << 2 * (length + width) << endl;
    }

    else if (shape == "circle")
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << endl;
        cout << "Area of the circle = "
             << PI * pow(radius, 2.0) << endl;
        cout << "Circumference of the circle: " << 2 * PI * radius << endl;
    }

    else if (shape == "cylinder")
    {
        cout << "Enter the height of the cylinder: ";
        cin >> height;
        cout << endl;
        cout << "Enter the radius of the base of the cylinder";
        cout << endl;
        cin >> radius;
        cout << "Volume of the cylinder = "
             << PI * pow(radius, 2.0) * height << endl;

        cout << "Surface area of the cylinder: "
             << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0) << endl;
    }
    else
    {
        cout << "The program does not handle " << shape << endl;
    }
    cout << fixed << showpoint << setprecision(2);
    return 0;
}
