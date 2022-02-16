/*
In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides. Write a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.
*/
#include <iostream>
#include <cmath>

using namespace std;

bool is_right_triangle1(int num1, int num2, int num3);
bool is_right_triangle2(int num1, int num2, int num3);
bool is_right_triangle3(int num1, int num2, int num3);
bool is_pythagoras(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;

    cout << "enter the lengths of three sides of a triangle: ";
    cin >> num1 >> num2 >> num3;

    if (is_right_triangle3(num1, num2, num3))
    {
        cout << "The triangle is a right triangle";
    }
    else
    {
        cout << "The triangle is not a right triangle";
    }

    cout << endl;

    return 0;
}

bool is_right_triangle1(int num1, int num2, int num3)
{
    return is_pythagoras(num1, num2, num3) || is_pythagoras(num2, num1, num3) || is_pythagoras(num3, num1, num2);
}

bool is_right_triangle2(int num1, int num2, int num3)
{
    if (is_pythagoras(num1, num2, num3))
    {
        return true;
    }

    if (is_pythagoras(num2, num1, num3))
    {
        return true;
    }

    if (is_pythagoras(num3, num1, num2))
    {
        return true;
    }

    return false;
}

bool is_right_triangle3(int num1, int num2, int num3)
{
    bool sentinel = false;

    if (is_pythagoras(num1, num2, num3))
    {
        sentinel = true;
    }
    else if (is_pythagoras(num2, num1, num3))
    {
        sentinel = true;
    }
    else if (is_pythagoras(num3, num1, num2))
    {
        sentinel = true;
    }

    return sentinel;
}

bool is_pythagoras(int num1, int num2, int num3) 
{
    return pow(num1, 2) == pow(num2, 2) + pow(num3, 2);
}