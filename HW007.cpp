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
    int num1, num2, answer, width;
    int len1 = 0, len2 = 0, lenAns = 0, temp;
    unsigned seed = time(0);
    srand(seed);
    num1 = (rand() % (MAX - MIN + 1)) + MIN;
    num2 = (rand() % (MAX - MIN + 1)) + MIN;
    answer = num1 + num2;
    temp = num1;
    while (temp != 0) {
        len1++;
        temp /= 10;
    }
    temp = num2;
    while (temp != 0) {
        len2++;
        temp /= 10;
    }
    width = (len1 > len2 ? len1 : len2) + 2;
    for (int i = 0; i < width - len1; i++) cout << ' ';
    cout << num1 << endl;
    cout << "+ ";
    for (int i = 0; i < width - 2 - len2; i++) cout << ' ';
    cout << num2 << endl;
    for (int i = 0; i < width; i++) cout << '-';
    cout << endl;
    cout << "\nPress Enter to see the answer . . . ";
    cin.get();
    for (int i = 0; i < width - len1; i++) cout << ' ';
    cout << num1 << endl;
    cout << "+ ";
    for (int i = 0; i < width - 2 - len2; i++) cout << ' ';
    cout << num2 << endl;
    for (int i = 0; i < width; i++) cout << '-';
    cout << endl;
    temp = answer;
    while (temp != 0) {
        lenAns++;
        temp /= 10;
    }
    for (int i = 0; i < width - lenAns; i++) cout << ' ';
    cout << answer << endl;

    return 0;
}