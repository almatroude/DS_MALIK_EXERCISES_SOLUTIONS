/*
Write a program that prompts the user to input a number. The program should then output the number and a message saying whether the number is positive, negative, or zero.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int number;
    cout << "please enter a number you want to know whether positive, negative or zero \n";
    cin >> number;
    // any number greater zero is positive.
    if (number > 0)
    {
        cout << number << "  is a positive number\n";
    }
    // any number less than zero is negative.
    else if (number < 0)
    {
        cout << number << "  is a negative number\n";
    }

    else if (number == 0)
    {
        cout << " the number entered is  zero\n";
    }
    return 0;
}