/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/
//Experiment-09

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    int rollNo;
    int totalClasses, attendedClasses;
    int marks1, marks2, marks3;
    float attendance, average;

    // Input student details
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Total Classes: ";
    cin >> totalClasses;

    cout << "Enter Classes Attended: ";
    cin >> attendedClasses;

    cout << "Enter Marks in Subject 1: ";
    cin >> marks1;

    cout << "Enter Marks in Subject 2: ";
    cin >> marks2;

    cout << "Enter Marks in Subject 3: ";
    cin >> marks3;

    // Validate input
    if (rollNo <= 0 ||
        totalClasses <= 0 ||
        attendedClasses < 0 ||
        attendedClasses > totalClasses ||
        marks1 < 0 || marks1 > 100 ||
        marks2 < 0 || marks2 > 100 ||
        marks3 < 0 || marks3 > 100)
    {
        cout << "Invalid input. Please check the entered values."
             << endl;
        return 1;
    }

    // Calculate attendance and average marks
    attendance = (attendedClasses * 100.0) / totalClasses;
    average = (marks1 + marks2 + marks3) / 3.0;

    // Display academic report
    cout << "\n-----------------------------";
    cout << "\n    STUDENT ACADEMIC REPORT";
    cout << "\n-----------------------------";

    cout << "\nRoll Number       : " << rollNo;
    cout << "\nTotal Classes     : " << totalClasses;
    cout << "\nClasses Attended  : " << attendedClasses;
    cout << "\nAttendance        : " << attendance << "%";

    cout << "\nSubject 1 Marks   : " << marks1;
    cout << "\nSubject 2 Marks   : " << marks2;
    cout << "\nSubject 3 Marks   : " << marks3;
    cout << "\nAverage Marks     : " << average;

    // Check exam eligibility
    if (attendance >= 75)
    {
        cout << "\nExam Eligibility  : Eligible";
    }
    else
    {
        cout << "\nExam Eligibility  : Not Eligible";
    }

    cout << "\n-----------------------------" << endl;

    return 0;
}

/*  Output of the program:
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_09"
Enter Roll Number: 31
Enter Total Classes: 77
Enter Classes Attended: 75
Enter Marks in Subject 1: 78
Enter Marks in Subject 2: 90
Enter Marks in Subject 3: 99

-----------------------------
    STUDENT ACADEMIC REPORT
-----------------------------
Roll Number       : 31
Total Classes     : 77
Classes Attended  : 75
Attendance        : 97.4026%
Subject 1 Marks   : 78
Subject 2 Marks   : 90
Subject 3 Marks   : 99
Average Marks     : 89
Exam Eligibility  : Eligible
-----------------------------
Mayank@Mayanks-MacBook-Pro C++
*/