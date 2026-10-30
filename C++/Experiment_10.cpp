/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/
//Experiment-10

// Program 1: Scholarship Eligibility Using If-Else
    

#include <iostream>
using namespace std;

int main()
{
    int marks;
    float income;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter family income: ";
    cin >> income;

    if (marks < 0 || marks > 100 || income < 0)
    {
        cout << "Invalid input.";
    }
    else if (marks >= 60 && income <= 300000)
    {
        cout << "Eligible for Scholarship";
    }
    else
    {
        cout << "Not Eligible for Scholarship";
    }

    cout << endl;
    return 0;
}

/*  Output of the program:
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_10"
Enter marks: 96
Enter family income: 500000
Not Eligible for Scholarship
Mayank@Mayanks-MacBook-Pro C++
*/



// Program 2: Multiplication Table Using Loop


#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nMultiplication Table of " << n << ":\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}

/*  Output of the program:
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_10"
Enter a number: 78

Multiplication Table of 78:
78 x 1 = 78
78 x 2 = 156
78 x 3 = 234
78 x 4 = 312
78 x 5 = 390
78 x 6 = 468
78 x 7 = 546
78 x 8 = 624
78 x 9 = 702
78 x 10 = 780
Mayank@Mayanks-MacBook-Pro C++
*/



//Program 3: Fibonacci Series Using Iteration


#include <iostream>
using namespace std;

int main()
{
    int n;
    long long a = 0, b = 1, c;

    cout << "Enter number of terms: ";
    cin >> n;

    if (n < 0 || n > 92)
    {
        cout << "Please enter a number between 0 and 92.";
        return 1;
    }

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";

        if (i < n)
        {
            c = a + b;
            a = b;
            b = c;
        }
    }

    cout << endl;
    return 0;
}

/*  Output of the program:
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_10"
Enter number of terms: 3
Fibonacci Series: 0 1 1 
Mayank@Mayanks-MacBook-Pro C++
*/



//Program 4: Menu-Driven Calculator Using Switch Case


#include <iostream>
using namespace std;

int main()
{
    int choice;
    int a, b;

    do
    {
        cout << "\n--- Calculator Menu ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice)
        {
            case 1:
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                if (b != 0)
                    cout << "Result = "
                         << static_cast<double>(a) / b << endl;
                else
                    cout << "Cannot divide by zero." << endl;
                break;

            case 5:
                if (b != 0)
                    cout << "Result = " << a % b << endl;
                else
                    cout << "Cannot calculate modulus by zero." << endl;
                break;

            case 6:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}

/*  Output of the program:
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_10"

--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 1
Enter two numbers: 34
76
Result = 110

--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 2
Enter two numbers: 87
45
Result = 42

--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 3
Enter two numbers: 67
45 
Result = 3015

--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 4
Enter two numbers: 67
3
Result = 22.3333

--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 5
Enter two numbers: 76
89
Result = 76

--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 6
Exiting...
Mayank@Mayanks-MacBook-Pro C++
*/