/*
The roots of the quadratic equation ax2 + bx + c = 0, a != 0 are given by the following formula:

[-b-+sqr(bˆ2 - 4ac)]/ 2a

In this formula, the term bˆ2 - 4ac is called the discriminant. If bˆ2 - 4ac = 0, then the equation has a single (repeated) root. If bˆ2-4ac > 0, the equation has two real roots. If bˆ2 - 4ac<0, the equation has two complex roots. Write a program that prompts the user to input the value of a (the coefficient of xˆ2), b (the coefficient of x), and c (the constant term) and outputs the type of roots of the equation. Further more, if bˆ2-4ac>=0, the program should output the roots of the quadratic equation. (Hint: Use the function pow from the header file cmath to calculate the square root. Chapter 3 explains how the function pow is used.)
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int a, b, c, x1, x2;

    cout << "enter the coefficient of x square" << endl;
    cin >> a;
    cout << "enter the coefficient of x" << endl;
    cin >> b;
    cout << "enter the constant" << endl;
    cin >> c;
    x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
    x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

    if (pow(b, 2) - 4 * a * b == 0)
    {
        cout << "The equation has a single (repeated) root and  ";
        cout << "the roots of the equation is "
             << "x1 = " << x1 << " and  "
             << "x2 = " << x2 << endl;
    }
    else if (pow(b, 2) - 4 * a * b > 0)
    {
        cout << "The equation has two real roots and  ";
        cout << "the roots of the equation is "
             << "x1 = " << x1 << " and  "
             << "x2 = " << x2 << endl;
    }

    else if (pow(b, 2) - 4 * a * b < 0)
    {
        cout << "The equation has two complex roots and  ";
        cout << "the roots of the equation is "
             << "x1 = " << x1 << " and "
             << "x2 = " << x2 << endl;
    }

    else if (pow(b, 2) - 4 * a * b >= 0)
    {
        
        cout << "The roots of the equation is "
             << "x1 = " << x1 << " "
             << "x2 = " << x2 << endl;
    }
    return 0;
}