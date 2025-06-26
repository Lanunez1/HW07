/*
Program Name: Math Tutor HW07
Purpose: Random Addition Solver to Learn Math
Author: Luis Nunez Cortes  
Date Last Modified: 06/23/2025  
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int MIN = 50;
    const int MAX = 500;
    int num1, num2, answer;
    unsigned seed = time(0);
    srand(seed);
    num1 = (rand() % (MAX - MIN + 1)) + MIN;
    num2 = (rand() % (MAX - MIN + 1)) + MIN;
    answer = num1 + num2;
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    cout << "\nPress Enter to see the answer . . . ";
    cin.get();
    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    cout << "  " << answer << endl;
    return 0;
}