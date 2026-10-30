#include <iostream>
using namespace std;

// 1. Electricity Bill
void electricityBill() {
    int units;
    float bill;

    cout << "Enter electricity units: ";
    cin >> units;

    bill = units * 5;
    cout << "Electricity Bill = Rs. " << bill << endl;
}

// 2. Employee Payroll
void employeePayroll() {
    float salary, bonus, total;

    cout << "Enter basic salary: ";
    cin >> salary;
    cout << "Enter bonus: ";
    cin >> bonus;

    total = salary + bonus;
    cout << "Total Salary = Rs. " << total << endl;
}

// 3. Student Grade and CGPA
void studentGrade() {
    float marks, cgpa;

    cout << "Enter marks (out of 100): ";
    cin >> marks;

    cgpa = marks / 10;

    cout << "CGPA = " << cgpa << endl;

    if (marks >= 90)
        cout << "Grade A" << endl;
    else if (marks >= 75)
        cout << "Grade B" << endl;
    else if (marks >= 50)
        cout << "Grade C" << endl;
    else
        cout << "Fail" << endl;
}

// 4. Banking Transaction
void banking() {
    float balance, deposit, withdraw;

    cout << "Enter balance: ";
    cin >> balance;
    cout << "Enter deposit amount: ";
    cin >> deposit;
    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    balance = balance + deposit - withdraw;

    cout << "Final Balance = Rs. " << balance << endl;
}

int main() {
    int choice;

    cout << "1. Electricity Bill" << endl;
    cout << "2. Employee Payroll" << endl;
    cout << "3. Student Grade and CGPA" << endl;
    cout << "4. Banking Transaction" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            electricityBill();
            break;
        case 2:
            employeePayroll();
            break;
        case 3:
            studentGrade();
            break;
        case 4:
            banking();
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}