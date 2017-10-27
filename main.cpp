/**
 *  @author Sheng Lo
 *  @date September 9, 2016
 *  @file main.cpp
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "cs150check.h"             

// Add your Blackboard login name
string STUDENT = "ilo";

// Change to true for simple IO tests
bool TESTING = true;               

//// Include your own header files here

/**
 * Write a program that translates a letter grade into a numeric
 * grade point
 *
 * Add additional notes about inputs, outputs and algorithms.
 *
 * @return 0 for success.
 */
int run()
{
    // Your code goes here
    // Input section
    cout << "Enter your letter grade: ";
    string gradeIn;
    getline (cin, gradeIn);
    
    // Processing section
    double gradePoints = -1;
    
    if (gradeIn == "A") gradePoints = 4.0;
    if (gradeIn == "A-") gradePoints = 3.7;
    if (gradeIn == "B+") gradePoints = 3.3;
    if (gradeIn == "B") gradePoints = 3.0;
    if (gradeIn == "B-") gradePoints = 2.7;
    if (gradeIn == "C+") gradePoints = 2.3;
    if (gradeIn == "C") gradePoints = 2.0;
    if (gradeIn == "C-") gradePoints = 1.7;
    if (gradeIn == "D+") gradePoints = 1.3;
    if (gradeIn == "D") gradePoints = 1.0;
    if (gradeIn == "D-") gradePoints = 0.7;
    
    
    
    // Output section 
    cout << fixed << showpoint << setprecision(1);
    if (gradePoints >= 0)
    {
        cout << "Grade value is [" << gradePoints << "]" << endl;
    }
    else 
    {
        string errorMessage;
        string validGrades = "ABCDF";
        if (gradeIn == "A+" || gradeIn == "F+" || gradeIn == "F-")
        {
            errorMessage = "INVALID GRADE COMBINATION";
        }
        else if (validGrades.find(gradeIn.substr(0,1)) == string::npos)
        {
            errorMessage = "INVALID LETTER GRADE";
        }
        else
        {
            errorMessage = "INVALID INPUT";
        }
        cout << "Grade value is [" << errorMessage << "]" << endl;
    }
    cout << "Grade value is [" << gradePoints << "]" << endl;
    return 0;

}


