/* Program File Name: Chapter2_Exercise10.cpp
Programmer: Bryan Hurley
Date:Feburary 2025
Requirements: A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that
calculates the number of miles per gallon the car gets. Display the result on the screen.
*/

#include <iostream>
using namespace std;
int main()
{
    int capacity, miles, MPG;
    capacity = 15;
    miles = 375;
    MPG = miles / capacity;
    cout << "A car that holds " << capacity << " gallons of gasoline and can travel " << miles << " miles has a MPG of " << MPG << "." << endl;
}
