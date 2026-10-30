// Part A: Student Marks Using an Array


#include <iostream>
using namespace std;

int main()
{
    int n;
    int marks[100];

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid number of students.";
        return 1;
    }

    // Input marks
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display marks
    cout << "\nStudent Marks:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ": "
             << marks[i] << endl;
    }

    return 0;
}

/* Output of the program:

Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_11"
Enter number of students: 4
Enter marks of student 1: 78
Enter marks of student 2: 90
Enter marks of student 3: 78
Enter marks of student 4: 99

Student Marks:
Student 1: 78
Student 2: 90
Student 3: 78
Student 4: 99
Mayank@Mayanks-MacBook-Pro C++ */


// Part B: Searching and Sorting


#include <iostream>
using namespace std;

int main()
{
    int n, marks[100], search, found = 0;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid number of students.";
        return 1;
    }

    // Input marks
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Searching
    cout << "\nEnter marks to search: ";
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] == search)
        {
            cout << "Marks found at position "
                 << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << "Marks not found." << endl;
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }

    // Display sorted marks
    cout << "\nMarks in Ascending Order:\n";

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }

    cout << endl;
    return 0;
}

/* Output of the program:

Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_11"
Enter number of students: 4
Enter marks of student 1: 89
Enter marks of student 2: 90
Enter marks of student 3: 89
Enter marks of student 4: 99

Enter marks to search: 89
Marks found at position 1

Marks in Ascending Order:
89 89 90 99
Mayank@Mayanks-MacBook-Pro C++ 
*/


// Part C: Highest, Lowest and Average


#include <iostream>
using namespace std;

int main()
{
    int n, marks[100];
    int highest, lowest, sum = 0;
    float average;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > 100)
    {
        cout << "Invalid number of students.";
        return 1;
    }

    // Input marks
    for (int i = 0; i < n; i++)
    {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Initialize highest and lowest
    highest = marks[0];
    lowest = marks[0];

    // Find highest, lowest and sum
    for (int i = 0; i < n; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }

        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }

        sum += marks[i];
    }

    // Calculate average
    average = static_cast<float>(sum) / n;

    cout << "\nHighest Marks = " << highest;
    cout << "\nLowest Marks = " << lowest;
    cout << "\nAverage Marks = " << average << endl;

    return 0;
}

/*  Output of the program: 
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_11"
Enter number of students: 4
Enter marks of student 1: 89
Enter marks of student 2: 90
Enter marks of student 3: 99
Enter marks of student 4: 95

Highest Marks = 99
Lowest Marks = 89
Average Marks = 93.25
Mayank@Mayanks-MacBook-Pro C++ 
*/

//Part D: String Analysis


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;
    int vowels = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        unsigned char ch = str[i];

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        // Check for digits
        else if (isdigit(ch))
        {
            digits++;
        }
        // Check for special characters
        else if (!isalpha(ch) && ch != ' ')
        {
            special++;
        }
    }

    cout << "\nNumber of Vowels = " << vowels;
    cout << "\nNumber of Digits = " << digits;
    cout << "\nNumber of Special Characters = "
         << special << endl;

    return 0;
}

/*  Output of the program:
Mayank@Mayanks-MacBook-Pro C++ % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /C++/Experiment_11"
Enter a string: I am doing coding 

Number of Vowels = 6
Number of Digits = 0
Number of Special Characters = 0
Mayank@Mayanks-MacBook-Pro C++
*/

