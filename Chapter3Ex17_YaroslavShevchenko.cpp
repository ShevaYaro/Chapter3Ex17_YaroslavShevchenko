/*
Tite Chapter 3 Exercise 17 - Math Tutor
File name:Chapter3Exe17_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 09/27/2024
Requirements:
The program should display two random numbers to be added.
The program should then pause while the student works on the problem.
When student is ready to check the answer,
he can press a key and the program will display the correct solution.
*/

#include <iostream>
#include <random>
#include <iomanip>
using namespace std;


int main()
{
    // random number generator
    random_device myEngine;
    int a = myEngine();
    int b = myEngine();

    //calculator
    int res = a + b;
    int userRes;

    //output
    cout << "Add two numbers, enter the solution\n";
    cout << setw(15) << right << a << endl;
    cout << "+" << setw(14) << right << b << endl;
    cout << "----------------\n";
    cout << setw(5) << right << "";
    cin >> userRes;

    if (userRes == res) {
        cout << "You are correct!";
    }
    else 
        cout << "You are wrong, the correct answer is: " << res;



}

