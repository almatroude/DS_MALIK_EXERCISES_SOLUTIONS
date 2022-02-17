/*
Write a program that prompts the user to input three numbers. The program should then output the numbers in ascending order.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "enter three numbers you want to arrange in ascending order\n";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    if (num1 > num2 && num2 > num3)
    {
        cout << num3 << "  " << num2 << "  " << num1;
    }
    else if (num2 > num1 && num1 > num3)
    {
        cout << num3 << "  " << num1 << "  " << num2;
    }
    else if (num3 > num1 && num1 > num2)
    {
        cout << num2 << "  " << num1 << "  " << num3;
    }
    else if (num1 > num3 && num3 > num2)
    {
        cout << num2 << "  " << num3 << "  " << num1;
    }
    else if (num2 > num3 && num3 > num1)
    {
        cout << num1 << "  " << num3 << "  " << num2;
    }
    else if (num3 > num2 && num2 > num1)
    {
        cout << num1 << "  " << num2 << "  " << num3;
    }
    // for the same number output any order
    else if (num1 == num2 && num2 > num3)
    {
        cout << num3 << "  " << num2 << "  " << num1;
    }

    cout << endl;
    return 0;
}