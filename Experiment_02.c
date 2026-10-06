/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/

#include<stdio.h>

int main(){
    int choice,number,i,n,factorial;
    int first,second,next,isprime,original,reverse;
    int remainder;
    float percentage, income;

    do
    {
        printf("\n\n=========================================");
        printf("\n CONDITIONAL AND LOOP CONTROL PROGRAM");
        printf("\n=========================================");
        printf("\n1. Check Scholarship Eligibility");
        printf("\n2. Generate Multipliacation Table");
        printf("\n3. Calculate Factorial");
        printf("\n4. Generate Fibonacci Series");
        printf("\n5. Check Prime Number");
        printf("\n6. Check Palindrome Number");
        printf("\n7. Exit");
        printf("\n==========================================");
        printf("\nEnter Your Choice:");
        scanf("%d", &choice);

        //1. Check Scholarship Eligibility
        if(choice == 1)
        {
            printf("Enter Student's Percentage:");
            scanf("%f", &percentage);
            printf("Enter Annual Family Income:");
            scanf("%f", &income);
            if(percentage >= 75)
            {
                if(income <= 500000)
                {
                    printf("Student is eligible for Scholarship");
                }
                else
                {
                    printf("Student is not eligible for Scholarship");
                    printf("Reason: Annual Family Income exceeds the limit");
                }
            }
            else
            {
                printf("Student is not eligible for Scholarship");
                printf("Reason: Percentage is below the required threshold");
            }
        }

        //2. Generate Multiplication Table
        else if(choice == 2)
        {
            printf("Enter a number to generate its multiplication table: ");
            scanf("%d", &number);
            printf("Multiplication Table of %d:\n", number);
            for(i = 1; i <= 10; i++)
            {
                printf("%d x %d = %d\n", number, i, number * i);
            }
        }

        //3. Calculate Factorial
        else if(choice == 3)
        {
            printf("Enter a number to calculate its factorial: ");
            scanf("%d", &number);
            factorial = 1;
            for(i = 1; i <= number; i++)
            {
                factorial *= i;
                printf("Factorial of %d is: %d\n", i, factorial);
            }
        }

        //4. Generate Fibonacci Series
        else if(choice == 4)
        {
            printf("Enter the number of terms for Fibonacci series: ");
            scanf("%d", &n);
            first = 0;
            second = 1;
            printf("Fibonacci Series: ");
            for(i = 0; i < n; i++)
            {
                if(i <= 1)
                    next = i;
                else
                {
                    next = first + second;
                    first = second;
                    second = next;
                }
                printf("%d ", next);
            }
        }
        //5. Check Prime Number
        else if(choice == 5)
        {
            printf("Enter a number to check if its prime number or not: ");
            scanf("%d", &number);
            if(number <= 1)
            {
                printf("%d is not a prime number.\n", number);
            }
            else
            {
                isprime = 1; // Assume the number is prime
                for(i = 2; i <= number / 2; i++)
                {
                    if(number % i == 0)
                    {
                        isprime = 0; // Not a prime number
                        break;
                    }
                }
                if(isprime)
                    printf("%d is a prime number.\n", number);
                else
                    printf("%d is not a prime number.\n", number);
            }
        }
        //6. Check Palindrome Number 
        else if(choice == 6)
        {
            printf("Enter a number to check if it is palindrome or not: ");
            scanf("%d", &number);
            original = number;
            reverse = 0;
            while(number != 0)
            {
                remainder = number % 10;
                reverse = reverse*10 + remainder;
                number /= 10;
            }
            if(original == reverse)
                printf("%d is a palindrome number.\n", original);
            else
                printf("%d is not a palindrome number.\n", original);
        }
        //7. Exit
        else if(choice == 7)
        {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }while(choice != 7);
    return 0;
}

// Output of the Program:

/*  Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /Experiment_02"


=========================================
 CONDITIONAL AND LOOP CONTROL PROGRAM
=========================================
1. Check Scholarship Eligibility
2. Generate Multipliacation Table
3. Calculate Factorial
4. Generate Fibonacci Series
5. Check Prime Number
6. Check Palindrome Number
7. Exit
==========================================
Enter Your Choice:1
Enter Student's Percentage:89
Enter Annual Family Income:100000
Student is eligible for Scholarship

=========================================
 CONDITIONAL AND LOOP CONTROL PROGRAM
=========================================
1. Check Scholarship Eligibility
2. Generate Multipliacation Table
3. Calculate Factorial
4. Generate Fibonacci Series
5. Check Prime Number
6. Check Palindrome Number
7. Exit
==========================================
Enter Your Choice:2
Enter a number to generate its multiplication table: 19
Multiplication Table of 19:
19 x 1 = 19
19 x 2 = 38
19 x 3 = 57
19 x 4 = 76
19 x 5 = 95
19 x 6 = 114
19 x 7 = 133
19 x 8 = 152
19 x 9 = 171
19 x 10 = 190


=========================================
 CONDITIONAL AND LOOP CONTROL PROGRAM
=========================================
1. Check Scholarship Eligibility
2. Generate Multipliacation Table
3. Calculate Factorial
4. Generate Fibonacci Series
5. Check Prime Number
6. Check Palindrome Number
7. Exit
==========================================
Enter Your Choice:3
Enter a number to calculate its factorial: 5 
Factorial of 1 is: 1
Factorial of 2 is: 2
Factorial of 3 is: 6
Factorial of 4 is: 24
Factorial of 5 is: 120


=========================================
 CONDITIONAL AND LOOP CONTROL PROGRAM
=========================================
1. Check Scholarship Eligibility
2. Generate Multipliacation Table
3. Calculate Factorial
4. Generate Fibonacci Series
5. Check Prime Number
6. Check Palindrome Number
7. Exit
==========================================
Enter Your Choice:4
Enter the number of terms for Fibonacci series: 6
Fibonacci Series: 0 1 1 2 3 5 

=========================================
 CONDITIONAL AND LOOP CONTROL PROGRAM
=========================================
1. Check Scholarship Eligibility
2. Generate Multipliacation Table
3. Calculate Factorial
4. Generate Fibonacci Series
5. Check Prime Number
6. Check Palindrome Number
7. Exit
==========================================
Enter Your Choice:5
Enter a number to check if its prime number or not: 87
87 is not a prime number.


=========================================
 CONDITIONAL AND LOOP CONTROL PROGRAM
=========================================
1. Check Scholarship Eligibility
2. Generate Multipliacation Table
3. Calculate Factorial
4. Generate Fibonacci Series
5. Check Prime Number
6. Check Palindrome Number
7. Exit
==========================================
Enter Your Choice:6
Enter a number to check if it is palindrome or not: 67
67 is not a palindrome number.


=========================================
 CONDITIONAL AND LOOP CONTROL PROGRAM
=========================================
1. Check Scholarship Eligibility
2. Generate Multipliacation Table
3. Calculate Factorial
4. Generate Fibonacci Series
5. Check Prime Number
6. Check Palindrome Number
7. Exit
==========================================
Enter Your Choice:7
Exiting the program. Goodbye!
Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % */