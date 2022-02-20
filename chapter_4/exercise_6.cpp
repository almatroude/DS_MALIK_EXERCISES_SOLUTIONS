/*
CONTROL STRUCTURES
exercise 6 
In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides. Write a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether the triangle is a right triangle.
*/




#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int side_one_length, side_two_length, side_three_length;

    cout << "please enter the three lengths of the side of the triangle " << endl;
    cin >> side_one_length;
    cin >> side_two_length;
    cin >> side_three_length;

    if (pow(side_one_length, 2) == pow(side_two_length, 2) + pow(side_three_length, 2))
    {
        cout << "The triangle is a right triangle";
    }

    else if (pow(side_two_length, 2) == pow(side_one_length, 2) + pow(side_three_length, 2))
    {
        cout << "The triangle is a right triangle";
    }

    else if (pow(side_three_length, 2) == pow(side_one_length, 2) + pow(side_two_length, 2))
    {
        cout << "The triangle is a right triangle";
    }

    else if (pow(side_one_length, 2) != pow(side_two_length, 2) + pow(side_three_length, 2) || pow(side_three_length, 2) != pow(side_one_length, 2) + pow(side_two_length, 2) || pow(side_three_length, 2) != pow(side_one_length, 2) + pow(side_two_length, 2))
    {
        cout << "The triangle is not a right triangle";
    }

    return 0;
}