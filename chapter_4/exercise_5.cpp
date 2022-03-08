/*  Suppose that score is an int variable. Consider the following if statements: if (score >= 90);
        cout << "Discount = 10%" << endl;
a. What is the output if the value of score is 95? Justify your answer.
b. What is the output if the value of score is 85? Justify your answer.

Write a program to implement the algorithm you designed in Exercise 21 of Chapter 1.
*/

#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "enter the score " << endl;
    cin >> score;

    if (score >= 90)
    {
        cout << score << "has  "<<"Discount = 10%" << endl;
    }
    else
    {
        cout << score << " "
             << "has no discount" << endl;
    }

    return 0;
}
