/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/

#include <stdio.h>

int main()
{
    int marks[5], n, i, j;
    int sum = 0, highest, lowest;
    int search, found = 0, temp;
    float average;

    char str[100];
    int vowels = 0, words = 0, digits = 0, special = 0;
    int inWord = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    if(n < 1 || n > 5)
    {
        printf("Invalid number of students!\n");
        return 0;
    }

    printf("\nEnter Student Marks:\n");

    for(i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("\nStudent Marks: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\nSum of marks: %d\n", sum);

    average = (float)sum / n;

    printf("Average of marks: %.2f\n", average);

    highest = marks[0];
    lowest = marks[0];

    for(i = 0; i < n; i++)
    {
        if(marks[i] > highest)
        {
            highest = marks[i];
        }

        if(marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("Highest marks: %d\n", highest);
    printf("Lowest marks: %d\n", lowest);

    // Searching for marks
    printf("\nEnter marks to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(marks[i] == search)
        {
            printf("Marks found at position %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Marks not found\n");
    }

    // Sorting marks in ascending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(marks[i] > marks[j])
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    printf("\nSorted Marks: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    // String processing
    getchar();

    printf("\n\nEnter a sentence: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        // Counting vowels
        if(str[i] == 'a' || str[i] == 'e' ||
           str[i] == 'i' || str[i] == 'o' ||
           str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }

        // Counting digits
        if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }

        // Counting words
        if(str[i] != ' ' && str[i] != '\n' &&
           str[i] != '\t' && inWord == 0)
        {
            words++;
            inWord = 1;
        }

        if(str[i] == ' ' || str[i] == '\n' ||
           str[i] == '\t')
        {
            inWord = 0;
        }

        // Counting special characters
        if(!((str[i] >= 'A' && str[i] <= 'Z') ||
             (str[i] >= 'a' && str[i] <= 'z') ||
             (str[i] >= '0' && str[i] <= '9') ||
             str[i] == ' ' || str[i] == '\n' ||
             str[i] == '\t'))
        {
            special++;
        }
    }

    printf("\n--- String Analysis ---\n");
    printf("Vowels = %d\n", vowels);
    printf("Words = %d\n", words);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}

// Output of the program 

/*Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % "/Users/Mayank/Github /First-Year-/Co
ntents/Mayank Class Problem /Experiment_04"
Enter the number of students: 3

Enter Student Marks:
Student 1: 89
Student 2: 98
Student 3: 78

Student Marks: 89 98 78 
Sum of marks: 265
Average of marks: 88.33
Highest marks: 98
Lowest marks: 78

Enter marks to search: 89
Marks found at position 1

Sorted Marks: 78 89 98 

Enter a sentence: I am learning C Language 

--- String Analysis ---
Vowels = 9
Words = 5
Digits = 0
Special Characters = 0
Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % */


