/*Name: Mayank Rathor
Batch: F-2
Roll Number: 31
*/

#include <stdio.h>

int main()
{
    char name[30];
    int roll_no;
    float m1, m2, m3, m4, m5;


    printf("Enter Student Name: ");
    scanf("%29s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

   
    printf("\nEnter Marks of 5 Subjects:\n");

    printf("Subject 1: ");
    scanf("%f", &m1);

    printf("Subject 2: ");
    scanf("%f", &m2);

    printf("Subject 3: ");
    scanf("%f", &m3);

    printf("Subject 4: ");
    scanf("%f", &m4);

    printf("Subject 5: ");
    scanf("%f", &m5);

    
    float Total = m1 + m2 + m3 + m4 + m5;
    float percentage = (Total / 500) * 100;

   
    printf("\n");
    printf("====================================================\n");
    printf("              STUDENT ACADEMIC REPORT               \n");
    printf("====================================================\n");

    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll_no);

    printf("----------------------------------------------------\n");
    printf("Subject         Marks\n");
    printf("----------------------------------------------------\n");

    printf("Subject 1       %.2f\n", m1);
    printf("Subject 2       %.2f\n", m2);
    printf("Subject 3       %.2f\n", m3);
    printf("Subject 4       %.2f\n", m4);
    printf("Subject 5       %.2f\n", m5);

    printf("----------------------------------------------------\n");
    printf("Total Marks %.2f / 500\n", Total);
    printf("Percentage %.2f%%\n", percentage);

    printf("----------------------------------------------------\n");

    
    if (percentage >= 90)
    {
        printf("Grade A+\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade A\n");
    }
    else if (percentage >= 70)
    {
        printf("Grade B+\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade B\n");
    }
    else if (percentage >= 50)
    {
        printf("Grade C+\n");
    }
    else if (percentage >= 40)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade F\n");
    }

    
    if (percentage >= 40)
    {
        printf("Result PASS\n");
    }
    else
    {
        printf("Result FAIL\n");
    }

    printf("====================================================\n");
    printf("              END OF ACADEMIC REPORT                \n");
    printf("====================================================\n");

    return 0;
}


// Output of the Program:

/*  Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % "/Users/Mayank/Github /First-Year-/Contents/Mayank Class Problem /Experiment_01"
Enter Student Name: Mayank
Enter Roll Number: 31

Enter Marks of 5 Subjects:
Subject 1: 89
Subject 2: 90
Subject 3: 85
Subject 4: 80
Subject 5: 95

====================================================
              STUDENT ACADEMIC REPORT               
====================================================
Student Name : Mayank
Roll Number  : 31
----------------------------------------------------
Subject         Marks
----------------------------------------------------
Subject 1       89.00
Subject 2       90.00
Subject 3       85.00
Subject 4       80.00
Subject 5       95.00
----------------------------------------------------
Total Marks 439.00 / 500
Percentage 87.80%
----------------------------------------------------
Grade A
Result PASS
====================================================
              END OF ACADEMIC REPORT                
====================================================
Mayank@Mayanks-MacBook-Pro Mayank Class Problem  % */
